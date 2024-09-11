#include "common.h"
#include "booking.h"

void booking_draw(void)
{    // 绘制订票界面
    setfillstyle(1, WHITE);
	bar(0, 0, 639, 479);
    draw_background();
    draw_back_logo(BLACK, WHITE, BLACK);
	draw_logo(590, 430, 3);
	settextstyle(2, 0, 4);
	outtextxy(30+530+10, 41+370+8, "Happy");
	outtextxy(40+520+20-1, 63+370-2, "Valley");
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(80+10, 45, 80+120-10, 45);
    line(80+120+10, 45, 80+240-10, 45);
    line(80+240+10, 45, 80+360-10, 45);
    line(80+360+10, 45, 560-10, 45);
    puthz(80+20, 45-27, "成人票", 24, 28, BLACK);
    puthz(80+120+20, 45-27, "学生票", 24, 28, BLACK);
    puthz(80+240+20, 45-27, "儿童票", 24, 28, BLACK);
    puthz(80+360+20, 45-27, "家庭票", 24, 28, BLACK);
}

void booking(int *page, USER *user)
{
    int i=0;
    char tickets[2];
    int flag[4]={0,0,0,0};

    clrmous(MouseX, MouseY);
    booking_draw();

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        
        if(MouseX >= 80+15 && MouseX <=80+120-15  && MouseY >= 20 && MouseY <= 45)
        {
            
            if((mouse_press(80+15, 20, 80+120-15, 45) == 1)&&flag[0])
            {
                clrmous(MouseX, MouseY);                
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+10, 45, 80+120-10, 45);
                puthz(80+20, 45-27, "成人票", 24, 28, RED);
				// 成人票
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[0]=1;
                clrmous(MouseX, MouseY);

                adult_ticket(&page, user);
            }
            else if((mouse_press(80+15, 20, 80+120-15, 45) == 2)&&!flag[0])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+10, 45, 80+120-10, 45);
                puthz(80+20, 45-27, "成人票", 24, 28, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[0]=1;
            }
            
        }
        else if(MouseX >= 80+120+15 && MouseX <=80+240-15  && MouseY >= 20 && MouseY <= 45)
        {
            if((mouse_press(80+120+15, 20, 80+240-15, 45) == 1)&&flag[1])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+120+10, 45, 80+240-10, 45);
                puthz(80+120+20, 45-27, "学生票", 24, 28, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[1]=1;
                clrmous(MouseX, MouseY);
                // 学生票

                student_ticket(&page, user);
            }
            else if((mouse_press(80+120+15, 20, 80+240-15, 45) == 2)&&!flag[1])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+120+10, 45, 80+240-10, 45);
                puthz(80+120+20, 45-27, "学生票", 24, 28, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[1]=1;
            }
            
        }
        else if(MouseX >= 80+240+15 && MouseX <=80+360-15  && MouseY >= 20 && MouseY <= 45)
        {
            if((mouse_press(80+240+15, 20, 80+360-15, 45) == 1)&&flag[2])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+240+10, 45, 80+360-10, 45);
                puthz(80+240+20, 45-27, "儿童票", 24, 28, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[2]=1;
                clrmous(MouseX, MouseY);
                // 儿童票
                child_ticket(&page, user);
            }
            else if((mouse_press(80+240+15, 20, 80+360-15, 45) == 2)&&!flag[2])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+240+10, 45, 80+360-10, 45);
                puthz(80+240+20, 45-27, "儿童票", 24, 28, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[2]=1;
            }
            
        }
        else if(MouseX >= 80+360+15 && MouseX <=80+480-15  && MouseY >= 20 && MouseY <= 45)
        {
            if((mouse_press(80+360+15, 20, 80+480-15, 45) == 1)&&flag[3])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+360+10, 45, 80+480-10, 45);
                puthz(80+360+20, 45-27, "家庭票", 24, 28, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[3]=1;
                clrmous(MouseX, MouseY);
                // 家庭票
                family_ticket(&page, user);
            }
            else if((mouse_press(80+360+15, 20, 80+480-15, 45) == 2)&&!flag[3])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(BROWN);
                line(80+360+10, 45, 80+480-10, 45);
                puthz(80+360+20, 45-27, "家庭票", 24, 28, RED);
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                flag[3]=1;
            }               
        }
        
        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                //booking_draw();
                *page=3;

                delay(100);
                return;
            }
        }
        else
        {
            MouseS=0;
        }

        if((mouse_press(80+15, 20, 80+120-15, 45) == 0)&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);                
            MouseS=0;
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(80+10, 45, 80+120-10, 45);
            puthz(80+20, 45-27, "成人票", 24, 28, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+120+15, 20, 80+240-15, 45) == 0)&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(80+120+10, 45, 80+240-10, 45);
            puthz(80+120+20, 45-27, "学生票", 24, 28, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+240+15, 20, 80+360-15, 45) == 0)&&flag[2])
        {
            flag[2]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(80+240+10, 45, 80+360-10, 45);
            puthz(80+240+20, 45-27, "儿童票", 24, 28, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }
        else if((mouse_press(80+360+15, 20, 80+480-15, 45) == 0)&&flag[3])
        {
            flag[3]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(80+360+10, 45, 80+480-10, 45);
            puthz(80+360+20, 45-27, "家庭票", 24, 28, BLACK);
            save_bk_mou(MouseX, MouseY);
            drawmous(MouseX, MouseY);
        }  
    }
}

