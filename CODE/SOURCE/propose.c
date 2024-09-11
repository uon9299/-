#include "common.h"
#include "propose.h"
#include "skipmap.h"

void propose(int *page)
{
    int flag[8]={0,0,0,0,0,0,0,0};

    clrmous(MouseX, MouseY);
    propose_draw();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        setfillstyle(1, LIGHTGRAY);
        if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80, 420, 80+60, 479)==1)&&flag[0])
            {
                clrmous(MouseX, MouseY); 
                bar(80+1, 422, 80+60-1, 479);
                puthz(86, 427, "欢乐", 24, 26, BLUE);
                puthz(86, 453, "海洋", 24, 26, BLUE);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[0]=1;

                happy_ocean(page);
            }
            else if((mouse_press(80, 420, 80+60, 479)==2)&&!flag[0])
            {
                clrmous(MouseX, MouseY);
                bar(80+1, 422, 80+60-1, 479);
                puthz(86, 427, "欢乐", 24, 26, BLUE);
                puthz(86, 453, "海洋", 24, 26, BLUE);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[0]=1;
            }
        }
        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80+60, 420, 80+120, 479)==1)&&flag[1])
            {
                clrmous(MouseX, MouseY);
                bar(80+60+1, 422, 80+60*2-1, 479);
                puthz(86+60, 427, "甜品", 24, 26, CYAN);
                puthz(86+60, 453, "王国", 24, 26, CYAN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[1]=1;
                
                dessert_kingdom(page);
            }
            else if((mouse_press(80+60, 420, 80+120, 479)==2)&&!flag[1])
            {
                clrmous(MouseX, MouseY);
                bar(80+60+1, 422, 80+60*2-1, 479);
                puthz(86+60, 427, "甜品", 24, 26, CYAN);
                puthz(86+60, 453, "王国", 24, 26, CYAN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[1]=1;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80+120, 420, 80+180, 479)==1)&&flag[2])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*2+1, 422, 80+60*3-1, 479);
                puthz(86+60*2, 427, "欢乐", 24, 26, BROWN);
                puthz(86+60*2, 453, "时光", 24, 26, BROWN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[2]=1;
                
                happy_time(page);
            }
            else if((mouse_press(80+120, 420, 80+180, 479)==2)&&!flag[2])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*2+1, 422, 80+60*3-1, 479);
                puthz(86+60*2, 427, "欢乐", 24, 26, BROWN);
                puthz(86+60*2, 453, "时光", 24, 26, BROWN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[2]=1;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80+180, 420, 80+240, 479)==1)&&flag[3])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*3+1, 422, 80+60*4-1, 479);
                puthz(86+60*3, 427, "极速", 24, 26, RED);
                puthz(86+60*3, 453, "世界", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[3]=1;
                
                speed_world(page);
            }
            else if((mouse_press(80+180, 420, 80+240, 479)==2)&&!flag[3])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*3+1, 422, 80+60*4-1, 479);
                puthz(86+60*3, 427, "极速", 24, 26, RED);
                puthz(86+60*3, 453, "世界", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[3]=1;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80+240, 420, 80+300, 479)==1)&&flag[4])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*4+1, 422, 80+60*5-1, 479);
                puthz(86+60*4, 427, "羽落", 24, 26, GREEN);
                puthz(86+60*4, 453, "天堂", 24, 26, GREEN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[4]=1;
                
                feather_fall_heaven(page);
            }
            else if((mouse_press(80+240, 420, 80+300, 479)==2)&&!flag[4])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*4+1, 422, 80+60*5-1, 479);
                puthz(86+60*4, 427, "羽落", 24, 26, GREEN);
                puthz(86+60*4, 453, "天堂", 24, 26, GREEN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[4]=1;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80+300, 420, 80+360, 479)==1)&&flag[5])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*5+1, 422, 80+60*6-1, 479);
                puthz(86+60*5, 427, "渔光", 24, 26, LIGHTBLUE);
                puthz(86+60*5+12, 453, "岛", 24, 26, LIGHTBLUE);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[5]=1;
                
                fishguard_island(page);
            }
            else if((mouse_press(80+300, 420, 80+360, 479)==2)&&!flag[5])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*5+1, 422, 80+60*6-1, 479);
                puthz(86+60*5, 427, "渔光", 24, 26, LIGHTBLUE);
                puthz(86+60*5+12, 453, "岛", 24, 26, LIGHTBLUE);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[5]=1;
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80+360, 420, 80+420, 479)==1)&&flag[6])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*6+1, 422, 80+60*7-1, 479);
                puthz(86+60*6, 427, "飓风", 24, 26, MAGENTA);
                puthz(86+60*6+12, 453, "湾", 24, 26, MAGENTA);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[6]=1;
                
                hurricane_bay(page); 
            }
            else if((mouse_press(80+360, 420, 80+420, 479)==2)&&!flag[6])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*6+1, 422, 80+60*7-1, 479);
                puthz(86+60*6, 427, "飓风", 24, 26, MAGENTA);
                puthz(86+60*6+12, 453, "湾", 24, 26, MAGENTA);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[6]=1;
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if((mouse_press(80+420, 420, 80+480, 479)==1)&&flag[7])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*7+1, 422, 80+60*8-1, 479);
                puthz(86+60*7, 427, "欢乐", 24, 26, LIGHTCYAN);
                puthz(86+60*7, 453, "江城", 24, 26, LIGHTCYAN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[7]=1;
                
                happy_river_city(page);
            }
            else if((mouse_press(80+420, 420, 80+480, 479)==2)&&!flag[7])
            {
                clrmous(MouseX, MouseY);
                bar(80+60*7+1, 422, 80+60*8-1, 479);
                puthz(86+60*7, 427, "欢乐", 24, 26, LIGHTCYAN);
                puthz(86+60*7, 453, "江城", 24, 26, LIGHTCYAN);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[7]=1;
            }
        }
        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                *page=3;
                delay(50);
                return;
            }
        }
        else
        {
            MouseS=0;
        }

        setfillstyle(1, WHITE);
        if((mouse_press(80, 420, 80+60, 479)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);                
            MouseS=0;
            bar(80+1, 422, 80+60-1, 479);
            puthz(86, 427, "欢乐", 24, 26, BLUE);
            puthz(86, 453, "海洋", 24, 26, BLUE);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+60, 420, 80+120, 479)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);                
            MouseS=0;
            bar(80+60+1, 422, 80+60*2-1, 479);
            puthz(86+60, 427, "甜品", 24, 26, CYAN);
            puthz(86+60, 453, "王国", 24, 26, CYAN);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+120, 420, 80+180, 479)==0)&&flag[2])
        {
            flag[2]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            bar(80+60*2+1, 422, 80+60*3-1, 479);
            puthz(86+60*2, 427, "欢乐", 24, 26, BROWN);
            puthz(86+60*2, 453, "时光", 24, 26, BROWN);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+180, 420, 80+240, 479)==0)&&flag[3])
        {
            flag[3]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            bar(80+60*3+1, 422, 80+60*4-1, 479);
            puthz(86+60*3, 427, "极速", 24, 26, RED);
            puthz(86+60*3, 453, "世界", 24, 26, RED);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+240, 420, 80+300, 479)==0)&&flag[4])
        {
            flag[4]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            bar(80+60*4+1, 422, 80+60*5-1, 479);
            puthz(86+60*4, 427, "羽落", 24, 26, GREEN);
            puthz(86+60*4, 453, "天堂", 24, 26, GREEN);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+300, 420, 80+360, 479)==0)&&flag[5])
        {
            flag[5]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            bar(80+60*5+1, 422, 80+60*6-1, 479);
            puthz(86+60*5, 427, "渔光", 24, 26, LIGHTBLUE);
            puthz(86+60*5+12, 453, "岛", 24, 26, LIGHTBLUE);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+360, 420, 80+420, 479)==0)&&flag[6])
        {
            flag[6]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            bar(80+60*6+1, 422, 80+60*7-1, 479);
            puthz(86+60*6, 427, "飓风", 24, 26, MAGENTA);
            puthz(86+60*6+12, 453, "湾", 24, 26, MAGENTA);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+420, 420, 80+480, 479)==0)&&flag[7])
        {
            flag[7]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            bar(80+60*7+1, 422, 80+60*8-1, 479);
            puthz(86+60*7, 427, "欢乐", 24, 26, LIGHTCYAN);
            puthz(86+60*7, 453, "江城", 24, 26, LIGHTCYAN);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void propose_draw()
{
    draw_background();
    draw_logo(590, 40, 3);
	settextstyle(2, 0, 4);
	outtextxy(30+530+10, 41+370+8-390, "Happy");
	outtextxy(40+520+20-1, 63+370-2-390, "Valley");
    draw_back_logo(BLACK, WHITE, BLACK);

    setfillstyle(1, WHITE);
    bar(0, 420, 639, 479);
    setfillstyle(1, LIGHTGREEN);
    bar(0, 420, 80, 479);
    bar(80+480, 420, 639, 479);
    setlinestyle(0, 0, 3);
    setcolor(RED);
    line(0, 420, 32, 420);
    setcolor(MAGENTA);
    line(32, 420, 32*2, 420);
    setcolor(LIGHTBLUE);
    line(32*2, 420, 32*3, 420);
    setcolor(YELLOW);
    line(32*3, 420, 32*4, 420);
    setcolor(GREEN);
    line(32*4, 420, 32*5, 420);
    setcolor(RED);
    line(32*5, 420, 32*6, 420);
    setcolor(MAGENTA);
    line(32*6, 420, 32*7, 420);
    setcolor(LIGHTBLUE);
    line(32*7, 420, 32*8, 420);
    setcolor(YELLOW);
    line(32*8, 420, 32*9, 420);
    setcolor(GREEN);
    line(32*9, 420, 32*10, 420);
    setcolor(RED);
    line(32*10, 420, 32*11, 420);
    setcolor(MAGENTA);
    line(32*11, 420, 32*12, 420);
    setcolor(LIGHTBLUE);
    line(32*12, 420, 32*13, 420);
    setcolor(YELLOW);
    line(32*13, 420, 32*14, 420);
    setcolor(GREEN);
    line(32*14, 420, 32*15, 420);
    setcolor(RED);
    line(32*15, 420, 32*16, 420);
    setcolor(MAGENTA);
    line(32*16, 420, 32*17, 420);
    setcolor(LIGHTBLUE);
    line(32*17, 420, 32*18, 420);
    setcolor(YELLOW);
    line(32*18, 420, 32*19, 420);
    setcolor(GREEN);
    line(32*19, 420, 32*20, 420);

    setlinestyle(0, 0, 1);
    setcolor(BLACK);
    line(80, 422, 80, 479);
    line(80+60, 422, 80+60, 479);
    line(80+120, 422, 80+120, 479);
    line(80+180, 422, 80+180, 479);
    line(80+240, 422, 80+240, 479);
    line(80+300, 422, 80+300, 479);
    line(80+360, 422, 80+360, 479);
    line(80+420, 422, 80+420, 479);
    line(80+480, 422, 80+480, 479);

    puthz(86, 427, "欢乐", 24, 26, BLUE);
    puthz(86, 453, "海洋", 24, 26, BLUE);
    puthz(86+60, 427, "甜品", 24, 26, CYAN);
    puthz(86+60, 453, "王国", 24, 26, CYAN);
    puthz(86+60*2, 427, "欢乐", 24, 26, BROWN);
    puthz(86+60*2, 453, "时光", 24, 26, BROWN);
    puthz(86+60*3, 427, "极速", 24, 26, RED);
    puthz(86+60*3, 453, "世界", 24, 26, RED);
    puthz(86+60*4, 427, "羽落", 24, 26, GREEN);
    puthz(86+60*4, 453, "天堂", 24, 26, GREEN);
    puthz(86+60*5, 427, "渔光", 24, 26, LIGHTBLUE);
    puthz(86+60*5+12, 453, "岛", 24, 26, LIGHTBLUE);
    puthz(86+60*6, 427, "飓风", 24, 26, MAGENTA);
    puthz(86+60*6+12, 453, "湾", 24, 26, MAGENTA);
    puthz(86+60*7, 427, "欢乐", 24, 26, LIGHTCYAN);
    puthz(86+60*7, 453, "江城", 24, 26, LIGHTCYAN);
    
    puthz(220, 5, "主题乐园", 48, 50, LIGHTRED);
}

void happy_ocean(int *page)
{
    int flag[2]={0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();
    
    setfillstyle(1, LIGHTGRAY);
    bar(80+1, 422, 80+60-1, 479);
    puthz(86, 427, "欢乐", 24, 26, BLUE);
    puthz(86, 453, "海洋", 24, 26, BLUE);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55, 390, "“欢乐海洋”打造一站式狂欢，各大亲子互动设备让游客体验加倍！", 16, 17, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    line(307+30, 92, 552-30, 92);
    puthz(62+30+33, 65, "飞跃长江", 24, 30, BLACK);
    puthz(307+30+33, 65, "海马骑士", 24, 30, BLACK);
    
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "飞跃长江", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“飞跃长江”
                happy_ocean_1(page);
            }
            else if((mouse_press(62+30+30, 62, 307-30-30, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "飞跃长江", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=307+30+30 && MouseX<=552-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "海马骑士", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“海马骑士”
                happy_ocean_2(page);
            }
            else if((mouse_press(307+30+30, 62, 552-30-30, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "海马骑士", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {
                cleardevice();
                skipmap(page,1);
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;//跳转地图中显示
            }
        }

        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+60, 420, 80+120, 479)==1)
            {
                dessert_kingdom(page);
                break;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+120, 420, 80+180, 479)==1)
            {
                happy_time(page);
                break;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+180, 420, 80+240, 479)==1)
            {
                speed_world(page);
                break;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+240, 420, 80+300, 479)==1)
            {
                feather_fall_heaven(page);
                break;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+300, 420, 80+360, 479)==1)
            {
                fishguard_island(page);
                break;
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+360, 420, 80+420, 479)==1)
            {
                hurricane_bay(page);
                break; 
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+420, 420, 80+480, 479)==1)
            {  
                happy_river_city(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+30+30, 62, 307-30-30, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+30, 92, 307-30, 92);
            puthz(62+30+33, 65, "飞跃长江", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(307+30+30, 62, 552-30-30, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(307+30, 92, 552-30, 92);
            puthz(307+30+33, 65, "海马骑士", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void dessert_kingdom(int *page)
{
    int flag[3]={0,0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();

    setfillstyle(1, LIGHTGRAY);
    bar(80+60+1, 422, 80+60*2-1, 479);
    puthz(86+60, 427, "甜品", 24, 26, CYAN);
    puthz(86+60, 453, "王国", 24, 26, CYAN);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55, 390, "“甜品王国”以热门", 16, 17, YELLOW);
    settextstyle(1, 0, 2);
    setcolor(YELLOW);
    outtextxy(210, 390-5, "IP");
    puthz(227, 390, "“饼干警长”为主题，突出亲和友爱的氛围。", 16, 17, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);
    line(225+15, 92, 388-15, 92);
    line(388+15, 92, 552-15, 92);
    puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, BLACK);
    puthz(225+20+12, 65, "梦幻糖果", 24, 26, BLACK);
    puthz(388+20+12, 65, "靴子警局", 24, 26, BLACK);

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+15, 92, 225-15, 92);                
                puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“蛋糕皇宫”
                dessert_kingdom_1(page);
            }
            else if((mouse_press(62+15+10, 62, 225-15-10, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+15, 92, 225-15, 92);                
                puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(225+15, 92, 388-15, 92);
                puthz(225+20+12, 65, "梦幻糖果", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“梦幻糖果”
                dessert_kingdom_2(page);
            }
            else if((mouse_press(225+15+10, 62, 388-15-10, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(225+15, 92, 388-15, 92);
                puthz(225+20+12, 65, "梦幻糖果", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1)&&flag[2])
            {
                flag[2]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(388+15, 92, 552-15, 92);
                puthz(388+20+12, 65, "靴子警局", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“靴子警局”
                dessert_kingdom_3(page);
            }
            else if((mouse_press(388+15+10, 62, 552-15-10, 92)==2)&&!flag[2])
            {
                flag[2]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(388+15, 92, 552-15, 92);
                puthz(388+20+12, 65, "靴子警局", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {
                cleardevice();
                skipmap(page,2);//跳转地图中显示
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;
            }
        }

        else if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80, 420, 80+60, 479)==1)
            {
                happy_ocean(page);
                break;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+120, 420, 80+180, 479)==1)
            {
                happy_time(page);
                break;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+180, 420, 80+240, 479)==1)
            {
                speed_world(page);
                break;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+240, 420, 80+300, 479)==1)
            {
                feather_fall_heaven(page);
                break;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+300, 420, 80+360, 479)==1)
            {
                fishguard_island(page);
                break;
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+360, 420, 80+420, 479)==1)
            {
                hurricane_bay(page);
                break; 
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+420, 420, 80+480, 479)==1)
            {  
                happy_river_city(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+15+10, 62, 225-15-10, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+15, 92, 225-15, 92);                
            puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(225+15+10, 62, 388-15-10, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(225+15, 92, 388-15, 92);
            puthz(225+20+12, 65, "梦幻糖果", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(388+15+10, 62, 552-15-10, 92)==0)&&flag[2])
        {
            flag[2]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(388+15, 92, 552-15, 92);
            puthz(388+20+12, 65, "靴子警局", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void happy_time(int *page)
{
    int flag[2]={0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();

    setfillstyle(1, LIGHTGRAY);
    bar(80+60*2+1, 422, 80+60*3-1, 479);
    puthz(86+60*2, 427, "欢乐", 24, 26, BROWN);
    puthz(86+60*2, 453, "时光", 24, 26, BROWN);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55-5, 390, "“欢乐时光”将马戏团与嘉年华相融合，营造出海岸风光、派对风情。", 16, 17, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    line(307+30, 92, 552-30, 92);
    puthz(62+30+33, 65, "飓风飞椅", 24, 30, BLACK);
    puthz(307+30+33, 65, "能量风暴", 24, 30, BLACK);

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "飓风飞椅", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“飓风飞椅”
                happy_time_1(page);
            }
            else if((mouse_press(62+30+30, 62, 307-30-30, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "飓风飞椅", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=307+30+30 && MouseX<=552-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "能量风暴", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“能量风暴”
                happy_time_2(page);
            }
            else if((mouse_press(307+30+30, 62, 552-30-30, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "能量风暴", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {
                cleardevice();
                skipmap(page,3);
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;//跳转地图中显示
            }
        }

        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+60, 420, 80+120, 479)==1)
            {
                dessert_kingdom(page);
                break;                
            }
        }
        else if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80, 420, 80+60, 479)==1)
            {
                happy_ocean(page);
                break;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+180, 420, 80+240, 479)==1)
            {
                speed_world(page);
                break;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+240, 420, 80+300, 479)==1)
            {
                feather_fall_heaven(page);
                break;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+300, 420, 80+360, 479)==1)
            {
                fishguard_island(page);
                break;
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+360, 420, 80+420, 479)==1)
            {
                hurricane_bay(page); 
                break;
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+420, 420, 80+480, 479)==1)
            {  
                happy_river_city(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+30+30, 62, 307-30-30, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+30, 92, 307-30, 92);
            puthz(62+30+33, 65, "飓风飞椅", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(307+30+30, 62, 552-30-30, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(307+30, 92, 552-30, 92);
            puthz(307+30+33, 65, "能量风暴", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void speed_world(int *page)
{
    int flag[2]={0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();

    setfillstyle(1, LIGHTGRAY);
    bar(80+60*3+1, 422, 80+60*4-1, 479);
    puthz(86+60*3, 427, "极速", 24, 26, RED);
    puthz(86+60*3, 453, "世界", 24, 26, RED);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55-10, 390, "“极速世界”引入未来科技感设计，六大项目打造全感官沉浸游玩体验！", 16, 17, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    line(307+30, 92, 552-30, 92);
    puthz(62+30+33, 65, "极速飞车", 24, 30, BLACK);
    puthz(307+30+33, 65, "太阳神车", 24, 30, BLACK);
    
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "极速飞车", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“极速飞车”
                speed_world_1(page);
            }
            else if((mouse_press(62+30+30, 62, 307-30-30, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "极速飞车", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=307+30+30 && MouseX<=552-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "太阳神车", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“太阳神车”
                speed_world_2(page);
            }
            else if((mouse_press(307+30+30, 62, 552-30-30, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "太阳神车", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {
                cleardevice();
                skipmap(page,4);
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;//跳转地图中显示
            }
        }

        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+60, 420, 80+120, 479)==1)
            {
                dessert_kingdom(page);
                break;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+120, 420, 80+180, 479)==1)
            {
                happy_time(page);
                break;
            }
        }
        else if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80, 420, 80+60, 479)==1)
            {
                happy_ocean(page);
                break;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+240, 420, 80+300, 479)==1)
            {
                feather_fall_heaven(page);
                break;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+300, 420, 80+360, 479)==1)
            {
                fishguard_island(page);
                break;
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+360, 420, 80+420, 479)==1)
            {
                hurricane_bay(page); 
                break;
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+420, 420, 80+480, 479)==1)
            {  
                happy_river_city(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+30+30, 62, 307-30-30, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+30, 92, 307-30, 92);
            puthz(62+30+33, 65, "极速飞车", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(307+30+30, 62, 552-30-30, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(307+30, 92, 552-30, 92);
            puthz(307+30+33, 65, "太阳神车", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void feather_fall_heaven(int *page)
{
    int flag[2]={0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();

    setfillstyle(1, LIGHTGRAY);
    bar(80+60*4+1, 422, 80+60*5-1, 479);
    puthz(86+60*4, 427, "羽落", 24, 26, GREEN);
    puthz(86+60*4, 453, "天堂", 24, 26, GREEN);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55-20, 390, "“羽落天堂”是延续水杉林湿地资源的生态园，强调人与自然的和谐关系。", 16, 17, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    line(307+30, 92, 552-30, 92);
    puthz(62+30+33, 65, "丛林迷旋", 24, 30, BLACK);
    puthz(307+30+33, 65, "浪花跳跳", 24, 30, BLACK);
    
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "丛林迷旋", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“丛林迷旋”
                feather_fall_heaven_1(page);
            }
            else if((mouse_press(62+30+30, 62, 307-30-30, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33, 65, "丛林迷旋", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=307+30+30 && MouseX<=552-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "浪花跳跳", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“浪花跳跳”
                feather_fall_heaven_2(page);
            }
            else if((mouse_press(307+30+30, 62, 552-30-30, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33, 65, "浪花跳跳", 24, 30, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {
                cleardevice();
                skipmap(page,5);
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;//跳转地图中显示
            }
        }

        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+60, 420, 80+120, 479)==1)
            {
                dessert_kingdom(page);
                break;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+120, 420, 80+180, 479)==1)
            {
                happy_time(page);
                break;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+180, 420, 80+240, 479)==1)
            {
                speed_world(page);
                break;
            }
        }
        else if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80, 420, 80+60, 479)==1)
            {
                happy_ocean(page);
                break;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+300, 420, 80+360, 479)==1)
            {
                fishguard_island(page);
                break;
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+360, 420, 80+420, 479)==1)
            {
                hurricane_bay(page); 
                break;
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+420, 420, 80+480, 479)==1)
            {  
                happy_river_city(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+30+30, 62, 307-30-30, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+30, 92, 307-30, 92);
            puthz(62+30+33, 65, "丛林迷旋", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(307+30+30, 62, 552-30-30, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(307+30, 92, 552-30, 92);
            puthz(307+30+33, 65, "浪花跳跳", 24, 30, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void fishguard_island(int *page)
{
    int flag[2]={0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();

    setfillstyle(1, LIGHTGRAY);
    bar(80+60*5+1, 422, 80+60*6-1, 479);
    puthz(86+60*5, 427, "渔光", 24, 26, BLUE);
    puthz(86+60*5+12, 453, "岛", 24, 26, BLUE);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55-25, 390, "“渔光岛”是生态体验区和远眺东湖的制高点，分为主题娱乐区与休闲体验区。", 16, 16, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    line(307+30, 92, 552-30, 92);
    puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, BLACK);
    puthz(307+30+33+10, 65, "东湖塔", 24, 36, BLACK);
    
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“野人谷漂流”
                fishguard_island_1(page);
            }
            else if((mouse_press(62+30+30, 62, 307-30-30, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+30, 92, 307-30, 92);
                puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=307+30+30 && MouseX<=552-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33+10, 65, "东湖塔", 24, 36, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“东湖塔”
                fishguard_island_2(page);
            }
            else if((mouse_press(307+30+30, 62, 552-30-30, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(307+30, 92, 552-30, 92);
                puthz(307+30+33+10, 65, "东湖塔", 24, 36, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {
                cleardevice();
                skipmap(page,6);
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;//跳转地图中显示
            }
        }

        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+60, 420, 80+120, 479)==1)
            {
                dessert_kingdom(page);
                break;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+120, 420, 80+180, 479)==1)
            {
                happy_time(page);
                break;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+180, 420, 80+240, 479)==1)
            {
                speed_world(page);
                break;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+240, 420, 80+300, 479)==1)
            {
                feather_fall_heaven(page);
                break;
            }
        }
        else if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80, 420, 80+60, 479)==1)
            {
                happy_ocean(page);
                break;
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+360, 420, 80+420, 479)==1)
            {
                hurricane_bay(page); 
                break;
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+420, 420, 80+480, 479)==1)
            {  
                happy_river_city(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+30+30, 62, 307-30-30, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+30, 92, 307-30, 92);
            puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(307+30+30, 62, 552-30-30, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(307+30, 92, 552-30, 92);
            puthz(307+30+33+10, 65, "东湖塔", 24, 36, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void hurricane_bay(int *page)
{
    int flag[3]={0,0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();

    setfillstyle(1, LIGHTGRAY);
    bar(80+60*6+1, 422, 80+60*7-1, 479);
    puthz(86+60*6, 427, "飓风", 24, 26, MAGENTA);
    puthz(86+60*6+12, 453, "湾", 24, 26, MAGENTA);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55-15, 390, "“飓风湾”是水上项目区，以美洲海域风情为背景融入沙滩、海浪元素。", 16, 17, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);
    line(225+15, 92, 388-15, 92);
    line(388+15, 92, 552-15, 92);
    puthz(62+20+12, 65, "激流勇进", 24, 26, BLACK);
    puthz(225+20+12, 65, "完美风暴", 24, 26, BLACK);
    puthz(388+20+12, 65, "魂断血域", 24, 26, BLACK);

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+15, 92, 225-15, 92);                
                puthz(62+20+12, 65, "激流勇进", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“激流勇进”
                hurricane_bay_1(page);
            }
            else if((mouse_press(62+15+10, 62, 225-15-10, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+15, 92, 225-15, 92);                
                puthz(62+20+12, 65, "激流勇进", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(225+15, 92, 388-15, 92);
                puthz(225+20+12, 65, "完美风暴", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“完美风暴”
                hurricane_bay_2(page);
            }
            else if((mouse_press(225+15+10, 62, 388-15-10, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(225+15, 92, 388-15, 92);
                puthz(225+20+12, 65, "完美风暴", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1)&&flag[2])
            {
                flag[2]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(388+15, 92, 552-15, 92);
                puthz(388+20+12, 65, "魂断血域", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“魂断血域”
                hurricane_bay_3(page);
            }
            else if((mouse_press(388+15+10, 62, 552-15-10, 92)==2)&&!flag[2])
            {
                flag[2]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(388+15, 92, 552-15, 92);
                puthz(388+20+12, 65, "魂断血域", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {
                cleardevice();
                skipmap(page,7);
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;//跳转地图中显示
            }
        }

        else if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80, 420, 80+60, 479)==1)
            {
                happy_ocean(page);
                break;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+120, 420, 80+180, 479)==1)
            {
                happy_time(page);
                break;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+180, 420, 80+240, 479)==1)
            {
                speed_world(page);
                break;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+240, 420, 80+300, 479)==1)
            {
                feather_fall_heaven(page);
                break;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+300, 420, 80+360, 479)==1)
            {
                fishguard_island(page);
                break;
            }
        }
        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+60, 420, 80+120, 479)==1)
            {
                dessert_kingdom(page);
                break; 
            }
        }
        else if(MouseX>=80+420 && MouseX<=80+480 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+420, 420, 80+480, 479)==1)
            {  
                happy_river_city(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+15+10, 62, 225-15-10, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+15, 92, 225-15, 92);                
            puthz(62+20+12, 65, "激流勇进", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(225+15+10, 62, 388-15-10, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(225+15, 92, 388-15, 92);
            puthz(225+20+12, 65, "完美风暴", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(388+15+10, 62, 552-15-10, 92)==0)&&flag[2])
        {
            flag[2]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(388+15, 92, 552-15, 92);
            puthz(388+20+12, 65, "魂断血域", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void happy_river_city(int *page)
{
    int flag[3]={0,0,0};

    clrmous(MouseX, MouseY);
    repaint_menu();

    setfillstyle(1, LIGHTGRAY);
    bar(80+60*7+1, 422, 80+60*8-1, 479);
    puthz(86+60*7, 427, "欢乐", 24, 26, LIGHTCYAN);
    puthz(86+60*7, 453, "江城", 24, 26, LIGHTCYAN);
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);

    draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
    puthz(55-15, 390, "“欢乐江城”以荆楚人文为背景，分为水寨集市、水岸江城两大版块。", 16, 17, YELLOW);
    setfillstyle(1, WHITE);
    bar(62, 60, 552, 382);
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(62, 60, 552, 382);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);
    line(225+15, 92, 388-15, 92);
    line(388+15, 92, 552-15, 92);
    puthz(62+20+12, 65, "木翼双龙", 24, 26, BLACK);
    puthz(225+20+12, 65, "打码头", 24, 39, BLACK);
    puthz(388+20+12, 65, "凤舞九天", 24, 26, BLACK);

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1)&&flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+15, 92, 225-15, 92);                
                puthz(62+20+12, 65, "木翼双龙", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“木翼双龙”
                happy_river_city_1(page);
            }
            else if((mouse_press(62+15+10, 62, 225-15-10, 92)==2)&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(62+15, 92, 225-15, 92);                
                puthz(62+20+12, 65, "木翼双龙", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1)&&flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(225+15, 92, 388-15, 92);
                puthz(225+20+12, 65, "打码头", 24, 39, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“打码头”
                happy_river_city_2(page);
            }
            else if((mouse_press(225+15+10, 62, 388-15-10, 92)==2)&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(225+15, 92, 388-15, 92);
                puthz(225+20+12, 65, "打码头", 24, 39, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1)&&flag[2])
            {
                flag[2]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(388+15, 92, 552-15, 92);
                puthz(388+20+12, 65, "凤舞九天", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);

                // 进入“凤舞九天”
                happy_river_city_3(page);
            }
            else if((mouse_press(388+15+10, 62, 552-15-10, 92)==2)&&!flag[2])
            {
                flag[2]=1;
                clrmous(MouseX, MouseY);
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(388+15, 92, 552-15, 92);
                puthz(388+20+12, 65, "凤舞九天", 24, 26, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX >= 555 && MouseX <= 635 && MouseY >= 290 && MouseY <= 380)
        {
            MouseS=1;
            if(mouse_press(555, 290, 635, 380) == 1)
            {

                cleardevice();
                skipmap(page,7);
                propose_draw();
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                break;//跳转地图中显示
            }
        }

        else if(MouseX>=80 && MouseX<=80+60 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80, 420, 80+60, 479)==1)
            {
                happy_ocean(page);
                break;
            }
        }
        else if(MouseX>=80+120 && MouseX<=80+180 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+120, 420, 80+180, 479)==1)
            {
                happy_time(page);
                break;
            }
        }
        else if(MouseX>=80+180 && MouseX<=80+240 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+180, 420, 80+240, 479)==1)
            {
                speed_world(page);
                break;
            }
        }
        else if(MouseX>=80+240 && MouseX<=80+300 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+240, 420, 80+300, 479)==1)
            {
                feather_fall_heaven(page);
                break;
            }
        }
        else if(MouseX>=80+300 && MouseX<=80+360 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+300, 420, 80+360, 479)==1)
            {
                fishguard_island(page);
                break;
            }
        }
        else if(MouseX>=80+60 && MouseX<=80+120 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+60, 420, 80+120, 479)==1)
            {
                dessert_kingdom(page);
                break; 
            }
        }
        else if(MouseX>=80+360 && MouseX<=80+420 && MouseY>=420 && MouseY<=479)
        {
            MouseS=1;
            if(mouse_press(80+360, 420, 80+420, 479)==1)
            {  
                hurricane_bay(page);
                break;
            }
        }

        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                propose_draw();
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(62+15+10, 62, 225-15-10, 92)==0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(62+15, 92, 225-15, 92);                
            puthz(62+20+12, 65, "木翼双龙", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(225+15+10, 62, 388-15-10, 92)==0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(225+15, 92, 388-15, 92);
            puthz(225+20+12, 65, "打码头", 24, 39, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(388+15+10, 62, 552-15-10, 92)==0)&&flag[2])
        {
            flag[2]=0;
            clrmous(MouseX, MouseY);
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(388+15, 92, 552-15, 92);
            puthz(388+20+12, 65, "凤舞九天", 24, 26, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
    }
}

