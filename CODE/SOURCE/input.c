#include"common.h"
#include"database.h"
#include"input.h"

int input_admin(char *id, int x, int y, int charnum, int color, int flag)
{ // flag==1  显示

#define h 22
#define w 17
#define space 0
#define SX x + 5 // START X
#define SY y - 25

    int k = 0;

    int i = 0;
    char t;
    clrmous(MouseX, MouseY);
    setfillstyle(SOLID_FILL, color);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setcolor(BLACK);
    settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
    settextjustify(LEFT_TEXT, TOP_TEXT);

    while (bioskey(1))
    {
        k = bioskey(0);
    }

    while (*(id + i) != '\0')
        i++;
    line(SX + i * w, SY, SX + i * w, SY + h);

    while (1)
    {

        t = bioskey(0);

        if (i < charnum)
        {

            if (t != '\n' && t != '\r' && t != ' ' && t != 033)
            { // 033:Esc

                if (t != '\b')
                {

                    *(id + i) = t;
                    *(id + i + 1) = '\0';

                    bar(SX + i * w - 1 + space, SY - 1, SX + i * w + 1 + space, SY + h); //遮盖光标
                    if (flag)
                        outtextxy(SX + i * 18, SY, id + i); //输出刚输入的字符t
                    else
                    {
                        outtextxy(SX + i * 18, SY, "*");
                    }
                    i++;
                    line(SX + i * w + space, SY, SX + i * w + space, SY + h);
                }
                else if (t == '\b' && i > 0)
                {
                    bar(SX + i * w - 1 + space, SY - 1, SX + i * w + 1 + space, SY + h); //遮盖光标
                    i--;                                                                 //减少一个字数
                    bar(SX + i * w, SY, SX + i * w + w, SY + h);                         //遮盖文字
                    line(SX + i * w + space, SY, SX + i * w + space, SY + h);            //绘制光标
                    *(id + i) = '\0';
                    *(id + i + 1) = '\0';
                }
            }
            else
            {
                bar(SX + i * w - 1 + space, SY - 1, SX + i * w + 1 + space, SY + h); //遮盖光标
                break;
            }
        }
        else
        {
            if (t != '\n' && t != '\r' && t != ' ' && t != 033)
            { // 033:Esc

                if (t == '\b' && i > 0)
                {
                    bar(SX + i * w - 1 + space, SY - 1, SX + i * w + 1 + space, SY + h); //遮盖光标
                    i--;                                                                 //减少一个字数
                    bar(SX + i * w, SY, SX + i * w + w, SY + h);                         //遮盖文字
                    line(SX + i * w + space, SY, SX + i * w + space, SY + h);            //绘制光标
                    *(id + i) = '\0';
                    *(id + i + 1) = '\0';
                }
            }
            else
            {
                bar(SX + i * w - 1 + space, SY - 1, SX + i * w + 1 + space, SY + h); //遮盖光标
                break;
            }
        }
    }
    return i;
}
int cmp_login(USER *uu)
{
    int num;
    int i,j,k;
    char temp[20];
    FILE *fp;
    USER *u;

    fp = fopen("Database\\UserData.dat","rb+");
    fseek(fp,0,SEEK_END);
    num = ftell(fp)/sizeof(USER);

    for(i=0;i<num;i++)
    {
        if((u = (USER *)malloc(sizeof(USER))) == NULL)
        {
            printf("memory allocation error in input.c\n");
            delay(3000);
            exit(1); //分配内存错误
        }

        fseek(fp,i*sizeof(USER),SEEK_SET);
        fread(u,sizeof(USER),1,fp);

        if(strcmp(uu->username,u->username)==0)
        {
            if(strcmp(uu->password,u->password)!=0) //密码错误
            {
                if(u != NULL)
                {
                    free(u);
                    u = NULL;
                }
                if(fclose(fp)!=0)
                {
                    printf("fclose error in input.c\n");
                    delay(3000);
                    exit(1);
                }
                return 2;
                break;
            }
            else if(strcmp(uu->password,u->password)==0) //登录成功
            {
                strcpy(uu->phone , u->phone);
                uu->usernum = i;
                for(j=0;j<6;j++)
                {
                    for(k=0;k<6;k++)
                    {
                        uu->ticket[j][k]=u->ticket[j][k];
                    }
                }
                for(j=0;j<5;j++)
                {
                    uu->programs[j]=u->programs[j];
                }
                if(u != NULL)
                {
                    free(u);
                    u = NULL;
                }
                if(fclose(fp)!=0)
                {
                    printf("fclose error in input.c\n");
                    delay(3000);
                    exit(1);
                }
                return 1;
                break;
            }
        }
    }
    if(i == num)
    {
        if(u != NULL)
        {
            free(u);
            u = NULL;
        }
        if(fclose(fp)!=0)
        {
            printf("fclose error in input.c\n");
            delay(3000);
            exit(1);
        }
        return 3;
    }
}

