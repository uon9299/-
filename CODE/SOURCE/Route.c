#include "common.h"
#include "Route.h"
#include "DrawR.h"

void route(int *page, USER *u)
{
    int state1=0,state2=0,state3=0,state4=0,flag[6]={0,0,0,0,0,0};
    
    clrmous(MouseX,MouseY);
    draw_menu();
    draw_backmap();
    draw_path();

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >= 22 && MouseX <= 386) && (MouseY >= 75 && MouseY <= 149))
        {
            
            MouseS=1;
            if(mouse_press(22,75,386,149)==2&&!flag[0])
            {
                flag[0]=1;
                clrmous(MouseX,MouseY);
                MouseS=1;
                setlinestyle(0,0,3);
                setcolor(BROWN);
                rectangle(22+2,75+2,386-2,149-2);
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
                
            }
            else if(mouse_press(22,75,386,149)==1&&flag[0])
            {
                flag[0]=1;
                setfillstyle(1,WHITE);
                bar(403,73,550,480);
                bar(233,377,388,402);
                draw_rain();
                state1=1;
                state2=0;
                state3=0;
                state4=0;
            }
        }
        else if((MouseX >= 22 && MouseX <= 386) && (MouseY >=149 && MouseY <= 223))
        {
            
            MouseS=1;
            if(mouse_press(22,149,386,223)==2&&!flag[1])
            {
                flag[1]=1;
                clrmous(MouseX,MouseY);
                MouseS=1;
                setlinestyle(0,0,3);
                setcolor(BROWN);
                rectangle(22+2,149+2,386-2,223-2);
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
            }
            else if(mouse_press(22,149,386,223)==1)
            {
                setfillstyle(1,WHITE);
                bar(403,73,550,480);
                bar(233,377,388,402);
                draw_night();
                state1=0;
                state2=1;
                state3=0;
                state4=0;
            }
        }
        else if((MouseX >= 22 && MouseX <= 386) && (MouseY >=225 && MouseY <= 296))
        {
            
            MouseS=1;
            if(mouse_press(22,223,386,297)==2&&!flag[2])
            {
                flag[2]=1;
                clrmous(MouseX,MouseY);
                MouseS=1;
                setlinestyle(0,0,3);
                setcolor(BROWN);
                rectangle(22+2,223+2,386-2,297-2);
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
            }
            else if(mouse_press(22,223,386,297)==1&&flag[2])
            {
                flag[2]=1;
                setfillstyle(1,WHITE);
                bar(403,73,550,480);
                bar(233,377,388,402);
                draw_star1();
                state1=0;
                state2=0;
                state3=1;
                state4=0;
            }
        }
        else if((MouseX >= 22 && MouseX <= 386) && (MouseY >=298 && MouseY <= 370))
        {
            MouseS=1;
            if(mouse_press(22,297,386,370)==2&&!flag[3])
            {
                flag[3]=1;
                clrmous(MouseX,MouseY);
                MouseS=1;
                setlinestyle(0,0,3);
                setcolor(BROWN);
                rectangle(22+2,297+2,386-2,370-2);
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);
            }
            else if(mouse_press(22,297,386,370)==1)
            {
                setfillstyle(1,WHITE);
                bar(403,73,550,480);
                bar(233,377,388,402);
                draw_family();
                state1=0;
                state2=0;
                state3=0;
                state4=1;
            }
        }
        else if((MouseX >= 235 && MouseX <= 388) && (MouseY >=405 && MouseY <= 465))
        {
            
            MouseS=1;
            if(mouse_press(235,405,388,465)==2)
            {
                MouseS=1;
                setlinestyle(0,0,3);
                setcolor(BROWN);
                rectangle(235+2,405+2,388-2,465-2);

            }
            else if(mouse_press(235,405,388,465)==1)
            {
                if(state1)
                {
                    *page=15;
                    cleardevice();
                    return;
                }
                else if(state2)
                {
                    *page=16;
                    cleardevice();
                    return;
                }
                else if(state3)
                {
                    *page=17;
                    cleardevice();
                    return;
                }
                else if(state4)
                {
                    *page=18;
                    cleardevice();
                    return;
                }
                else
                {
                    puthz(240,385,"请先选择路线",16,16,RED);
                    setfillstyle(1,WHITE);
                    bar(233,377,388,402);
                }
            }
        }
        else if((MouseX >= 29 && MouseX <= 182) && (MouseY >=405 && MouseY <= 465))
        {
            MouseS=1;
            if(mouse_press(29,405,182,465)==2)
            {
                MouseS=1;
                setlinestyle(0,0,3);
                setcolor(BROWN);
                rectangle(29+2,405+2,182-2,465-2);
            }
            else if(mouse_press(29,405,182,465)==1)
            {
                MouseS=1;
                *page=22;
                cleardevice();
                return;
            }
        }
        else if((MouseX >= 0 && MouseX <= 51) && (MouseY >=3 && MouseY <= 55))
        {
            flag[0]=0;
            flag[1]=0;
            flag[2]=0;
            flag[3]=0;
            flag[4]=0;
            flag[5]=0;
            MouseS=1;
            if(mouse_press(0,3,51,55)==1)
            {
                MouseS=1;
                *page=4;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
            setlinestyle(0,0,3);
            setcolor(YELLOW);
            rectangle(22,75,386,370);
            line(22,75+74,386,75+74);
            line(22,75+74*2,386,75+74*2);
            line(22,75+74*3,386,75+74*3);
            setcolor(LIGHTCYAN);
            rectangle(235+2,405+2,388-2,465-2);
            rectangle(29+2,405+2,182-2,465-2);
        }

        if(mouse_press(22,75,386,149)==0&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX,MouseY);
            setlinestyle(0,0,3);
            setcolor(LIGHTCYAN);
            rectangle(22+2,75+2,386-2,149-2);
            save_bk_mou(MouseX,MouseY);
            drawmous(MouseX,MouseY);
        }
        else if(mouse_press(22,149,386,223)==0&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX,MouseY);
            setlinestyle(0,0,3);
            setcolor(LIGHTCYAN);
            rectangle(22+2,149+2,386-2,223-2);
            save_bk_mou(MouseX,MouseY);
            drawmous(MouseX,MouseY);
        }
        else if(mouse_press(22,223,386,297)==0&&flag[2])
        {
            flag[2]=0;
            clrmous(MouseX,MouseY);
            setlinestyle(0,0,3);
            setcolor(LIGHTCYAN);
            rectangle(22+2,223+2,386-2,297-2);
            save_bk_mou(MouseX,MouseY);
            drawmous(MouseX,MouseY);
        }
        else if(mouse_press(22,297,386,370)==0&&flag[3])
        {
            flag[3]=0;
            clrmous(MouseX,MouseY);
            setlinestyle(0,0,3);
            setcolor(LIGHTCYAN);
            rectangle(22+2,297+2,386-2,370-2);
            save_bk_mou(MouseX,MouseY);
            drawmous(MouseX,MouseY);
        }
    }
}