#include"common.h"
#include"login.h"
#include"input.h"

int login(int *page,USER *u) //��¼������ƺ���
{
    int num=0;
    int temp=0;
    int state1=0;
    int state2=0;
    char *user = (char *)malloc(sizeof(char) * 10);
    char *key = (char *)malloc(sizeof(char) * 12);
    memset(user, '\0', sizeof(user));
    memset(key, '\0', sizeof(key));
    clrmous(MouseX, MouseY); 
    welcome_screen();
    login_screen();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >=320 && MouseX <=570)&&(MouseY >=190 && MouseY <=220))
        {
            if(mouse_press(320,191,570,220)==2)
            {
                MouseS=2;
                if(num == 0 && state1 == 0)
                {
                    puthz(320,160,"�˺�",16,16,BLACK);
                    light_line(320,220,250,BLACK);
                }
                continue;
            }
            if(mouse_press(320,191,570,220)==1)
            {
                MouseS=0;
                temp = input_admin(user,320,220,20,WHITE,1);
                strcpy(u->username,user);
                temp=0;
                bar(300,410,500,450);
            }
        }

        else if((MouseX >=320 && MouseX <=570)&&(MouseY >=280 && MouseY <=310))
        {
            MouseS=2;
            if(mouse_press(320,280,570,310)==2)
            {
                MouseS=2;
                if(num == 0 && state2 == 0)
                {
                    puthz(320,250,"����",16,16,BLACK);
                    light_line(320,310,250,BLACK);
                }
                continue;
            }
            else if(mouse_press(320,280,570,310)==1)
            {
                MouseS=0;
                puthz(320,250,"����",16,16,BLACK);
                light_line(320,310,250,BLACK);

                temp = input_admin(key,320,310,20,WHITE,0);
                strcpy(u->password,key);
                temp=0;
                bar(300,410,500,450);
            }
        }

        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=320 && MouseY<=335))
        {//��������
            MouseS=1;
            if(mouse_press(525,320,590,335)==1)
            {
                *page = 1;
                free(user);
                free(key);
                break;
            }
        }

        else if((MouseX>=300 && MouseX<=580)&&(MouseY>=360 && MouseY<=400))
        {//��¼��
            MouseS=1;
            if(mouse_press(300,360,580,400)==2)
            {
                MouseS=1;
                puthz(420,370,"��¼",16,16,BLACK);
            }
            else if(mouse_press(300,360,580,400)==1)
            {
				MouseS=1;

                temp = cmp_login(u);

                switch(temp)
                {
                    case 1:
                    {
                        setfillstyle(SOLID_FILL, WHITE);
                        bar(300,410,500,450);

                        puthz(300,410,"��½�ɹ�",16,14,RED);

                        free(user);
                        free(key);

                        delay(300);
                        cleardevice();
                        
                        MouseS=0;
                        *page=3;

                        cleardevice();
                        return;
                    }
                    case 2:
                    {   
                        bar(300,410,500,450);
                        puthz(300,410,"�������",16,14,RED);
                        delay(1000);
                        break;
                    }
                    case 3:
                    {
                        bar(300,410,500,450);
                        puthz(300,410,"�˺Ų�����",16,14,RED);
                        delay(1000);
                    }
                    default:
                        break;
                }
            }
        }

        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=420 && MouseY<=435))
        {//����ע��
            if(mouse_press(525,420,590,435)==2)
            {
                MouseS=1;
                puthz(525,420,"����ע��",16,16,LIGHTBLUE);
            }
            else if(mouse_press(525,420,590,435)==1)
            {
                MouseS=0;
                *page = 2;
                free(user);
                free(key);
                clrmous(MouseX,MouseY);
                delay(90);
                cleardevice();
                return;
            }
        }

        else
        {//�����ͣ�ڷǰ�ť��ʱ
            MouseS = 0;
            puthz(320, 160, "�˺�", 16, 16, LIGHTGRAY);
            light_line(320, 220, 250, LIGHTGRAY);
            puthz(320, 250, "����", 16, 16, LIGHTGRAY);
            light_line(320, 310, 250, LIGHTGRAY);
            puthz(420,370, "��¼", 16, 16, WHITE);
        }

    }
}

