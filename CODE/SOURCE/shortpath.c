#include "common.h"
#include "dijkstr.h"
#include "short.h"

void shortpath1(int *page,USER *u)
{
    int state=0,flag=0;
    setlinestyle(0, 0 ,1);
    clrmous(MouseX,MouseY);

    draw_short();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >= 86 && MouseX <= 86+102) && (MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86,80,86+102,80+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86,80,86+102,80+40);
                
            }
            else if(mouse_press(86,80,86+102,80+40)==1)
            {
                delay(200);
                shortpath2(page,u,0);
            }
        }
        else if((MouseX >= 86+102+20 && MouseX <= 86+102+20+102) && (MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86+102+20,80,86+102+20+102,80+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20,80,86+102+20+102,80+40);
                
            }
            else if(mouse_press(86+102+20,80,86+102+20+102,80+40)==1)
            {
                delay(200);
                shortpath2(page,u,1);
            }
        }
        else if((MouseX >= 86+102+20+102+20 && MouseX <= 86+102+20+102+20+102) && (MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86+102+20+102+20,80,86+102+20+102+20+102,80+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20,80,86+102+20+102+20+102,80+40);
            
            }
            else if(mouse_press(86+102+20+102+20,80,86+102+20+102+20+102,80+40)==1)
            {
                delay(200);
                shortpath2(page,u,2);
            }
        }
        else if((MouseX >= 86+102+20+102+20+102+20 && MouseX <= 86+102+20+102+20+102+20+102) && (MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40);
   
            }
            else if(mouse_press(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40)==1)
            {
                delay(200);
                shortpath2(page,u,3);
            }
        }
        else if((MouseX>= 86 && MouseX <= 86+102) && (MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86,80+40+20,86+102,80+40+20+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86,80+40+20,86+102,80+40+20+40);

            }
            else if(mouse_press(86,80+40+20,86+102,80+40+20+40)==1)
            {
                delay(200);
                shortpath2(page,u,4);
            }
        }
        else if((MouseX >= 86+102+20 && MouseX <= 86+102+20+102) && (MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86+102+20,80+40+20,86+102+20+102,80+40+20+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20,80+40+20,86+102+20+102,80+40+20+40);
     
            }
            else if(mouse_press(86+102+20,80+40+20,86+102+20+102,80+40+20+40)==1)
            {
                delay(200);
                shortpath2(page,u,5);
            }
        }
        else if((MouseX >= 86+102+20+102+20 && MouseX <= 86+102+20+102+20+102) && (MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40);
       
            }
            else if(mouse_press(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40)==1)
            {
                delay(200);
                shortpath2(page,u,6);
            }
        }
        else if((MouseX >= 86+102+20+102+20+102+20 && MouseX <= 86+102+20+102+20+102+20+102) && (MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40);
       
            }
            else if(mouse_press(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40)==1)
            {
                delay(200);
                shortpath2(page,u,7);
            }
        }
        else if((MouseX >= 314-40 && MouseX <= 314-40+102) && (MouseY >= 80+40+20+40+20 && MouseY <= 80+40+20+40+20+40))
        {
            if(mouse_press(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40)==2)
            {
                MouseS=1;
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40);
 
            }
            else if(mouse_press(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40)==1)
            {
                delay(200);
                shortpath2(page,u,8);
            }
        }
        else if((MouseX >= 514 && MouseX <= 514+102) && (MouseY >= 420 && MouseY <= 420+40))
        {
            if(mouse_press(514,420,514+102,420+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(514,420,514,420+40);
            }
            else if(mouse_press(514,420,514+102,420+40)==1)
            {
                *page=4;
                cleardevice();
                return;
            }
        }
        else if((MouseX >= 0 && MouseX <= 51) && (MouseY >=3 && MouseY <= 55))
        {
            MouseS=1;
            if(mouse_press(0,3,51,55)==1)
            {
                *page=14;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
            setlinestyle(0,0,3);
			setcolor(YELLOW);
            rectangle(86,80,86+102,80+40);
            rectangle(86+102+20,80,86+102+20+102,80+40);
            rectangle(86+102+20+102+20,80,86+102+20+102+20+102,80+40);
            rectangle(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40);
            rectangle(86,80+40+20,86+102,80+40+20+40);
            rectangle(86+102+20,80+40+20,86+102+20+102,80+40+20+40);
            rectangle(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40);
            rectangle(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40);
            rectangle(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40);
            rectangle(514,420,514+102,420+40);
            
        }
    }

}
void shortpath2(int *page,USER *u,int start)
{
    const int Vector[9][9]={
    {0,181,259,X,X,X,X,X,203},
    {181,0,103,205,X,X,X,X,X},
    {259,103,0,212,X,X,X,X,X},
    {X,205,212,0,132,X,X,X,X},
    {X,X,X,132,0,76,X,175,X},
    {X,X,X,X,76,0,93,144,X},
    {X,X,X,X,X,93,0,105,243},
    {X,X,X,X,175,144,105,0,167},
    {203,X,X,X,X,X,243,167,0},
    };
    TABLE T[Max];
    int end;
    int state[9]={0,0,0,0,0,0,0,0,0};
    clrmous(MouseX,MouseY);
    setfillstyle(1,WHITE);
    bar(195,242,474,290);
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX >= 86 && MouseX <= 86+102 && MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86,80,86+102,80+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86,80,86,80+40);
                MouseS=1;
            }
            else if(mouse_press(86,80,86+102,80+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==0)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=0;
                    dijkstra(Vector,start,end,T);
                    state[0]=1;
                }
            }
        }
        else if((MouseX >= 86+102+20 && MouseX <= 86+102+20+102 && MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86+102+20,80,86+102+20+102,80+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20,80,86+102+20,80+40);
                MouseS=1;
            }
            else if(mouse_press(86+102+20,80,86+102+20+102,80+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=1;
                    dijkstra(Vector,start,end,T);
                    state[1]=1;
                }
            }
        }
        else if((MouseX >= 86+102+20+102+20 && MouseX <= 86+102+20+102+20+102 && MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86+102+20+102+20,80,86+102+20+102+20+102,80+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20,80,86+102+20+102+20+102,80+40);
                MouseS=1;
            }
            else if(mouse_press(86+102+20+102+20,80,86+102+20+102+20+102,80+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                    {
                        setfillstyle(1,WHITE);
                        bar(195,242,474,290);
                        puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                        delay(300);
                        bar(195,242,474,290);
                        continue;
                    }
                if(start==2)
                    {
                        setfillstyle(1,WHITE);
                        bar(195,242,474,290);
                        puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                        delay(300);
                        bar(195,242,474,290);
                        continue;
                    }
                else
                {
                    end=2;
                    dijkstra(Vector,start,end,T);
                    state[2]=1;
                }
            }
        }
        else if((MouseX >= 86+102+20+102+20+102+20 && MouseX <= 86+102+20+102+20+102+20+102 && MouseY >= 80 && MouseY <= 80+40))
        {
            if(mouse_press(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40);
                MouseS=1;
            }
            else if(mouse_press(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40)==1)
            {
            if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==3)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=3;
                    dijkstra(Vector,start,end,T);
                    state[3]=1;
                }
            }
        }
        else if((MouseX>= 86 && MouseX <= 86+102 && MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86,80+40+20,86+102,80+40+20+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86,80+40+20,86+102,80+40+20+40);
                MouseS=1;
            }
            else if(mouse_press(86,80+40+20,86+102,80+40+20+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==4)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=4;
                    dijkstra(Vector,start,end,T);
                    state[4]=1;
                }
            }
        }
        else if((MouseX >= 86+102+20 && MouseX <= 86+102+20+102 && MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86+102+20,80+40+20,86+102+20+102,80+40+20+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20,80+40+20,86+102+20+102,80+40+20+40);
                MouseS=1;
            }
            else if(mouse_press(86+102+20,80+40+20,86+102+20+102,80+40+20+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==5)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=5;
                    dijkstra(Vector,start,end,T);
                    state[5]=1;
                }
            }
        }
        else if((MouseX >= 86+102+20+102+20 && MouseX <= 86+102+20+102+20+102 && MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40);
                MouseS=1;
            }
            else if(mouse_press(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==6)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=6;
                    dijkstra(Vector,start,end,T);
                    state[6]=1;
                }
            }
        }
        else if((MouseX >= 86+102+20+102+20+102+20 && MouseX <= 86+102+20+102+20+102+20+102 && MouseY >= 80+40+20 && MouseY <= 80+40+20+40))
        {
            if(mouse_press(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40);
                MouseS=1;
            }
            else if(mouse_press(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==7)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=7;
                    dijkstra(Vector,start,end,T);
                    state[7]=1;
                }
            }
        }
        else if((MouseX >= 314-40 && MouseX <= 314-40+102 && MouseY >= 80+40+20+40+20 && MouseY <= 80+40+20+40+20+40))
        {
            if(mouse_press(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40);
                MouseS=1;
            }
            else if(mouse_press(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40)==1)
            {
                if(state[0]==1 || state[1]==1 || state[2]==1 || state[3]==1 || state[4]==1 || state[5]==1 || state[6]==1 || state[7]==1||state[8]==1)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"已选择终点",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                if(start==8)
                {
                    setfillstyle(1,WHITE);
                    bar(195,242,474,290);
                    puthz(86+102+20+20+20,260,"起点和终点不能相同",24,24,BLACK);
                    delay(300);
                    bar(195,242,474,290);
                    continue;
                }
                else
                {
                    end=8;
                    dijkstra(Vector,start,end,T);
                    state[8]=1;
                }
            }
        }
        else if((MouseX >= 514 && MouseX <= 514+102 && MouseY >= 420 && MouseY <= 420+40))
        {
            if(mouse_press(514,420,514+102,420+40)==2)
            {
                setcolor(BROWN);
                setlinestyle(0,0,3);
                rectangle(514,420,514,420+40);
            }
            else if(mouse_press(514,420,514+102,420+40)==1)
            {
                *page=4;
                cleardevice();
                return;
            }
        }
        else if((MouseX >= 0 && MouseX <= 51) && (MouseY >=3 && MouseY <= 55))
        {
            MouseS=1;
            if(mouse_press(0,51,3,55)==1)
            {
                *page=14;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
            setlinestyle(0,0,3);
            setcolor(YELLOW);
            rectangle(86,80,86+102,80+40);
            rectangle(86+102+20,80,86+102+20+102,80+40);
            rectangle(86+102+20+102+20,80,86+102+20+102+20+102,80+40);
            rectangle(86+102+20+102+20+102+20,80,86+102+20+102+20+102+20+102,80+40);
            rectangle(86,80+40+20,86+102,80+40+20+40);
            rectangle(86+102+20,80+40+20,86+102+20+102,80+40+20+40);
            rectangle(86+102+20+102+20,80+40+20,86+102+20+102+20+102,80+40+20+40);
            rectangle(86+102+20+102+20+102+20,80+40+20,86+102+20+102+20+102+20+102,80+40+20+40);
            rectangle(314-40,80+40+20+40+20,314-40+102,80+40+20+40+20+40);
            rectangle(514,420,514+102,420+40);
        }
    }
}
void draw_short()
{
    setlinestyle(0, 0 ,1);
    setcolor(BLACK);

    setfillstyle(1,WHITE);

    draw_background();
    draw_back_logo(BLACK,WHITE,BLACK);

    setlinestyle(0,0,3);
    setcolor(BROWN);
    line(141,44,482,44);
    puthz(245,15,"路线推荐",24,40,BROWN);
    draw_yellow_rec(86,80,"羽落天堂");
    draw_yellow_rec(86+102+20,80,"渔光岛");
    draw_yellow_rec(86+102+20+102+20,80,"欢乐江城");
    draw_yellow_rec(86+102+20+102+20+102+20,80,"飓风湾");
    draw_yellow_rec(86,80+40+20,"欢乐时光");
    draw_yellow_rec(86+102+20,80+40+20,"甜品王国");
    draw_yellow_rec(86+102+20+102+20,80+40+20,"欢乐海洋");
    draw_yellow_rec(86+102+20+102+20+102+20,80+40+20,"梦想大道");
    draw_yellow_rec(314-40,80+40+20+40+20, "极速世界");

    puthz(86+102+20+20+20,260,"请选择起点",24,24,BLACK);
    draw_yellow_rec(514,420,"转到地图");
}

void draw_yellow_rec(int x,int y,char *str)
{
    setfillstyle(1,LIGHTCYAN);
    bar(x,y,x+102,y+40);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    rectangle(x,y,x+102,y+40);
    puthz(x+5,y+5,str,24,24,LIGHTRED);
}