void adult_ticket(int *page, USER *user)
{
    int i=1, flag=0;
    char tickets[2]="0";

    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);
    //booking_draw();

    setfillstyle(1, LIGHTGRAY);
    bar(140-60, 140-60, 619-60, 459-60);
    setfillstyle(1, WHITE);
    bar(100, 150, 390, 290);//画背景
    setlinestyle(0, 0, 1);
    setcolor(YELLOW);
    rectangle(100, 150, 390, 290);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTCYAN);
    rectangle(140-60, 140-60, 619-60, 459-60);
    setlinestyle(0, 0, 3);
    setcolor(WHITE);
    setfillstyle(1, YELLOW);
    bar(170-60, 155-60, 275-60, 190-60);
    bar(315-60, 155-60, 447-60, 190-60);//画可订当日和身份证验证的背景
    rectangle(170-60, 155-60, 275-60, 190-60);
    rectangle(315-60, 155-60, 447-60, 190-60);
    //rectangle(460, 155, 565, 190);
	puthz(173-60, 160-60, "可订当日", 24, 26, LIGHTRED);
	puthz(318-60, 160-60, "身份证验证", 24, 26, LIGHTRED);
    //puthz(463, 160, "待定", 24, 26, BLACK);
    puthz(173-60, 215-60, "成人全日票", 48, 50, LIGHTRED);
	settextstyle(1, 0, 7);
	setcolor(BROWN);
	draw_money(193-60, 308-60, BROWN, 7);
	outtextxy(220-60, 270-60, "200");//画提示信息
	
	setcolor(DARKGRAY);
	rectangle(170-60, 380-60, 210-60, 420-60);
	rectangle(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, WHITE);
	bar(170-60, 380-60, 210-60, 420-60);
	bar(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, BLACK);
	bar(177-60, 398-60, 203-60, 402-60);
	bar(327-60, 398-60, 353-60, 402-60);
	bar(338-60, 387-60, 342-60, 413-60);//画“+”“-”号

    setcolor(LIGHTBLUE);
    rectangle(415-60, 380-60, 555-60, 420-60);
    setfillstyle(1, BLUE);
    floodfill(420-60, 385-60, LIGHTBLUE);
    puthz(455-60, 388-60, "购票", 24, 36, YELLOW);//画“购票”按钮

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        MouseS=0;

        if(MouseX >= 170-60 && MouseX <=210-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(170-60, 380-60, 210-60, 420-60) == 1)
            {
                delay(300);
                if(i>=0 && i<=9)
                {
                    if(i>0 && i<=9)
                        i--;
                    else if(i==0)
                        i=0;
                }
                
                flag=1;
            }
        }
        else if(MouseX >= 320-60 && MouseX <=360-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(320-60, 380-60, 360-60, 420-60) == 1)
            {
                delay(300);
                if(i>=0 && i<=9)
                {
                    if(i>=0 && i<9)
                        i++;
                    else if(i==9)
                        i=9;
                }
                                
                flag=1;
            }
        }
        else if(MouseX >= 415-60 && MouseX <=555-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(415-60, 380-60, 555-60, 420-60) == 1)
            {
                booking_ticket(user, 0, i);
                clrmous(MouseX, MouseY);
                booking_draw();
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                //*page=20;
                return;
            }
        }
        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                booking_draw();
                delay(100);
                //*page=20;
                return;
            }
        }
        else
        {
            MouseS=0;
        }

        if(i>=0 && i<=9)
        {
            tickets[0] = i + '0';
            tickets[1] = '\0';
        }
        settextstyle(1, 0, 7);
        setcolor(BROWN);
        setfillstyle(1, LIGHTGRAY);
        if(flag)
        {
            bar(212-60, 360-60, 318-60, 440-60);
            flag=0;
        }

        outtextxy(255-60, 360-60, tickets);
    }
}