int judge_sameuser(char *new_user)
{
    int len;
    int i;
    FILE *fp;
    USER *u = NULL;
    if ((fp = fopen("Database\\UserData.dat", "rb+")) == NULL) //建立数据库
    {
        printf("open database error in input.c\n");
        delay(3000);
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    len = ftell(fp) / sizeof(USER);
    for (i = 0; i < len; i++)
    {
        if ((u = (USER *)malloc(sizeof(USER))) == NULL)
        {
            printf("memory allocation error in input.c\n");
            delay(3000);
            exit(1);
        }
        fseek(fp, i * sizeof(USER), SEEK_SET);
        fread(u, sizeof(USER), 1, fp);
        if (strcmp(u->username, new_user) == 0)
            return 0; //重复用户名返回0

        free(u);
        u = NULL;
    }
    if (u != NULL)
    {
        free(u);
        u = NULL;
    }

    if (fclose(fp) != 0)
    {
        printf("\n cannot close Database in input.c");
        delay(3000);
        exit(1);
    }
    return 1;//正常返回1
}
int cmp_phone(char *user,char *phone,char *pass)
{
    int len;
    int i;
    char temp[20];
    FILE *fp;
    USER *u;
    fp = fopen("Database\\UserData.dat", "rb+");
    fseek(fp, 0, SEEK_END);

    if ((u = (USER *)malloc(sizeof(USER))) == NULL)
    {
        printf("memory allocation error in input.c");
        delay(3000);
        exit(1); //无法分配内存
    }
    len = ftell(fp) / sizeof(USER);
    for (i = 0; i < len; i++)
    {
        

        fseek(fp, i * sizeof(USER), SEEK_SET); //从文件开头每次偏移一个user的长度
        fread(u, sizeof(USER), 1, fp);
        if (strcmp(user, u->username) == 0)
        {
            if (strcmp(phone, u->phone) != 0) //手机号不配
            {
                if (u != NULL)
                {
                    free(u);
                    u = NULL;
                }
                if (fclose(fp) != 0)
                {
                    printf("\n cannot close Database");
                    delay(3000);
                    exit(1);
                }
                return 2;

            }
            else if (strcmp(phone, u->phone) == 0)
            {
                
                strcpy(u->password, pass);
                fwrite(u,sizeof(USER),1,fp);
                if (u != NULL)
                {
                    free(u);
                    u = NULL;
                }
                if (fclose(fp) != 0)
                {
                    printf("\n cannot close Database in input.c");
                    delay(3000);
                    exit(1);
                }
                return 1;
 
            }
        }
    }
    if (i == len)
    {

        if (u != NULL)
        {
            free(u);
            u = NULL;
        }

        if (fclose(fp) != 0)
        {
            printf("\n cannot close Database");
            delay(3000);
            exit(1);
        }
        return 3;//未找到用户名
    }
}

int changepass(char user[20], char key[20], char key1[20], char key2[20], int flag)
{
    int length;
    int i, j;
    FILE *fp;
    USER *u = NULL;
    if ((fp = fopen("Database\\UserData.dat", "rb+")) == NULL)
    {
        printf("cannot open file UserDat.dat");
        delay(3000);
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    length = ftell(fp) / sizeof(USER);
    if ((u = (USER *)malloc(sizeof(USER))) == NULL)
    {
        printf("memory allocation runs wrong in input.c");
        delay(3000);
        exit(1);
    }
    for (i = 0; i < length; i++)
    {
        fseek(fp, i * sizeof(USER), SEEK_SET);
        fread(u, sizeof(USER), 1, fp);
        if (strcmp(user, u->username) == 0)
        {         
            if (strcmp(key, u->phone) != 0)
            {
                setfillstyle(SOLID_FILL,WHITE);
                bar(300,320,550,350);
                puthz(300,320,"手机号有误",16,14,RED);
                break;
            }
            else
            {
                setcolor(BLUE);
                setlinestyle(SOLID_LINE, 0, 3);
    
                u->password[0] = '\0';
                strcpy(u->password, key1);
                fseek(fp, i * sizeof(USER), SEEK_SET);
                fwrite(u, sizeof(USER), 1, fp);
                puthz(300,320,"密码修改成功",16,14,RED);
                if (u != NULL)
                {
                    free(u);
                    u = NULL;
                }
                if (fclose(fp) != 0)
                {
                    printf("\n cannot close Database");
                    exit(1);
                }
                delay(1000);
                return 0;
            }
        }
    }

    if (u != NULL)
    {
        free(u);
        u = NULL;
    }

    if (fclose(fp) != 0)
    {
        printf("\n cannot close Database");
        exit(1);
    }
    if(i==length)
    {
        setfillstyle(SOLID_FILL,WHITE);
        bar(300,320,550,350);
        puthz(300,320,"未找到相应账号",16,14,RED);
        delay(1000);
        return;
    }
        
    return 0;
}
int judge_phone(char *PH)
{
    int i;
    for (i = 0; i < strlen(PH); i++)
    {
        if (*(PH + i) < '0' || *(PH + i) > '9')
            return 0;
    }
    return 1;
}
int judge_key(char *P)
{

    int i;
    int a = 0, b = 0, c = 0;
    for (i = 0; i < strlen(P); i++)
    {
        if (*(P + i) >= '0' && *(P + i) <= '9')
            a++;
        if (*(P + i) >= 'a' && *(P + i) <= 'z')
            b++;
        if (*(P + i) >= 'A' && *(P + i) <= 'Z')
            c++;
    }
    if (a == 0 || b == 0 || c == 0)
        return 0;
    return 1;
}