void welcome_screen()        //��������
{
    cleardevice();
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,WHITE);
    bar(0,0,640,480);//����

    setcolor(YELLOW);
    circle(640,40,100);
    setfillstyle(1,YELLOW);
    floodfill(620,40,YELLOW);
    setcolor(LIGHTGREEN);
    circle(-10, -10, 120);
    setfillstyle(1,LIGHTGREEN);
    floodfill(1, 1, LIGHTGREEN);
    setcolor(YELLOW);
    circle(50, 460, 180);
    setfillstyle(1,YELLOW);
    floodfill(41, 421, YELLOW);
    setcolor(CYAN);
    circle(-145, 220, 220);
    setfillstyle(1,CYAN);
    floodfill(1, 251, CYAN);//װ�α���

    setcolor(BLACK);
    circle(160,160,100);
    circle(160,160,90);
    line(160,59,160,71);
    line(160,249,160,261);
    line(59,160,71,160);
    line(249,160,261,160);
    line(90,90,97,97);
    line(231,90,224,97);
    line(90,231,97,224);
    line(231,231,224,224);
    setfillstyle(1,RED);
    floodfill(65,158,BLACK);
    setfillstyle(1,YELLOW);
    floodfill(91,90,BLACK);
    setfillstyle(1,LIGHTBLUE);
    floodfill(162,62,BLACK);
    setfillstyle(1,BLUE);
    floodfill(255,158,BLACK);
    setfillstyle(1,YELLOW);
    floodfill(255,162,BLACK);
    setfillstyle(1,GREEN);
    floodfill(65,162,BLACK);
    setfillstyle(1,BLUE);
    floodfill(92,231,BLACK);
    setfillstyle(1,LIGHTRED);
    floodfill(229,231,BLACK);//�����Բ��

    puthz(80,135,"���ֹ�",48,55,BLACK);
    settextstyle(2,0,5);
    outtextxy(130,200,"Happy Valley");//Բ��������

    puthz(100,400,"���ֹ�",24,30,BLACK);
    puthz(70,430,"����ģ��ϵͳ",24,25,BLACK);//logo�·�����
}
void login_screen()  //��½�������
{
    puthz(320,160,"�˺�",16,16,LIGHTGRAY);
    setcolor(LIGHTGRAY);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    line(320,220,570,220);
    puthz(320,250,"����",16,16,LIGHTGRAY);
    line(320,310,570,310);
    puthz(525,320,"��������",16,16,LIGHTGRAY);

    draw_rounded_rectangle(300,360,580,400,LIGHTGRAY,LIGHTGRAY);//��Բ�Ǿ���
    puthz(420,370,"��¼",16,16,WHITE);

    puthz(525,420,"����ע��",16,16,BLUE);
}
void register_screen()  //ע��������
{
    setcolor(LIGHTGRAY);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    puthz(300,120,"�û���",16,16,LIGHTGRAY);
    line(360,140,560,140);
    puthz(300,170,"�ֻ���",16,16,LIGHTGRAY);
    line(360,190,560,190);
    puthz(300,220,"����",16,16,LIGHTGRAY);
    line(360,240,560,240);
    puthz(295,280,"ȷ������",16,16,LIGHTGRAY);
    line(360,300,560,300);
    draw_rounded_rectangle(300,360,580,400,LIGHTGRAY,LIGHTGRAY);
    puthz(420,370,"ע��",16,16,BLACK);
    puthz(525,420,"���ص�¼",16,16,BLUE);
}
void register_page(int *page, USER *u) //ע�������ƺ���
{
    int temp=0;
    int num=0;

    char U[15]={'\0'};  //6-12 username
    char PH[15]={'\0'}; //11 phonenumber
    char P[15]={'\0'};  //6-16 password
    char CP[15]={'\0'}; //6-16 comfirm password

    FILE *fp;

    int state1=0;
    int state2=0;
    int state3=0;
    int state4=0;

    int i;

    memset(U,NULL,sizeof(U));
    clrmous(MouseX,MouseY);
    cleardevice();
    welcome_screen();
    register_screen();

    setfillstyle(SOLID_FILL,WHITE);

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);
        
        if((MouseX>=360 && MouseX<=560) && (MouseY>= 120 && MouseY<=140))
        {
            if(mouse_press(360,120,560,140)==2)
            {
                MouseS=2;
                puthz(300,120,"�û���",16,16,BLACK);
                light_line(360,140,200,BLACK);
                continue;
            }
            else if(mouse_press(360,120,560,140)==1)
            {
                MouseS=0;
                puthz(300,120,"�û���",16,16,BLACK);
                light_line(360,140,200,BLACK);

                temp = input_admin(U,360,140,20,WHITE,1);
                if(temp<6 || temp> 12)
                {
                    bar(300,310,570,350);
                    puthz(300,310,"�û������Ȳ�����Ҫ��",16,14,RED);
                }
                else
                {
                    bar(300,310,570,350);
                }
                if(!judge_sameuser(U))
                {
                    bar(300,310,570,350);
                    puthz(300,310,"�û����Ѵ���",16,14,RED);
                }
                else
                {
                    bar(300,310,570,350);
                }
                temp=0;
                state1=1;
            }
        }

        else if((MouseX>=360 && MouseX<=560)&&(MouseY>=170 && MouseY<=190))
        {//�ֻ���
            if(mouse_press(360,170,560,190)==2)
            {
                MouseS=2;
                puthz(300,170,"�ֻ���",16,16,BLACK);
                light_line(360,190,200,BLACK);
                continue;
            }
            else if(mouse_press(360,170,560,190)==1)
            {
                MouseS=0;
                puthz(300,170,"�ֻ���",16,16,BLACK);
                light_line(360,190,200,BLACK);
                bar(300,310,570,350);

                temp = input_admin(PH,360,190,11,WHITE,1);
                {
                    if(!judge_phone(PH) || temp !=11)
                    {
                        bar(300,310,570,350);
                        puthz(300,310,"�ֻ��Ÿ�ʽ����",16,14,RED);
                    }
                    else
                    {
                        bar(300,310,570,350);
                    }
                }
            }
            state2=1;
        }
        else if((MouseX>=360 && MouseX<=560)&&(MouseY>=220 && MouseY<=240))
        {
            if(mouse_press(360,220,560,240)==2)
            {
                MouseS=2;
                puthz(300,220,"����",16,16,BLACK);
                light_line(360,240,200,BLACK);
                continue;
            }
            else if(mouse_press(360,220,560,240)==1)
            {
                MouseS=1;
                puthz(300,220,"����",16,16,BLACK);
                light_line(360,240,200,BLACK);

                temp = input_admin(P,360,240,16,WHITE,0);
                if(temp<6)
                {
                    bar(300,310,570,350);
                    puthz(300,310,"���볤������Ϊ��λ",16,14,RED);
                }
                else if(!judge_key(P))
                {
                    bar(300,310,570,350);
                    puthz(300,310,"���벻���Ϲ淶",16,14,RED);
                }
                else
                {
                    bar(300,310,570,350);
                }
            }
            temp=0;
            state3=1;
        }
        else if((MouseX>=360 && MouseX<=560)&&(MouseY>=280 && MouseY<=300))
        {
            if(mouse_press(360,280,560,300)==2)
            {
                MouseS=2;
                puthz(295,280,"ȷ������",16,16,BLACK);
                light_line(360,300,200,BLACK);
                continue;
            }
            else if(mouse_press(360,280,560,300)==1)
            {
                MouseS=0;
                puthz(295,280,"ȷ������",16,16,BLACK);
                light_line(360,300,200,BLACK);
                bar(300,310,570,350);

                temp = input_admin(CP,360,300,16,WHITE,0);

                if(strcmp(P,CP)!=0)
                {
                    bar(300,310,570,350);
                    puthz(300,310,"�������벻һ��",16,14,RED);
                }
                else
                {
                    bar(300,310,570,350);
                }
                temp =0;
                state4 = 1;
            }   
        }
        else if((MouseX>=300 && MouseX<=580) && (MouseY>=360 && MouseY <=400))
        {
            MouseS=1;
            if(mouse_press(300,360,580,400)==2)
            {
                MouseS=1;
                puthz(420,370,"ע��",16,16,WHITE);
            }
            else if(mouse_press(300,360,580,400)==1)
            {
                MouseS=1;
                if(state1 && state2 && state3 && state4 && strlen(U) >=6 && strlen(P) >=6 && strlen(CP) >=6 && strcmp(P,CP)==0)
                {
                    fp = fopen("Database\\UserData.dat", "ab+");
                    fseek(fp,0,SEEK_END);

                    strcpy(u->username,U);
                    strcpy(u->password,P);
                    strcpy(u->phone,PH);
                    u->usernum =0;
                    fwrite(u,sizeof(USER),1,fp);

                    fclose(fp);

                    MouseS=0;
                    *page=0;

                    puthz(300,310,"ע��ɹ�",16,14,RED);
                    delay(1000);

                    cleardevice();
                    return;
                }
                else
                {
                    bar(300,310,570,350);
                    if(!state1)                  
                        puthz(300,310,"������淶���û���",16,14,RED);
                    else if(!state2)
                        puthz(300,310,"��������ȷ���ֻ���",16,14,RED);
                    else if(!state3)
                        puthz(300,310,"������淶������",16,14,RED);
                    else if(!state4)
                        puthz(300,310,"��ȷ������",16,14,RED);
                    else if(strlen(U)<6 && strlen(P)>=6)
                        puthz(300,310,"�û�����������Ϊ��λ",16,14,RED);
                    else if(strlen(P) < 6 && strlen(U)>=6)
                        puthz(300,310,"���볤������Ϊ��λ",16,14,RED);
                    else if(strlen(P)<6 && strlen(U)<6)
                        puthz(300,310,"������淶���˺�����",16,14,RED);
                    else if(strcmp(P,CP)!=0 && strlen(P)>=6)
                        puthz(300,310,"������������벻һ��",16,14,RED);
                }
            }
        }
        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=420 && MouseY<=445))
        {//���ص�½
            if(mouse_press(525,420,590,445)==2)
            {
                MouseS=1;
                puthz(525,420,"���ص�¼",16,16,LIGHTBLUE);
            }
            else if(mouse_press(525,420,590,445)==1)
            {
                MouseS=1;
                *page = 0;
                delay(100);

                cleardevice();
                return;
                break;
            }
        }
        else
        {
            MouseS=0;
            setcolor(LIGHTGRAY);
            setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
            puthz(300,120,"�û���",16,16,LIGHTGRAY);
            line(360,140,560,140);
            puthz(300,170,"�ֻ���",16,16,LIGHTGRAY);
            line(360,190,560,190);
            puthz(300,220,"����",16,16,LIGHTGRAY);
            line(360,240,560,240);
            puthz(295,280,"ȷ������",16,16,LIGHTGRAY);
            line(360,300,560,300);
            puthz(420,370,"ע��",16,16,BLACK);
            puthz(525,420,"���ص�¼",16,16,BLUE);
        }
    }
}

