#include "common.h"
#include "map.h"
#include "DrawMap.h"


void map(int *page, USER *u) //地图主控函数
{
    
    
    
    clrmous(MouseX,MouseY);

    draw_map();
    draw_back();
    draw_lxtj();


    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX>=360 && MouseX<=430) && (MouseY>=10 && MouseY<=40))//欢乐江城按钮
        {
            MouseS=1;
            if(mouse_press(360,10,430,40)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(360,10,430,40)==1)
            {
                *page=5; //跳转欢乐江城界面
                return;
            }
        }
        else if ((MouseX>=301 && MouseX<=371) && (MouseY>=95 && MouseY <=125))
        {
            MouseS=1;
            if(mouse_press(301,95,371,125)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(301,95,371,125)==1)
            {
                *page =6; //跳转渔光岛界面
                return;
            }
        }
        else if((MouseX>=103 && MouseX<=173) && (MouseY>=138 && MouseY<=170))
        {
            MouseS=1;
            if(mouse_press(103,138,173,170)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(103,138,173,170)==1)
            {
                *page =7; //跳转羽落天堂界面
                return;
            }
        }
        else if((MouseX>=512 && MouseX<=582) && (MouseY>=170 && MouseY<=200))
        {
            MouseS=1;
            if(mouse_press(512,170,582,200)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(512,170,582,200)==1)
            {
                *page =8; //跳转飓风湾界面
                return;
            }
        }
        else if((MouseX>=112 && MouseX<=182) && (MouseY>=336 && MouseY<=368))
        {
            MouseS=1;
            if(mouse_press(112,336,182,368)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(112,336,182,368)==1)
            {
                *page =9; //跳转极速世界界面
                return;
            }
        }
        else if((MouseX>=278 && MouseX<=348) && (MouseY>=326 && MouseY<=358))
        {
            MouseS=1;
            if(mouse_press(278,326,348,358)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(278,326,348,358)==1)
            {
                *page=10; //跳转梦想大道界面
                return;
            }
        }
        else if((MouseX >= 425 && MouseX <= 495) && (MouseY >= 351 && MouseY <= 382))
        {
            MouseS=1;
            if(mouse_press(425,351,495,382)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(425,351,495,382)==1)
            {
                *page=11; //跳转甜品王国界面
                return;
            }
        }
        else if((MouseX >= 350 && MouseX <= 420) && (MouseY >= 408 && MouseY <= 440))
        {
            MouseS=1;
            if(mouse_press(350,408,420,440)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(350,408,420,440)==1)
            {
                *page=12; //跳转欢乐海洋界面
                return;
            }
        }
        else if((MouseX >= 443 && MouseX <= 513) && (MouseY >= 282 && MouseY <= 315))
        {
            MouseS=1;
            if(mouse_press(443,282,513,315)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(443,282,513,315)==1)
            {
                *page=13; //跳转欢乐时光界面
                return;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            press_back(&page);
            if(mouse_press(0,0,80,64)==1)
            {
                *page=3;
                cleardevice();
                return;
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(10,445,"路线推荐",24,24,YELLOW);
            setcolor(BLACK);
            setlinestyle(0,0,3);
            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }

}

void press_back(int *page) //点击左上角返回键
{
    MouseS=1;
    if(mouse_press(0,0,80,64)==2)
    {
         MouseS=1;

        setcolor(WHITE);
        setlinestyle(0,0,3);
        line(14,29,64,29);
        line(31,12,14,29);
        line(31,44,14,29);
    }
    else if(mouse_press(0,0,80,64)==1)
    {
        delay(300);
        clrmous(MouseX,MouseY);
        return;     //跳转主界面
    }
}

void hljc_con(int *page,int flag) //欢乐江城控制函数
{
    int state1,state2,state3;
    draw_hljc();
    draw_back();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);
        if((MouseX>=433 && MouseX<=530) && (MouseY>=0 && MouseY<=35)) //点击木翼双龙
        {
            if(mouse_press(433,0,530,35)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型
                puthz(440,12+35,"打码头",16,18,BLACK);
                puthz(440,12+35+35,"凤舞九天",16,18,BLACK);

                puthz(440,12,"木翼双龙",16,18,WHITE);
            }
            else if(mouse_press(433,0,530,35)==1)
            {
                draw_intro();
                puthz(X0,Y0,"木翼双龙",48,40,YELLOW);
                
                settextstyle(2,0,6);
                setcolor(RED);
                
                outtextxy(X12,Y1,"*****");
                
                outtextxy(X12,Y2,"*****");
                
                puthz(X3,Y3,"恢弘刺激",16,16,RED);
                puthz(X0,Y4,"特别的木质轨道带来更加惊险刺激的体验",16,16,WHITE);
                puthz(165,283,"两辆过山车像巨龙一样共同战斗",16,16,WHITE);
                
                state1 = 1;
            }
        }
        else if((MouseX>=433 && MouseX<=530) && (MouseY>=35 && MouseY<=70)) //点击打码头
        {
            if(mouse_press(433,35,530,70)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型

                puthz(440,12,"木翼双龙",16,18,BLACK);
                puthz(440,12+35+35,"凤舞九天",16,18,BLACK);
                puthz(440,12+35,"打码头",16,18,WHITE);
            }
            else if(mouse_press(433,35,530,70)==1)
            {
                draw_intro();
                puthz(X0,Y0,"打码头",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(410,153,"****");
                outtextxy(410,186,"***");
                puthz(271,237,"情景再现",16,16,RED);
                puthz(165,263,"完美再现当年的汉口码头风云故事",16,16,WHITE);
                state2 = 1;
            }
        }
        else if((MouseX>=433 && MouseX<=530) && (MouseY>=70 && MouseY<=112)) //点击凤舞九天
        {
            if(mouse_press(433,70,530,112)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型
                puthz(440,12,"木翼双龙",16,18,BLACK);
                puthz(440,12+35,"打码头",16,18,BLACK);
                
                puthz(440,12+35+35,"凤舞九天",16,18,WHITE);
            }
            else if(mouse_press(433,70,530,112)==1)
            {
                draw_intro();
                puthz(165,149,"凤舞九天",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(410,153,"*****");
                outtextxy(410,186,"****");

                puthz(271,237,"翻转失重",16,16,RED);
                puthz(165,263,"风中扭转的环形轨道带来一波又一波的冲击",16,16,WHITE);

                state3 = 1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
            
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(440,12,"木翼双龙",16,18,BLACK);
            puthz(440,12+35,"打码头",16,18,BLACK);
            puthz(440,12+35+35,"凤舞九天",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}



void ygd_con(int *page,int flag)
{
    int state1,state2;
    draw_ygd();
    draw_back();
    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);
        if((MouseX>=199 && MouseX<=300) && (MouseY>=33 && MouseY<=73)) //野人谷漂流
        {
            if(mouse_press(199,33,300,73)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型

                puthz(205,45,"野人谷漂流",16,18,WHITE);
                puthz(205,45+40,"东湖塔",16,18,BLACK);
            }
            else if(mouse_press(199,33,300,73)==1)
            {
                draw_intro();

                puthz(X0,Y0,"野人谷漂流",32,30,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"野性漂流",16,16,RED);
                puthz(X0,Y4,"惊心动魄的漂流带起四溅的水花和跳动的心",16,16,WHITE);

                state1=1;
            }
        }
        else if((MouseX>=199 && MouseX<=300) && (MouseY>=73 && MouseY<=113)) //东湖塔
        {
            if(mouse_press(219,73,300,113)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型

                puthz(205,45,"野人谷漂流",16,18,BLACK);
                puthz(205,45+40,"东湖塔",16,18,WHITE);
            }
            else if(mouse_press(199,73,300,113)==1)
            {
                draw_intro();

                puthz(X0,Y0,"东湖塔",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"至高风光",16,16,RED);
                puthz(X0,Y4,"直插云霄的东湖塔带你俯览天下胜景",16,16,WHITE);

                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(205,45,"野人谷漂流",16,18,BLACK);
            puthz(205,45+40,"东湖塔",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void yltt_con(int *page,int flag)
{
    int state1,state2;
    draw_yltt();
    draw_back();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);
        if((MouseX>=27 && MouseX<=105) && (MouseY>=111 && MouseY<=148)) //丛林迷旋
        {
            MouseS=1;

            if(mouse_press(27,111,105,148)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型

                puthz(33,116,"丛林迷旋",16,18,WHITE);
                puthz(33,116+37,"浪花跳跳",16,18,BLACK);
            }
            else if(mouse_press(27,111,105,148)==1)
            {
                draw_intro();

                puthz(X0,Y0,"丛林迷旋",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"坐立不安",16,16,RED);
                puthz(X0,Y4,"和家人朋友坐在一起在丛林里的转盘上起伏",16,16,WHITE);

                state1=1;
            }
        }
        else if((MouseX>=27 && MouseX<=105) && (MouseY>=111+37 && MouseY<=185)) //浪花跳跳
        {
            MouseS=1;

            if(mouse_press(27,111+37,105,185)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型

                puthz(33,116,"丛林迷旋",16,18,BLACK);
                puthz(33,116+37,"浪花跳跳",16,18,WHITE);
            }
            else if(mouse_press(27,111+37,105,185)==1)
            {
                draw_intro();

                puthz(X0,Y0,"浪花跳跳",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"旋转上下",16,16,RED);
                puthz(X0,Y4,"伴随着音乐像浪花一样在座椅上快乐舞动",16,16,WHITE);

                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(33,116,"丛林迷旋",16,18,BLACK);
            puthz(33,116+37,"浪花跳跳",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void jfw_con(int *page,int flag)
{
    int state1=0,state2=0,state3=0;

    draw_jfw();
    draw_back();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);

        if((MouseX>=505 && MouseX<=590) && (MouseY>=211 && MouseY<=211+32)) //激流勇进
        {
            if(mouse_press(505,211,590,211+32)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型

                puthz(511,215,"激流勇进",16,18,WHITE);
                puthz(511,215+32,"完美风暴",16,18,BLACK);
                puthz(511,215+64,"魂断血域",16,18,BLACK);
            }
            else if(mouse_press(505,211,590,211+32)==1)
            {
                draw_intro();

                puthz(X0,Y0,"激流勇进",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"失重惊险",16,16,RED);
                puthz(X0,Y4,"在巨浪中起伏在船只上感受激流",16,16,WHITE);

                state1=1;
            }
        }
        else if((MouseX>=505 && MouseX<=590) && (MouseY>=244 && MouseY<=244+32)) //完美风暴
        {
            if(mouse_press(505,244,590,244+32)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(511,215,"激流勇进",16,18,BLACK);
                puthz(511,215+32,"完美风暴",16,18,WHITE);
                puthz(511,215+64,"魂断血域",16,18,BLACK);
            }
            else if(mouse_press(505,244,590,244+32)==1)
            {
                draw_intro();

                puthz(X0,Y0,"完美风暴",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"天空翻转失重",16,16,RED);
                puthz(X0,Y4,"在漩涡和翻转中挑战自我享受刺激",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX>=505 && MouseX<=590) && (MouseY>=277 && MouseY<=277+32)) //魂断血域
        {
            if(mouse_press(505,277,590,277+32)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(511,215,"激流勇进",16,18,BLACK);
                puthz(511,215+32,"完美风暴",16,18,BLACK);
                puthz(511,215+64,"魂断血域",16,18,WHITE);
            }
            else if(mouse_press(505,277,590,277+32)==1)
            {
                draw_intro();

                puthz(X0,Y0,"魂断血域",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"***");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"灵异惊悚",16,16,RED);
                puthz(X0,Y4,"在阴森恐怖又奇特的空间中惊声尖叫吧",16,16,WHITE);
                state3=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(511,215,"激流勇进",16,18,BLACK);
            puthz(511,215+32,"完美风暴",16,18,BLACK);
            puthz(511,215+64,"魂断血域",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void jssj_con(int *page,int flag)
{
    int state1=0,state2=0;
    
    draw_jssj();
    draw_back();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);

        if((MouseX>=183 && MouseX<=267) && (MouseY>=327 && MouseY<=372))
        {
            if(mouse_press(183,327,267,372)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(189,335,"极速飞车",16,18,WHITE);
                puthz(189,335+45,"太阳神车",16,18,BLACK);
            }
            else if(mouse_press(183,327,267,372)==1)
            {
                draw_intro();

                puthz(X0,Y0,"极速飞车",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"急速惊险",16,16,RED);
                puthz(X0,Y4,"以导弹的速度体会我们最富盛名的过山车",16,16,WHITE);

                state1=1;
            }
        }
        else if((MouseX>=183 && MouseX<=267) && (MouseY>=372 && MouseY<=417))
        {
            if(mouse_press(183,372,267,417)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(189,335,"极速飞车",16,18,BLACK);
                puthz(189,335+45,"太阳神车",16,18,WHITE);
            }
            else if(mouse_press(183,372,267,417)==1)
            {
                draw_intro();

                puthz(X0,Y0,"太阳神车",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"*****");

                puthz(X3,Y3,"摇摆旋转",16,16,RED);
                puthz(X0,Y4,"像大摆锤一样超越速度体验最刺激的失重",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(189,335,"极速飞车",16,18,BLACK);
            puthz(189,335+45,"太阳神车",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void mxdd_con(int *page,int flag)
{
    int state1=0,state2=0;

    draw_mxdd();
    draw_back();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);

        if((MouseX >= 350 && MouseX <= 425) && (MouseY >= 320 && MouseY <= 360))
        {
            MouseS=1;
            if(mouse_press(350,320,425,360)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(356,334,"天地双雄",16,18,WHITE);
                puthz(356,334+40,"皇家转马",16,18,BLACK);
            }
            else if(mouse_press(350,320,425,360)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"天地双雄",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"*****");

                puthz(X3,Y3,"骤升骤降",16,16,RED);
                puthz(X0,Y4,"在天与地的极速穿梭间感受刺激吧",16,16,WHITE);
                state1=1;
            }
        }
        else if((MouseX >= 350 && MouseX <= 425) && (MouseY >= 360 && MouseY <= 402))
        {
            MouseS=1;

            if(mouse_press(350,360,425,402)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(356,334,"天地双雄",16,18,BLACK);
                puthz(356,334+40,"皇家转马",16,18,WHITE);
            }
            else if(mouse_press(350,360,425,402)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"皇家转马",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"**");

                puthz(X3,Y3,"梦幻唯美",16,16,RED);
                puthz(X0,Y4,"在童话般的木马上享受浪漫吧",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(356,334,"天地双雄",16,18,BLACK);
            puthz(356,334+40,"皇家转马",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void tpwg_con(int *page,int flag)
{
    int state1=0,state2=0,state3=0;

    draw_tpwg();
    draw_back();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);
        if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 324 && MouseY <= 371))
        {
            MouseS=1;

            if(mouse_press(496,324,595,371)==2)
            {
                MouseS = 1;
                puthz(500,333,"蛋糕皇宫",16,18,WHITE);
                puthz(500,333+44,"梦幻糖果",16,18,BLACK);
                puthz(500,333+88,"靴子警局",16,18,BLACK);
            }
            else if(mouse_press(496,324,595,371)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"蛋糕皇宫",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"**");

                puthz(X3,Y3,"全景虚拟现实",16,16,RED);
                puthz(X0,Y4,"真正的全景动画与最逼真的视效",16,16,WHITE);
                state1=1;
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 371 && MouseY <= 415))
        {
            MouseS=1;

            if(mouse_press(496,371,595,415)==2)
            {
                MouseS = 1;
                puthz(500,333,"蛋糕皇宫",16,18,BLACK);
                puthz(500,333+44,"梦幻糖果",16,18,WHITE);
                puthz(500,333+88,"靴子警局",16,18,BLACK);
            }
            else if(mouse_press(496,371,595,415)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"梦幻糖果",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"甜蜜激战天空飞船",16,16,RED);
                puthz(X0,Y4,"在甜品飞船中起伏翻飞弹跳不断",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 415 && MouseY <= 456))
        {
            MouseS=1;

            if(mouse_press(496,415,595,456)==2)
            {
                MouseS = 1;
                puthz(500,333,"蛋糕皇宫",16,18,BLACK);
                puthz(500,333+44,"梦幻糖果",16,18,BLACK);
                puthz(500,333+88,"靴子警局",16,18,WHITE);
            }
            else if(mouse_press(496,415,595,456)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"靴子警局",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"攀爬乐园",16,16,RED);
                puthz(X0,Y4,"在靴子警局挑战最适合儿童的攀爬体验",16,16,WHITE);
                state3=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(500,333,"蛋糕皇宫",16,18,BLACK);
            puthz(500,333+44,"梦幻糖果",16,18,BLACK);
            puthz(500,333+88,"靴子警局",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void hlhy_con(int *page,int flag)
{
    int state1=0,state2=0;

    draw_back();
    draw_hlhy();


    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);

        if((MouseX>=275 && MouseX<=347) && (MouseY>=380 && MouseY<=430))
        {
            MouseS=1;
            if(mouse_press(275,380,347,430)==2)
            {
                MouseS=1;
                puthz(278,400,"飞跃长江",16,18,WHITE);
                puthz(278,400+50,"海马骑士",16,18,BLACK);
            }
            else if(mouse_press(275,380,347,430)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"飞跃长江",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"华中首个七维球幕飞行影院",16,16,RED);
                puthz(X0,Y4,"以最身临其境的技术带你飞跃亚洲第一长河",16,16,WHITE);
                state1=1;
            }
        }
        else if((MouseX>=275 && MouseX<=347) && (MouseY>=430 && MouseY<=480))
        {
            MouseS=1;
            if(mouse_press(275,430,347,480)==2)
            {
                MouseS=1;
                puthz(278,400,"飞跃长江",16,18,BLACK);
                puthz(278,400+50,"海马骑士",16,18,WHITE);
            }
            else if(mouse_press(275,430,347,480)==1)
            {
                MouseS=1;
                draw_intro();

                puthz(X0,Y0,"海马骑士",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"坐上我们最可爱的海马",16,16,RED);
                puthz(X0,Y4,"超奇妙微型失重跳楼机",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    cleardevice();
                    clrmous(MouseX,MouseY);
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(278,400,"飞跃长江",16,18,BLACK);
            puthz(278,400+50,"海马骑士",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }       
}

void hlsg_con(int *page,int flag)
{
    int state1=0,state2=0;
    draw_back();
    draw_hlsg();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);

        if((MouseX>=513 && MouseX<=592) && (MouseY>=260 && MouseY<=288))
        {
            if(mouse_press(513,260,592,288)==2)
            {
                MouseS=1;
                puthz(513+5,265,"飓风飞椅",16,18,WHITE);
                puthz(518,265+28,"能量风暴",16,18,BLACK);
            }
            else if(mouse_press(513,260,592,288)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"飓风飞椅",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"高速飘荡旋转",16,16,RED);
                puthz(X0,Y4,"坐上飞椅享受征服飓风的快感吧",16,16,WHITE);
                state1=1;
            }
        }
        else if((MouseX >= 513 && MouseX <= 592) && (MouseY >= 288 && MouseY <= 316))
        {
            if(mouse_press(513,288,592,316)==2)
            {
                MouseS=1;
                puthz(513+5,265,"飓风飞椅",16,18,BLACK);
                puthz(518,265+28,"能量风暴",16,18,WHITE);
            }
            else if(mouse_press(513,288,592,316)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"能量风暴",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"全身倒立飞转",16,16,RED);
                puthz(X0,Y4,"在八爪鱼外型的转盘上感受能量的风暴吧",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            if(mouse_press(0,0,80,64)==2)
            {
                MouseS=1;

                setcolor(WHITE);
                setlinestyle(0,0,3);
                line(14,29,64,29);
                line(31,12,14,29);
                line(31,44,14,29);
            }
            if(mouse_press(0,0,80,64)==1)
            {
                if(flag==1)
                {
                    *page=4;
                    cleardevice();
                    return;
                }
                else if(flag==0)
                {
                    delay(200);
                    clrmous(MouseX,MouseY);
                    cleardevice();
                    *page=19;
                    return;
                }
            }
        }
        else if((MouseX >= 0 && MouseX <= 112) && (MouseY >= 426 && MouseY <= 480))
        {
            MouseS=1;

            if(mouse_press(0,426,112,480)==2)
            {
                MouseS = 1;
                puthz(10,445,"路线推荐",24,24,WHITE);
            }
            else if(mouse_press(0,426,112,480)==1)
            {
                *page = 14;
                
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;

            puthz(513+5,265,"飓风飞椅",16,18,BLACK);
            puthz(518,265+28,"能量风暴",16,18,BLACK);

            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
    
    
}