void student_ticket(int *page, USER *user)
{
    int i=1, flag=0;
    char tickets[2]="0";

    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);
    //booking_draw();

    setfillstyle(1, LIGHTGRAY);
    bar(140-60, 140-60, 619-60, 459-60);
    setfillstyle(1, WHITE);
    bar(100, 150, 390, 290);//画背景
    setlinestyle(0, 0, 1);
    setcolor(YELLOW);
    rectangle(100, 150, 390, 290);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTCYAN);
    rectangle(140-60, 140-60, 619-60, 459-60);
    setlinestyle(0, 0, 3);
    setcolor(WHITE);
    setfillstyle(1, YELLOW);
    bar(170-10-60, 155-60, 275-10-60, 190-60);
    bar(315-10-60, 155-60, 447-10-60, 190-60);
    bar(487-10-60, 155-60, 592+27-10-60, 190-60);
    rectangle(170-10-60, 155-60, 275-10-60, 190-60);
    rectangle(315-10-60, 155-60, 447-10-60, 190-60);
    rectangle(487-10-60, 155-60, 592+27-10-60, 190-60);
	puthz(173-10-60, 160-60, "可订当日", 24, 26, LIGHTRED);
	puthz(318-10-60, 160-60, "身份证验证", 24, 26, LIGHTRED);
    puthz(489-10-60, 160-60, "核验学生证", 24, 26, LIGHTRED);
    puthz(173-60, 215-60, "学生全日票", 48, 50, LIGHTRED);
	settextstyle(1, 0, 7);
	setcolor(BROWN);
	draw_money(193-60, 308-60, BROWN, 7);
	outtextxy(220-60, 270-60, "180");//画提示信息
	
	setcolor(DARKGRAY);
	rectangle(170-60, 380-60, 210-60, 420-60);
	rectangle(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, WHITE);
	bar(170-60, 380-60, 210-60, 420-60);
	bar(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, BLACK);
	bar(177-60, 398-60, 203-60, 402-60);
	bar(327-60, 398-60, 353-60, 402-60);
	bar(338-60, 387-60, 342-60, 413-60);//画“+”“-”号

    setcolor(LIGHTBLUE);
    rectangle(415-60, 380-60, 555-60, 420-60);
    setfillstyle(1, BLUE);
    floodfill(420-60, 385-60, LIGHTBLUE);
    puthz(455-60, 388-60, "购票", 24, 36, YELLOW);//画“购票”按钮

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        MouseS=0;

        if(MouseX >= 170-60 && MouseX <=210-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(170-60, 380-60, 210-60, 420-60) == 1)
            {
                delay(300);
                if(i>0 && i<=9)
                {
                    i--;
                }

                flag=1;
            }
        }
        else if(MouseX >= 320-60 && MouseX <=360-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(320-60, 380-60, 360-60, 420-60) == 1)
            {
                delay(300);
                if(i>=1 && i<9)
                {
                    i++;
                }
                
                flag=1;
            }
        }
        else if(MouseX >= 415-60 && MouseX <=555-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(415-60, 380-60, 555-60, 420-60) == 1)
            {
                booking_ticket(user, 1, i);
                clrmous(MouseX, MouseY);
                booking_draw();
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                //*page=20;
                return;
            }
        }
        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                booking_draw();
                delay(100);
                //*page=20;
                return;
            }
        }
        else
        {
            MouseS=0;
        }

        if(i>=0 && i<=9)
        {
            tickets[0] = i + '0';
            tickets[1] = '\0';
        }
        settextstyle(1, 0, 7);
        setcolor(BROWN);
        setfillstyle(1, LIGHTGRAY);
        if(flag)
        {
            bar(212-60, 360-60, 318-60, 440-60);
            flag=0;
        }

        outtextxy(255-60, 360-60, tickets);
    }
}
	
