#include"common.h"
#include"login.h"
#include"input.h"

int login(int *page,USER *u) //登录界面控制函数
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
                    puthz(320,160,"账号",16,16,BLACK);
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
                    puthz(320,250,"密码",16,16,BLACK);
                    light_line(320,310,250,BLACK);
                }
                continue;
            }
            else if(mouse_press(320,280,570,310)==1)
            {
                MouseS=0;
                puthz(320,250,"密码",16,16,BLACK);
                light_line(320,310,250,BLACK);

                temp = input_admin(key,320,310,20,WHITE,0);
                strcpy(u->password,key);
                temp=0;
                bar(300,410,500,450);
            }
        }

        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=320 && MouseY<=335))
        {//忘记密码
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
        {//登录框
            MouseS=1;
            if(mouse_press(300,360,580,400)==2)
            {
                MouseS=1;
                puthz(420,370,"登录",16,16,BLACK);
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

                        puthz(300,410,"登陆成功",16,14,RED);

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
                        puthz(300,410,"密码错误",16,14,RED);
                        delay(1000);
                        break;
                    }
                    case 3:
                    {
                        bar(300,410,500,450);
                        puthz(300,410,"账号不存在",16,14,RED);
                        delay(1000);
                    }
                    default:
                        break;
                }
            }
        }

        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=420 && MouseY<=435))
        {//快速注册
            if(mouse_press(525,420,590,435)==2)
            {
                MouseS=1;
                puthz(525,420,"快速注册",16,16,LIGHTBLUE);
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
        {//鼠标悬停在非按钮上时
            MouseS = 0;
            puthz(320, 160, "账号", 16, 16, LIGHTGRAY);
            light_line(320, 220, 250, LIGHTGRAY);
            puthz(320, 250, "密码", 16, 16, LIGHTGRAY);
            light_line(320, 310, 250, LIGHTGRAY);
            puthz(420,370, "登录", 16, 16, WHITE);
        }

    }
}

