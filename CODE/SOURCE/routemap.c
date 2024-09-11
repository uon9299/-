#include "common.h"
#include "Drawpath.h"
#include "DrawMap.h"
#include "routemap.h"
#include "map.h"

void rain_route(int *page, USER *u)
{
    clrmous(MouseX,MouseY);
    draw_rain_route();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >= 265 && MouseX <= 350) && (MouseY >= 405 && MouseY <= 435))
        {
            if(mouse_press(265,405,350,435)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//线型
                puthz(270,410,"飞跃长江",16,18,WHITE);
            }
            else if(mouse_press(265,405,350,435)==1)
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
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 324 && MouseY <= 324+38))
        {
            MouseS=1;
            if(mouse_press(496,324,595,324+38)==2)
            {
                MouseS=1;
                puthz(500,333,"蛋糕皇宫",16,18,WHITE);
                puthz(500,333+44,"靴子警局",16,18,BLACK);
            }
            else if(mouse_press(496,324,595,324+38)==1)
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
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 324+38 && MouseY <= 324+75))
        {
            MouseS=1;
            if(mouse_press(496,324+38,595,324+75)==2)
            {
                MouseS=1;
                puthz(500,333,"蛋糕皇宫",16,18,BLACK);
                puthz(500,333+44,"靴子警局",16,18,WHITE);
            }
            else if(mouse_press(496,324+38,595,324+75)==1)
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
            }
        }
        else if((MouseX >= 184 && MouseX <= 276) && (MouseY >= 325 && MouseY <= 354))
        {
            MouseS=1;
            if(mouse_press(184,325,276,354)==2)
            {
                MouseS=1;
                puthz(189,330,"皇家转马",16,18,WHITE);
            }
            else if(mouse_press(184,325,276,354)==1)
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
            }
        }
        else if((MouseX >= 530 && MouseX <= 620) && (MouseY >= 207 && MouseY <= 240))
        {
            MouseS=1;
            if(mouse_press(530,207,620,240)==2)
            {
                MouseS=1;
                puthz(535,212,"魂断血域",16,18,WHITE);
            }
            else if(mouse_press(530,207,620,240)==1)
            {
                draw_intro();

                puthz(X0,Y0,"魂断血域",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"***");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"灵异惊悚",16,16,RED);
                puthz(X0,Y4,"在阴森恐怖又奇特的空间中惊声尖叫吧",16,16,WHITE);
            }
        }
        else if((MouseX >= 228 && MouseX <= 301) && (MouseY >= 85 && MouseY <= 111))
        {
            MouseS=1;
            if(mouse_press(228,85,301,111)==2)
            {
                MouseS=1;
                puthz(233,90,"东湖塔",16,18,WHITE);
            }
            else if(mouse_press(228,85,301,111)==1)
            {
                draw_intro();

                puthz(X0,Y0,"东湖塔",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"至高风光",16,16,RED);
                puthz(X0,Y4,"直插云霄的东湖塔带你俯览天下胜景",16,16,WHITE);
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            press_back(&page);
            if(mouse_press(0,0,80,64)==1)
            {
                *page=14;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
            puthz(270,410,"飞跃长江",16,18,BLACK);
            puthz(500,333,"蛋糕皇宫",16,18,BLACK);
            puthz(500,333+44,"靴子警局",16,18,BLACK);
            puthz(189,330,"皇家转马",16,18,BLACK);
            puthz(535,212,"魂断血域",16,18,BLACK);
            puthz(233,90,"东湖塔",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);
            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void night_route(int *page, USER *u)
{
    clrmous(MouseX,MouseY);
    draw_night_route();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >= 25 && MouseX <= 113) && (MouseY >= 335 && MouseY <= 368))
        {
            if(mouse_press(25,335,113,368)==2)
            {
                MouseS=1;
                puthz(30,340,"太阳神车",16,18,WHITE);
            }
            else if(mouse_press(25,335,113,368)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"太阳神车",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"*****");

                puthz(X3,Y3,"摇摆旋转",16,16,RED);
                puthz(X0,Y4,"像大摆锤一样超越速度体验最刺激的失重",16,16,WHITE);
            }
        }
        else if((MouseX >= 277 && MouseX <= 349) && (MouseY >= 363 && MouseY <= 393))
        {
            if(mouse_press(277,363,349,393)==2)
            {
                MouseS=1;
                puthz(282,368,"天地双雄",16,18,WHITE);
            }
            else if(mouse_press(277,363,349,393)==1)
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
            }
        }
        else if((MouseX >= 513 && MouseX <= 592) && (MouseY >= 260 && MouseY <= 260+28))
        {
            if(mouse_press(513,260,592,260+28)==2)
            {
                MouseS=1;
                puthz(518,265,"飓风飞椅",16,18,WHITE);
                puthz(518,265+28,"能量风暴",16,18,BLACK);
            }
            else if(mouse_press(513,260,592,260+28)==1)
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
            }
        }
        else if((MouseX >= 513 && MouseX <= 592) && (MouseY >= 260+28 && MouseY <= 316))
        {
            if(mouse_press(513,260+28,592,316)==2)
            {
                MouseS=1;
                puthz(518,265,"飓风飞椅",16,18,BLACK);
                puthz(518,265+28,"能量风暴",16,18,WHITE);
            }
            else if(mouse_press(513,260+28,592,316)==1)
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
            }
        }
        else if((MouseX >= 530 && MouseX <= 620) && (MouseY >= 207 && MouseY <= 240))
        {
            if(mouse_press(530,207,620,240)==2)
            {
                MouseS=1;
                puthz(535,212,"完美风暴",16,18,WHITE);
            }
            else if(mouse_press(530,207,620,240)==1)
            {
                draw_intro();

                puthz(X0,Y0,"完美风暴",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"天空翻转失重",16,16,RED);
                puthz(X0,Y4,"在漩涡和翻转中挑战自我享受刺激",16,16,WHITE);
            }
        }
        else if((MouseX >= 13 && MouseX <= 102) && (MouseY >= 138 && MouseY <= 170))
        {
            if(mouse_press(13,138,102,170)==2)
            {
                MouseS=1;
                puthz(18,143,"丛林迷旋",16,18,WHITE);
            }
            else if(mouse_press(13,138,102,170)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"丛林迷旋",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"坐立不安",16,16,RED);
                puthz(X0,Y4,"和家人朋友坐在一起在丛林里的转盘上起伏",16,16,WHITE);
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            press_back(&page);
            if(mouse_press(0,0,80,64)==1)
            {
                *page=14;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
            puthz(30,340,"太阳神车",16,18,BLACK);
            puthz(282,368,"天地双雄",16,18,BLACK);
            puthz(518,265,"飓风飞椅",16,18,BLACK);
            puthz(518,265+28,"能量风暴",16,18,BLACK);
            puthz(535,212,"完美风暴",16,18,BLACK);
            puthz(18,143,"丛林迷旋",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);
            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void star_route(int *page, USER *u)
{
    clrmous(MouseX,MouseY);
    draw_star_route();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >= 277 && MouseX <= 349) && (MouseY >= 363 && MouseY <= 393))
        {
            if(mouse_press(277,363,349,393)==2)
            {
                MouseS=1;
                puthz(282,368,"天地双雄",16,18,WHITE);
            }
            else if(mouse_press(277,363,349,393)==1)
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
            }
        }
        else if((MouseX >= 530 && MouseX <= 620) && (MouseY >= 207 && MouseY <= 240))
        {
            if(mouse_press(530,207,620,240)==2)
            {
                MouseS=1;
                puthz(535,212,"完美风暴",16,18,WHITE);
            }
            else if(mouse_press(530,207,620,240)==1)
            {
                draw_intro();

                puthz(X0,Y0,"完美风暴",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"天空翻转失重",16,16,RED);
                puthz(X0,Y4,"在漩涡和翻转中挑战自我享受刺激",16,16,WHITE);
            }
        }
        else if((MouseX >= 435 && MouseX <= 525) && (MouseY >= 9 && MouseY <= 40))
        {
            if(mouse_press(435,9,525,40)==2)
            {
                MouseS=1;
                puthz(440,14,"打码头",16,18,WHITE);
            }
            else if(mouse_press(435,9,525,40)==1)
            {
                MouseS=1;

                draw_intro();
                puthz(X0,Y0,"打码头",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(410,153,"****");
                outtextxy(410,186,"***");
                puthz(271,237,"情景再现",16,16,RED);
                puthz(165,263,"完美再现当年的汉口码头风云故事",16,16,WHITE);
            }
        }
        else if((MouseX >= 285 && MouseX <= 360) && (MouseY >= 9 && MouseY <= 40))
        {
            if(mouse_press(285,9,360,40)==2)
            {
                MouseS=1;
                puthz(290,14,"木翼双龙",16,18,WHITE);
            }
            else if(mouse_press(285,9,360,40)==1)
            {
                MouseS=1;

                draw_intro();
                puthz(X0,Y0,"木翼双龙",48,40,YELLOW);
                
                settextstyle(2,0,6);
                setcolor(RED);
                
                outtextxy(X12,Y1,"*****");
                
                outtextxy(X12,Y2,"*****");
                
                puthz(X3,Y3,"恢弘刺激",16,16,RED);
                puthz(X0,Y4,"特别的木质轨道带来更加惊险刺激的体验",16,16,WHITE);
                puthz(165,283,"两辆过山车像巨龙一样共同战斗",16,16,WHITE);
            }
        }
        else if((MouseX >= 25 && MouseX <= 113) && (MouseY >= 335 && MouseY <= 368))
        {
            if(mouse_press(25,335,113,368)==2)
            {
                MouseS=1;
                puthz(30,340,"极速飞车",16,18,WHITE);
            }
            else if(mouse_press(25,335,113,368)==1)
            {
                MouseS=1;
                draw_intro();

                puthz(X0,Y0,"极速飞车",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"急速惊险",16,16,RED);
                puthz(X0,Y4,"以导弹的速度体会我们最富盛名的过山车",16,16,WHITE);
            }
        }
        else if((MouseX >= 420 && MouseX <= 495) && (MouseY >= 409 && MouseY <= 440))
        {
            if(mouse_press(420,409,495,440)==2)
            {
                MouseS=1;
                puthz(425,414,"飞跃长江",16,18,WHITE);
            }
            else if(mouse_press(420,409,495,440)==1)
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
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            press_back(&page);
            if(mouse_press(0,0,80,64)==1)
            {
                *page=14;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
            puthz(282,368,"天地双雄",16,18,BLACK);
            puthz(535,212,"完美风暴",16,18,BLACK);
            puthz(440,14,"打码头",16,18,BLACK);
            puthz(290,14,"木翼双龙",16,18,BLACK);
            puthz(30,340,"极速飞车",16,18,BLACK);
            puthz(425,414,"飞跃长江",16,18,BLACK);
            setcolor(BLACK);
            setlinestyle(0,0,3);
            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
}

void family_route(int *page, USER *u)
{
    clrmous(MouseX,MouseY);
    draw_family_route();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >= 265 && MouseX <= 350) && (MouseY >= 405 && MouseY <= 435))
        {
            if(mouse_press(265,405,350,435)==2)
            {
                MouseS=1;
                puthz(270,410,"海马骑士",16,18,WHITE);
            }
            else if(mouse_press(265,405,350,435)==1)
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
            }
        }
        else if((MouseX >= 495 && MouseX <= 586) && (MouseY >= 352 && MouseY <= 385))
        {
            if(mouse_press(495,352,586,385)==2)
            {
                MouseS=1;
                puthz(500,357,"梦幻糖果",16,18,WHITE);
            }
            else if(mouse_press(495,352,586,385)==1)
            {
                draw_intro();

                puthz(X0,Y0,"梦幻糖果",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"甜蜜激战天空飞船",16,16,RED);
                puthz(X0,Y4,"在甜品飞船中起伏翻飞弹跳不断",16,16,WHITE);
            }
        }
        else if((MouseX >= 228 && MouseX <= 301) && (MouseY >= 85 && MouseY <= 111))
        {
            MouseS=1;
            if(mouse_press(228,85,301,111)==2)
            {
                MouseS=1;
                puthz(233,90,"东湖塔",16,18,WHITE);
            }
            else if(mouse_press(228,85,301,111)==1)
            {
                draw_intro();

                puthz(X0,Y0,"东湖塔",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"至高风光",16,16,RED);
                puthz(X0,Y4,"直插云霄的东湖塔带你俯览天下胜景",16,16,WHITE);
            }
        }
        else if((MouseX >= 27 && MouseX <= 105) && (MouseY >= 111 && MouseY <= 111+37))
        {
            MouseS=1;
            if(mouse_press(27,111,105,111+37)==2)
            {
                MouseS=1;
                puthz(33,116,"丛林迷旋",16,18,WHITE);
                puthz(33,116+37,"浪花跳跳",16,18,BLACK);
            }
            else if(mouse_press(27,111,105,111+37)==1)
            {
               draw_intro();

                puthz(X0,Y0,"丛林迷旋",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"坐立不安",16,16,RED);
                puthz(X0,Y4,"和家人朋友坐在一起在丛林里的转盘上起伏",16,16,WHITE);
            }
        }
        else if((MouseX >= 27 && MouseX <= 105) && (MouseY >= 111+37 && MouseY <= 185))
        {
            MouseS=1;
            if(mouse_press(27,111+37,105,185)==2)
            {
                MouseS=1;
                puthz(33,116+37,"浪花跳跳",16,18,WHITE);
                puthz(33,116,"丛林迷旋",16,18,BLACK);
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
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //返回按钮
        {
            press_back(&page);
            if(mouse_press(0,0,80,64)==1)
            {
                *page=14;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
            puthz(270,410,"海马骑士",16,18,BLACK);
            puthz(500,357,"梦幻糖果",16,18,BLACK);
            puthz(233,90,"东湖塔",16,18,BLACK);
            puthz(33,116,"丛林迷旋",16,18,BLACK);
            puthz(33,116+37,"浪花跳跳",16,18,BLACK);
        }
    }
}