void child_ticket(int *page, USER *user)
{
    int i=1, flag=0;
    char tickets[2]="0";

    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);
    //booking_draw();

    setfillstyle(1, LIGHTGRAY);
    bar(140-60, 140-60, 619-60, 459-60);
    setfillstyle(1, WHITE);
    bar(100, 150, 390, 290);//画背景
    setlinestyle(0, 0, 1);
    setcolor(YELLOW);
    rectangle(100, 150, 390, 290);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTCYAN);
    rectangle(140-60, 140-60, 619-60, 459-60);
    setlinestyle(0, 0, 3);
    setcolor(WHITE);
    setfillstyle(1, YELLOW);
    bar(170-60, 155-60, 275-60, 190-60);
    bar(315-60, 155-60, 447-60, 190-60);
    bar(487-60, 155-60, 592-60, 190-60);
    rectangle(170-60, 155-60, 275-60, 190-60);
    rectangle(315-60, 155-60, 447-60, 190-60);
    rectangle(487-60, 155-60, 592-60, 190-60);
    puthz(173-60, 160-60, "可订当日", 24, 26, LIGHTRED);
	puthz(318-60, 160-60, "身份证验证", 24, 26, LIGHTRED);
    puthz(489-60, 160-60, "核验身高", 24, 26, LIGHTRED);
    puthz(173-60, 215-60, "儿童全日票", 48, 50, LIGHTRED);
	settextstyle(1, 0, 7);
	setcolor(BROWN);
	draw_money(193-60, 308-60, BROWN, 7);
	outtextxy(220-60, 270-60, "140");//画提示信息
	
	setcolor(DARKGRAY);
	rectangle(170-60, 380-60, 210-60, 420-60);
	rectangle(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, WHITE);
	bar(170-60, 380-60, 210-60, 420-60);
	bar(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, BLACK);
	bar(177-60, 398-60, 203-60, 402-60);
	bar(327-60, 398-60, 353-60, 402-60);
	bar(338-60, 387-60, 342-60, 413-60);//画“+”“-”号

    setcolor(LIGHTBLUE);
    rectangle(415-60, 380-60, 555-60, 420-60);
    setfillstyle(1, BLUE);
    floodfill(420-60, 385-60, LIGHTBLUE);
    puthz(455-60, 388-60, "购票", 24, 36, YELLOW);//画“购票”按钮
    
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        MouseS=0;

        if(MouseX >= 170-60 && MouseX <=210-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(170-60, 380-60, 210-60, 420-60) == 1)
            {
                delay(300);
                if(i>0 && i<=9)
                {
                    i--;
                }

                flag=1;
            }
        }
        else if(MouseX >= 320-60 && MouseX <=360-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(320-60, 380-60, 360-60, 420-60) == 1)
            {
                delay(300);
                if(i>=1 && i<9)
                {
                    i++;
                }
                
                flag=1;
            }
        }
        else if(MouseX >= 415-60 && MouseX <=555-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(415-60, 380-60, 555-60, 420-60) == 1)
            {
                booking_ticket(user, 2, i);
                clrmous(MouseX, MouseY);
                booking_draw();
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                //*page=20;
                return;
            }
        }
        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                booking_draw();
                delay(100);
                //*page=20;
                return;
            }
        }
        else
        {
            MouseS=0;
        }

        if(i>=0 && i<=9)
        {
            tickets[0] = i + '0';
            tickets[1] = '\0';
        }
        settextstyle(1, 0, 7);
        setcolor(BROWN);
        setfillstyle(1, LIGHTGRAY);
        if(flag)
        {
            bar(212-60, 360-60, 318-60, 440-60);
            flag=0;
        }

        outtextxy(255-60, 360-60, tickets);
    }
}