void welcome_screen()        //背景绘制
{
    cleardevice();
    setlinestyle(0,0,1);
    setcolor(BLACK);//线型

    setfillstyle(1,WHITE);
    bar(0,0,640,480);//背景

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
    floodfill(1, 251, CYAN);//装饰背景

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
    floodfill(229,231,BLACK);//画外侧圆环

    puthz(80,135,"欢乐谷",48,55,BLACK);
    settextstyle(2,0,5);
    outtextxy(130,200,"Happy Valley");//圆环内文字

    puthz(100,400,"欢乐谷",24,30,BLACK);
    puthz(70,430,"旅游模拟系统",24,25,BLACK);//logo下方文字
}
void login_screen()  //登陆界面绘制
{
    puthz(320,160,"账号",16,16,LIGHTGRAY);
    setcolor(LIGHTGRAY);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    line(320,220,570,220);
    puthz(320,250,"密码",16,16,LIGHTGRAY);
    line(320,310,570,310);
    puthz(525,320,"忘记密码",16,16,LIGHTGRAY);

    draw_rounded_rectangle(300,360,580,400,LIGHTGRAY,LIGHTGRAY);//画圆角矩形
    puthz(420,370,"登录",16,16,WHITE);

    puthz(525,420,"快速注册",16,16,BLUE);
}
void register_screen()  //注册界面绘制
{
    setcolor(LIGHTGRAY);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    puthz(300,120,"用户名",16,16,LIGHTGRAY);
    line(360,140,560,140);
    puthz(300,170,"手机号",16,16,LIGHTGRAY);
    line(360,190,560,190);
    puthz(300,220,"密码",16,16,LIGHTGRAY);
    line(360,240,560,240);
    puthz(295,280,"确认密码",16,16,LIGHTGRAY);
    line(360,300,560,300);
    draw_rounded_rectangle(300,360,580,400,LIGHTGRAY,LIGHTGRAY);
    puthz(420,370,"注册",16,16,BLACK);
    puthz(525,420,"返回登录",16,16,BLUE);
}
void register_page(int *page, USER *u) //注册界面控制函数
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
                puthz(300,120,"用户名",16,16,BLACK);
                light_line(360,140,200,BLACK);
                continue;
            }
            else if(mouse_press(360,120,560,140)==1)
            {
                MouseS=0;
                puthz(300,120,"用户名",16,16,BLACK);
                light_line(360,140,200,BLACK);

                temp = input_admin(U,360,140,20,WHITE,1);
                if(temp<6 || temp> 12)
                {
                    bar(300,310,570,350);
                    puthz(300,310,"用户名长度不符合要求",16,14,RED);
                }
                else
                {
                    bar(300,310,570,350);
                }
                if(!judge_sameuser(U))
                {
                    bar(300,310,570,350);
                    puthz(300,310,"用户名已存在",16,14,RED);
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
        {//手机号
            if(mouse_press(360,170,560,190)==2)
            {
                MouseS=2;
                puthz(300,170,"手机号",16,16,BLACK);
                light_line(360,190,200,BLACK);
                continue;
            }
            else if(mouse_press(360,170,560,190)==1)
            {
                MouseS=0;
                puthz(300,170,"手机号",16,16,BLACK);
                light_line(360,190,200,BLACK);
                bar(300,310,570,350);

                temp = input_admin(PH,360,190,11,WHITE,1);
                {
                    if(!judge_phone(PH) || temp !=11)
                    {
                        bar(300,310,570,350);
                        puthz(300,310,"手机号格式错误",16,14,RED);
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
                puthz(300,220,"密码",16,16,BLACK);
                light_line(360,240,200,BLACK);
                continue;
            }
            else if(mouse_press(360,220,560,240)==1)
            {
                MouseS=1;
                puthz(300,220,"密码",16,16,BLACK);
                light_line(360,240,200,BLACK);

                temp = input_admin(P,360,240,16,WHITE,0);
                if(temp<6)
                {
                    bar(300,310,570,350);
                    puthz(300,310,"密码长度至少为六位",16,14,RED);
                }
                else if(!judge_key(P))
                {
                    bar(300,310,570,350);
                    puthz(300,310,"密码不符合规范",16,14,RED);
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
                puthz(295,280,"确认密码",16,16,BLACK);
                light_line(360,300,200,BLACK);
                continue;
            }
            else if(mouse_press(360,280,560,300)==1)
            {
                MouseS=0;
                puthz(295,280,"确认密码",16,16,BLACK);
                light_line(360,300,200,BLACK);
                bar(300,310,570,350);

                temp = input_admin(CP,360,300,16,WHITE,0);

                if(strcmp(P,CP)!=0)
                {
                    bar(300,310,570,350);
                    puthz(300,310,"两次密码不一致",16,14,RED);
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
                puthz(420,370,"注册",16,16,WHITE);
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

                    puthz(300,310,"注册成功",16,14,RED);
                    delay(1000);

                    cleardevice();
                    return;
                }
                else
                {
                    bar(300,310,570,350);
                    if(!state1)                  
                        puthz(300,310,"请输入规范的用户名",16,14,RED);
                    else if(!state2)
                        puthz(300,310,"请输入正确的手机号",16,14,RED);
                    else if(!state3)
                        puthz(300,310,"请输入规范的密码",16,14,RED);
                    else if(!state4)
                        puthz(300,310,"请确认密码",16,14,RED);
                    else if(strlen(U)<6 && strlen(P)>=6)
                        puthz(300,310,"用户名长度至少为六位",16,14,RED);
                    else if(strlen(P) < 6 && strlen(U)>=6)
                        puthz(300,310,"密码长度至少为六位",16,14,RED);
                    else if(strlen(P)<6 && strlen(U)<6)
                        puthz(300,310,"请输入规范的账号密码",16,14,RED);
                    else if(strcmp(P,CP)!=0 && strlen(P)>=6)
                        puthz(300,310,"两次输入的密码不一致",16,14,RED);
                }
            }
        }
        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=420 && MouseY<=445))
        {//返回登陆
            if(mouse_press(525,420,590,445)==2)
            {
                MouseS=1;
                puthz(525,420,"返回登录",16,16,LIGHTBLUE);
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
            puthz(300,120,"用户名",16,16,LIGHTGRAY);
            line(360,140,560,140);
            puthz(300,170,"手机号",16,16,LIGHTGRAY);
            line(360,190,560,190);
            puthz(300,220,"密码",16,16,LIGHTGRAY);
            line(360,240,560,240);
            puthz(295,280,"确认密码",16,16,LIGHTGRAY);
            line(360,300,560,300);
            puthz(420,370,"注册",16,16,BLACK);
            puthz(525,420,"返回登录",16,16,BLUE);
        }
    }
}

void forget_screen()    //忘记密码界面绘制
{
    setcolor(LIGHTGRAY);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    puthz(300,120,"用户名",16,16,LIGHTGRAY);
    line(360,140,560,140);
    puthz(300,170,"手机号",16,16,LIGHTGRAY);
    line(360,190,560,190);
    puthz(300,220,"新密码",16,16,LIGHTGRAY);
    line(360,240,560,240);
    puthz(295,280,"确认密码",16,16,LIGHTGRAY);
    line(360,300,560,300);
    draw_rounded_rectangle(300,360,580,400,LIGHTGRAY,LIGHTGRAY);
    puthz(420,370,"确认",16,16,BLACK);
    puthz(525,420,"返回登录",16,16,BLUE);
}

void forget_page(int *page,USER *u)
{
    int temp=0;
    int i;
    char U[15]={'\0'};  //6-12 username
    char PH[15]={'\0'}; //11 phonenumber
    char P[15]={'\0'};  //6-16 password
    char CP[15]={'\0'}; //6-16 comfirm password
    int state1 = 0;       //内容输入判断参数
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
        {//用户名
            if(mouse_press(360,120,560,140)==2)
            {
                MouseS=2;
                puthz(300,120,"用户名",16,16,BLACK);
                light_line(360,140,200,BLACK);
                continue;
            }
            else if(mouse_press(360,120,560,140)==1)
            {
                MouseS=0;
                puthz(300,120,"用户名",16,16,BLACK);
                light_line(360,140,200,BLACK);
                temp=input_admin(U,360,140,15,WHITE,1);
                if(temp<6)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"用户名长度不能小于六位",16,14,RED);
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
                puthz(300,170,"手机号",16,16,BLACK);
                light_line(360,190,200,BLACK);
                continue;
            }
            else if(mouse_press(360,170,560,190)==1)
            {
                MouseS=0;
                puthz(300,170,"手机号",16,16,BLACK);
                light_line(360,190,200,BLACK);
                bar(300,320,550,350);
                temp=input_admin(PH,360,190,11,WHITE,1);
                if(strlen(PH)<11)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"手机号格式错误",16,14,RED);
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
                    case 2://手机号不匹配
                    {
                        bar(300,320,550,350);
                        puthz(300,320,"号码错误",16,14,RED);
                        delay(100);
                        break;
                    }
                    case 3://未找到用户名
                    {
                        bar(300,320,550,350);
                        puthz(300,320,"未找到用户名",16,14,RED);
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
                puthz(300,220,"新密码",16,16,BLACK);
                light_line(360,240,200,BLACK);
                continue;
            }
            if(mouse_press(360,220,560,240)==1)
            {
                MouseS=0;
                puthz(300,220,"新密码",16,16,BLACK);
                light_line(360,240,200,BLACK);

                temp=input_admin(P,360,240,15,WHITE,0);
                if(temp<6)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"密码长度过短",16,14,RED);
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
                puthz(295,280,"确认密码",16,16,BLACK);
                light_line(360,300,200,BLACK);
                continue;
            }
            if(mouse_press(360,280,560,300)==1)
            {
                MouseS=0;
                puthz(295,280,"确认密码",16,16,BLACK);
                light_line(360,300,200,BLACK);
                bar(300,320,550,350);

                temp=input_admin(CP,360,300,15,WHITE,0);

                if(strcmp(P,CP)!=0)
                {
                    bar(300,320,550,350);
                    puthz(300,320,"两次密码不一致",16,14,RED);
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
        {//确认按钮
            MouseS=1;
            if(mouse_press(300,360,580,400)==2)
            {
                MouseS=1;
                puthz(420,370,"确认",16,16,WHITE);
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
                        puthz(300,320,"请输入用户名",16,14,RED);
                    else if(!state2)
                        puthz(300,320,"请输入手机号",16,14,RED);
                    else if(!state3)
                        puthz(300,320,"请输入新密码",16,14,RED);
                    else if(!state4)
                        puthz(300,320,"请确认新密码",16,14,RED);
                }
            }
        }
        else if((MouseX>=525 && MouseX<=590)&&(MouseY>=420 && MouseY<=445))
        {//返回登陆
            if(mouse_press(525,420,590,445)==2)
            {
                MouseS=1;
                puthz(525,420,"返回登录",16,16,LIGHTBLUE);
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
            puthz(300,120,"用户名",16,16,LIGHTGRAY);
            line(360,140,560,140);
            puthz(300,170,"手机号",16,16,LIGHTGRAY);
            line(360,190,560,190);
            puthz(300,220,"新密码",16,16,LIGHTGRAY);
            line(360,240,560,240);
            puthz(295,280,"确认密码",16,16,LIGHTGRAY);
            line(360,300,560,300);
            puthz(420,370,"确认",16,16,BLACK);
            puthz(525,420,"返回登录",16,16,BLUE);
		}
    }
}