void draw_traffic_circle()
{
    setfillstyle(1, LIGHTGRAY);
    bar(80, 130, 225, 210);
    setlinestyle(0, 0, 1);
    setcolor(YELLOW);
    circle(120, 170, 35);
    circle(120, 170, 27);
    line(120+25, 170-25, 120+19, 170-19);
    line(120-25, 170+25, 120-19, 170+19);
    setfillstyle(1, BROWN);
    floodfill(120, 170-30, YELLOW);
    setfillstyle(1, YELLOW);
    floodfill(120, 170+30, YELLOW);
}

void repaint_menu()
{
    setfillstyle(1, WHITE);
    bar(80+1, 422+1, 80+480-1, 479);
    
    setlinestyle(0, 0, 1);
    setcolor(BLACK);
    line(80, 422, 80, 479);
    line(80+60, 422, 80+60, 479);
    line(80+120, 422, 80+120, 479);
    line(80+180, 422, 80+180, 479);
    line(80+240, 422, 80+240, 479);
    line(80+300, 422, 80+300, 479);
    line(80+360, 422, 80+360, 479);
    line(80+420, 422, 80+420, 479);
    line(80+480, 422, 80+480, 479);

    puthz(86, 427, "欢乐", 24, 26, BLUE);
    puthz(86, 453, "海洋", 24, 26, BLUE);
    puthz(86+60, 427, "甜品", 24, 26, CYAN);
    puthz(86+60, 453, "王国", 24, 26, CYAN);
    puthz(86+60*2, 427, "欢乐", 24, 26, BROWN);
    puthz(86+60*2, 453, "时光", 24, 26, BROWN);
    puthz(86+60*3, 427, "极速", 24, 26, RED);
    puthz(86+60*3, 453, "世界", 24, 26, RED);
    puthz(86+60*4, 427, "羽落", 24, 26, GREEN);
    puthz(86+60*4, 453, "天堂", 24, 26, GREEN);
    puthz(86+60*5, 427, "渔光", 24, 26, LIGHTBLUE);
    puthz(86+60*5+12, 453, "岛", 24, 26, LIGHTBLUE);
    puthz(86+60*6, 427, "飓风", 24, 26, MAGENTA);
    puthz(86+60*6+12, 453, "湾", 24, 26, MAGENTA);
    puthz(86+60*7, 427, "欢乐", 24, 26, LIGHTCYAN);
    puthz(86+60*7, 453, "江城", 24, 26, LIGHTCYAN);
}