void family_ticket(int *page, USER *user)
{
    int i=1, flag=0;
    char tickets[2]="0";

    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);
    //booking_draw();

    setfillstyle(1, LIGHTGRAY);
    bar(140-60, 140-60, 619-60, 459-60);
    setfillstyle(1, WHITE);
    bar(100, 150, 390, 290);//画背景
    setlinestyle(0, 0, 1);
    setcolor(YELLOW);
    rectangle(100, 150, 390, 290);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTCYAN);
    rectangle(140-60, 140-60, 619-60, 459-60);
    setlinestyle(0, 0, 3);
    setcolor(WHITE);
    setfillstyle(1, YELLOW);
    bar(170-60, 155-60, 275-60, 190-60);
    bar(315-60, 155-60, 447-60, 190-60);
    bar(487-60, 155-60, 592-60, 190-60);
    rectangle(170-60, 155-60, 275-60, 190-60);
    rectangle(315-60, 155-60, 447-60, 190-60);
    rectangle(487-60, 155-60, 592-60, 190-60);
    puthz(173-60, 160-60, "可订当日", 24, 26, LIGHTRED);
	puthz(318-60, 160-60, "身份证验证", 24, 26, LIGHTRED);
    puthz(489-60, 160-60, "核验身高", 24, 26, LIGHTRED);
    puthz(173-60, 215-60, "家庭全日票", 48, 50, LIGHTRED);
	settextstyle(1, 0, 7);
	setcolor(BROWN);
	draw_money(193-60, 308-60, BROWN, 7);
	outtextxy(220-60, 270-60, "500");//画提示信息
	
	setcolor(DARKGRAY);
	rectangle(170-60, 380-60, 210-60, 420-60);
	rectangle(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, WHITE);
	bar(170-60, 380-60, 210-60, 420-60);
	bar(320-60, 380-60, 360-60, 420-60);
	setfillstyle(1, BLACK);
	bar(177-60, 398-60, 203-60, 402-60);
	bar(327-60, 398-60, 353-60, 402-60);
	bar(338-60, 387-60, 342-60, 413-60);//画“+”“-”号

    setcolor(LIGHTBLUE);
    rectangle(415-60, 380-60, 555-60, 420-60);
    setfillstyle(1, BLUE);
    floodfill(420-60, 385-60, LIGHTBLUE);
    puthz(455-60, 388-60, "购票", 24, 36, YELLOW);//画“购票”按钮
    

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        MouseS=0;

        if(MouseX >= 170-60 && MouseX <=210-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(170-60, 380-60, 210-60, 420-60) == 1)
            {
                delay(300);
                if(i>0 && i<=9)
                {
                    i--;
                }

                flag=1;
            }
        }
        else if(MouseX >= 320-60 && MouseX <=360-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(320-60, 380-60, 360-60, 420-60) == 1)
            {
                delay(300);
                if(i>=1 && i<9)
                {
                    i++;
                }
                
                flag=1;
            }
        }
        else if(MouseX >= 415-60 && MouseX <=555-60  && MouseY >= 380-60 && MouseY <= 420-60)
        {
            MouseS=1;
            if(mouse_press(415-60, 380-60, 555-60, 420-60) == 1)
            {
                booking_ticket(user, 0, 2*i);
                booking_ticket(user, 2, i);
                clrmous(MouseX, MouseY);
                booking_draw();
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                //*page=20;
                return;
            }
        }
        else if(MouseX >= 5 && MouseX <=55  && MouseY >= 5 && MouseY <= 55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55) == 1)
            {
                booking_draw();
                delay(100);
                //*page=20;
                return;
            }
        }
        else
        {
            MouseS=0;
        }

        if(i>=0 && i<=9)
        {
            tickets[0] = i + '0';
            tickets[1] = '\0';
        }
        settextstyle(1, 0, 7);
        setcolor(BROWN);
        setfillstyle(1, LIGHTGRAY);
        if(flag)
        {
            bar(212-60, 360-60, 318-60, 440-60);
            flag=0;
        }

        outtextxy(255-60, 360-60, tickets);
    }
}

void booking_ticket(USER *user, int t, int number)
{
	int i,j,k;
	int len;
	USER *uu;
	FILE *fp;
	fp = fopen("Database\\UserData.dat", "rb+");
	fseek(fp,0,SEEK_END);
	len = ftell(fp)/sizeof(USER);
    if ((uu = (USER *)malloc(sizeof(USER))) == NULL)
	{
		printf("memory allocation runs wrong in booking.c");
		delay(3000);
		exit(1);
	}

	for (i = 0; i < len; i++)
	{
		fseek(fp, i * sizeof(USER), SEEK_SET);
		fread(uu, sizeof(USER), 1, fp);
        if(strcmp(uu->username,user->username)==0)
        {
            uu->ticket[t][0]+=number;
            fseek(fp, i * sizeof(USER), SEEK_SET);
            fwrite(uu, sizeof(USER), 1, fp);
            for(j=0;j<6;j++)
			{
				for(k=0;k<6;k++)
                    user->ticket[j][k]=uu->ticket[j][k];
			}
        }
	}
    free(uu);//释放内存空间，防止内存泄漏。
    fclose(fp);//关闭文件。
}