void forget_screen()    //��������������
{
    setcolor(LIGHTGRAY);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    puthz(300,120,"�û���",16,16,LIGHTGRAY);
    line(360,140,560,140);
    puthz(300,170,"�ֻ���",16,16,LIGHTGRAY);
    line(360,190,560,190);
    puthz(300,220,"������",16,16,LIGHTGRAY);
    line(360,240,560,240);
    puthz(295,280,"ȷ������",16,16,LIGHTGRAY);
    line(360,300,560,300);
    draw_rounded_rectangle(300,360,580,400,LIGHTGRAY,LIGHTGRAY);
    puthz(420,370,"ȷ��",16,16,BLACK);
    puthz(525,420,"���ص�¼",16,16,BLUE);
}

void forget_page(int *page,USER *u)
{
    int temp=0;
    int i;
    char U[15]={'\0'};  //6-12 username
    char PH[15]={'\0'}; //11 phonenumber
    char P[15]={'\0'};  //6-16 password
    char CP[15]={'\0'}; //6-16 comfirm password
    int state1 = 0;       //���������жϲ���
    int state2 = 0;
    int state3 = 0;
    int state4 = 0;
    memset(U,NULL,sizeof(U));
    clrmous(MouseX,MouseY);
    cleardevice();
    welcome_screen();
    forget_screen();
    setfillstyle(SOLID_FILL,WHITE);
    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);
        if((MouseX>=360&&MouseX<=560)&&(MouseY>=120&&MouseY<=140))
        {//�û���
            if(mouse_press(360,120,560,140)==2)
            {
                MouseS=2;
                puthz(300,120,"�û���",16,16,BLACK);
                light_line(360,140,200,BLACK);
                continue;
            }
            else if(mouse_press(360,120,560,140)==1)
            {
                MouseS=0;
                puthz(300,120,"�û���",16,16,BLACK);
                light_line(360,140,200,BLACK);
                temp=input_admin(U,360,140,15,WHITE,1);
                if(temp<6)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"�û������Ȳ���С����λ",16,14,RED);
                }
                else
                {
                    bar(300,320,550,350);
                }
                temp=0;
                state1=1;
            }
        }
        else if((MouseX>=360&&MouseX<=560)&&(MouseY>=170&&MouseY<=190))
        {
            if(mouse_press(360,170,560,190)==2)
            {
                MouseS=2;
                puthz(300,170,"�ֻ���",16,16,BLACK);
                light_line(360,190,200,BLACK);
                continue;
            }
            else if(mouse_press(360,170,560,190)==1)
            {
                MouseS=0;
                puthz(300,170,"�ֻ���",16,16,BLACK);
                light_line(360,190,200,BLACK);
                bar(300,320,550,350);
                temp=input_admin(PH,360,190,11,WHITE,1);
                if(strlen(PH)<11)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"�ֻ��Ÿ�ʽ����",16,14,RED);
                }
                else
                {
                    bar(300,320,550,350);
                }
                temp= cmp_phone(U,PH,P);

                switch(temp)
                {
                    case 1: 
                    {    
                        setfillstyle(SOLID_FILL, WHITE);
                        bar(300,320,550,350);
                        delay(100);
                        break;
                    }
                    case 2://�ֻ��Ų�ƥ��
                    {
                        bar(300,320,550,350);
                        puthz(300,320,"�������",16,14,RED);
                        delay(100);
                        break;
                    }
                    case 3://δ�ҵ��û���
                    {
                        bar(300,320,550,350);
                        puthz(300,320,"δ�ҵ��û���",16,14,RED);
                        delay(100);
                    }
                    default:
                        break;
                }

                state2=1;
            }
        }
        else if((MouseX>=360&&MouseX<=560)&&(MouseY>=220&&MouseY<=240))
        {
            if(mouse_press(360,220,560,240)==2)
            {
                MouseS=2;
                puthz(300,220,"������",16,16,BLACK);
                light_line(360,240,200,BLACK);
                continue;
            }
            if(mouse_press(360,220,560,240)==1)
            {
                MouseS=0;
                puthz(300,220,"������",16,16,BLACK);
                light_line(360,240,200,BLACK);

                temp=input_admin(P,360,240,15,WHITE,0);
                if(temp<6)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"���볤�ȹ���",16,14,RED);
                }
                else
                {
                    bar(300,320,550,350);
                }

                temp=0;
                state3=1;
            }
        }
        else if((MouseX>=360&&MouseX<=560)&&(MouseY>=280&&MouseY<=300))
        {
            if(mouse_press(360,280,560,300)==2)
            {
                MouseS=2;
                puthz(295,280,"ȷ������",16,16,BLACK);
                light_line(360,300,200,BLACK);
                continue;
            }
            if(mouse_press(360,280,560,300)==1)
            {
                MouseS=0;
                puthz(295,280,"ȷ������",16,16,BLACK);
                light_line(360,300,200,BLACK);
                bar(300,320,550,350);

                temp=input_admin(CP,360,300,15,WHITE,0);

                if(strcmp(P,CP)!=0)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"�������벻һ��",16,14,RED);
                }
                else
                {
                    bar(300,320,550,350);
                }
                temp=0;
                state4=1;
            }
        }
        else if((MouseX>=300&&MouseX<=580)&&(MouseY>=360&&MouseY<=400))
        {//ȷ�ϰ�ť
            MouseS=1;
            if(mouse_press(300,360,580,400)==2)
            {
                MouseS=1;
                puthz(420,370,"ȷ��",16,16,WHITE);
            }
            if(mouse_press(300,360,580,400)==1)
            {
                MouseS=1;
                if(state1 && state2 && state3 && state4)
                {
                    changepass(U,PH,P,CP,0);

                    MouseS=0;
                    *page = 0;

                    delay(1000);

                    cleardevice();
                    return;
                }
                else
                {
                    bar(300,320,550,350);
                    if(!state1)
                        puthz(300,320,"�������û���",16,14,RED);
                    else if(!state2)
                        puthz(300,320,"�������ֻ���",16,14,RED);
                    else if(!state3)
                        puthz(300,320,"������������",16,14,RED);
                    else if(!state4)
                        puthz(300,320,"��ȷ��������",16,14,RED);
                }
            }
        }
        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=420 && MouseY<=445))
        {//���ص�½
            if(mouse_press(525,420,590,445)==2)
            {
                MouseS=1;
                puthz(525,420,"���ص�¼",16,16,LIGHTBLUE);
            }
            else if(mouse_press(525,420,590,445)==1)
            {
                MouseS=0;
                *page = 0;
                delay(100);

                cleardevice();
                return;
            }
        }
        else
        {
            MouseS = 0;
            setcolor(LIGHTGRAY);
            setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
            puthz(300,120,"�û���",16,16,LIGHTGRAY);
            line(360,140,560,140);
            puthz(300,170,"�ֻ���",16,16,LIGHTGRAY);
            line(360,190,560,190);
            puthz(300,220,"������",16,16,LIGHTGRAY);
            line(360,240,560,240);
            puthz(295,280,"ȷ������",16,16,LIGHTGRAY);
            line(360,300,560,300);
            puthz(420,370,"ȷ��",16,16,BLACK);
            puthz(525,420,"���ص�¼",16,16,BLUE);
		}
    }
}