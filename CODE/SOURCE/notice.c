#include "common.h"
#include "notice.h"

void notice(int *page, USER *user)
{
    int flag[2]={0,0};
    clrmous(MouseX, MouseY);
    notice_draw();
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);

        if(MouseX>=173&&MouseX<=272&&MouseY>=15&&MouseY<=45)
        {
            if(mouse_press(173, 15, 272, 45)==1&&flag[0])
            {
                clrmous(MouseX, MouseY);
                flag[0]=0;
                MouseS=1;
                newmouse(&MouseX, &MouseY, &press);

                show_announcement(user);
            }
            else if(mouse_press(173, 15, 272, 45)==2&&!flag[0])
            {
                clrmous(MouseX, MouseY);
                flag[0]=1;
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(RED);
                line(140, 45, 305, 45);
                puthz(173, 15, "�ݳ�����", 24, 26, BROWN);
                newmouse(&MouseX, &MouseY, &press);
            }
        }
        else if(MouseX>=348&&MouseX<=447&&MouseY>=15&&MouseY<=45)
        {
            if(mouse_press(348, 15, 447, 45)==1&&flag[1])
            {
                clrmous(MouseX, MouseY);
                flag[1]=1;
                MouseS=1;
                newmouse(&MouseX, &MouseY, &press);

                visitor_information();
            }
            else if(mouse_press(348, 15, 447, 45)==2&&!flag[1])
            {
                clrmous(MouseX, MouseY);
                flag[1]=1;
                MouseS=1;
                setlinestyle(0, 0, 3);
                setcolor(RED);
                line(315, 45, 480, 45);
                puthz(348, 15, "�ο���֪", 24, 26, BROWN);
                newmouse(&MouseX, &MouseY, &press);
            }
        }
        else if(MouseX>=5&&MouseX<=55&&MouseY>=5&&MouseY<=55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55)==1)
            {
                *page=3;
                delay(100);
                return;
            }
        }

        if(mouse_press(173, 15, 272, 45)==0&&flag[0])
        {
            flag[0]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(140, 45, 305, 45);
            puthz(173, 15, "�ݳ�����", 24, 26, BLACK);
            newmouse(&MouseX, &MouseY, &press);
        }
        else if(mouse_press(348, 15, 447, 45)==0&&flag[1])
        {
            flag[1]=0;
            clrmous(MouseX, MouseY);
            MouseS=0;
            setlinestyle(0, 0, 3);
            setcolor(LIGHTGRAY);
            line(315, 45, 480, 45);
            puthz(348, 15, "�ο���֪", 24, 26, BLACK);
            newmouse(&MouseX, &MouseY, &press);
        }
        
    }
}

void notice_draw()
{
    draw_background();
    
    draw_logo(590, 430, 3);
	settextstyle(2, 0, 4);
	outtextxy(30+530+10, 41+370+8, "Happy");
	outtextxy(40+520+20-1, 63+370-2, "Valley");
    
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(140, 45, 305, 45);
    line(315, 45, 480, 45);
    puthz(173, 15, "�ݳ�����", 24, 26, BLACK);
    puthz(348, 15, "�ο���֪", 24, 26, BLACK);
    draw_back_logo(BLACK, WHITE, BLACK);
}

void show_announcement(USER *user)
{    
    notice_draw();
    setlinestyle(0, 0, 3);
    setcolor(RED);
    line(140, 45, 305, 45);
    puthz(173, 15, "�ݳ�����", 24, 26, BROWN);
    
    setfillstyle(1, LIGHTCYAN);
    bar(20, 75, 390, 395);
    setfillstyle(1, MAGENTA);
    bar(390, 75, 420, 395);
    setlinestyle(0, 0, 3);
    setcolor(YELLOW);
    rectangle(20, 75, 420, 395);
    line(20, 75+64, 420, 75+64);
    line(20, 75+64+64, 420, 75+64+64);
    line(20, 75+64+64+64, 420, 75+64+64+64);
    line(20, 75+64+64+64+64, 420, 75+64+64+64+64);
    line(390, 75, 390, 395);
    puthz(30, 83, "��ӣ�ż�", 48, 52, LIGHTRED);
    puthz(30, 83+64, "��Ϸ��ˣ", 48, 52, LIGHTRED);
    puthz(30, 83+64+64, "����ͷ", 48, 77, LIGHTRED);
    puthz(30, 83+64+64+64, "�ᱦ�ɳ�", 48, 52, LIGHTRED);
    puthz(30, 83+64+64+64+64, "��ˮ����", 48, 52, LIGHTRED);
    //draw_navigation(265, 90, 5, BROWN);   
    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    setfillstyle(1, BROWN);
    circle(265, 90, 3);
    circle(265, 90, 7);
    line(265-7, 90+3, 265, 90+16);
    line(265+7, 90+3, 265, 90+16);
    floodfill(260, 90, BROWN);
    floodfill(265, 90+15, BROWN);

    draw_navigation(265, 90+64, 5, BROWN);
    draw_navigation(265, 90+64+64, 5, BROWN);
    draw_navigation(265, 90+64+64+64, 5, BROWN);
    draw_navigation(265, 90+64+64+64+64, 5, BROWN);
    puthz(283, 83, "����ʱ��", 24, 24, BLACK);
    puthz(283, 83+64, "��������", 24, 24, BLACK);
    puthz(283, 83+64+64, "���ֽ���", 24, 24, BLACK);
    puthz(283, 83+64+64+64, "��������", 24, 24, BLACK);
    puthz(283, 83+64+64+64+64, "��������", 24, 24, BLACK);

    puthz(393, 83, "Ԥ", 24, 24, WHITE);
    puthz(393, 83+64, "Ԥ", 24, 24, WHITE);
    puthz(393, 83+64+64, "Ԥ", 24, 24, WHITE);
    puthz(393, 83+64+64+64, "Ԥ", 24, 24, WHITE);
    puthz(393, 83+64+64+64+64, "Ԥ", 24, 24, WHITE);
    puthz(393, 111, "Լ", 24, 24, WHITE);
    puthz(393, 111+64, "Լ", 24, 24, WHITE);
    puthz(393, 111+64+64, "Լ", 24, 24, WHITE);
    puthz(393, 111+64+64+64, "Լ", 24, 24, WHITE);
    puthz(393, 111+64+64+64+64, "Լ", 24, 24, WHITE);

    settextstyle(1, 0, 4);
    setcolor(RED);
    outtextxy(287, 103, "15:30");
    outtextxy(287, 103+64, "16:20");
    outtextxy(287, 103+64+64, "17:30");
    outtextxy(287, 103+64+64+64, "19:30");
    outtextxy(287, 103+64+64+64+64, "20:45");


    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        
        if(MouseX>=20&&MouseX<=20+400&&MouseY>=75&&MouseY<=75+64)
        {
            MouseS=1;
            if(mouse_press(20, 75, 20+370, 75+64)==1)
            {
                setfillstyle(1, LIGHTGREEN);
                bar(430, 75+64, 630, 395-64);
                setlinestyle(0, 0, 3);
                setcolor(YELLOW);
                rectangle(430, 75+64, 630, 395-64);

                while(1)
                {                    
                    newmouse(&MouseX, &MouseY, &press);
                    if(mouse_press(20, 75, 20+370, 75+64)==2)
                    {                 
                        time_count(15, 30);
                    }
                    else
                    {
                        repaint_background();
                        break;
                    }     
                }           
            }
            else if(mouse_press(20+370, 75, 20+400, 75+64)==1)
            {
                booked(user, 1);
            }
        }
        else if(MouseX>=20&&MouseX<=20+400&&MouseY>=75+64&&MouseY<=75+64+64)
        {
            MouseS=1;
            if(mouse_press(20, 75+64, 20+370, 75+64+64)==1)
            {
                setfillstyle(1, LIGHTGREEN);
                bar(430, 75+64, 630, 395-64);
                setlinestyle(0, 0, 3);
                setcolor(YELLOW);
                rectangle(430, 75+64, 630, 395-64);

                while(1)
                {                    
                    newmouse(&MouseX, &MouseY, &press);
                    if(mouse_press(20, 75+64, 20+370, 75+64+64)==2)
                    {                        
                        time_count(16, 20);
                    }
                    else
                    {
                        repaint_background();
                        break;
                    }     
                }           
            }
            else if(mouse_press(20+370, 75+64, 20+400, 75+64+64)==1)
            {
                booked(user, 2);
            }
        }
        else if(MouseX>=20&&MouseX<=20+400&&MouseY>=75+64+64&&MouseY<=75+64+64+64)
        {
            MouseS=1;
            if(mouse_press(20, 75+64+64, 20+370, 75+64+64+64)==1)
            {
                setfillstyle(1, LIGHTGREEN);
                bar(430, 75+64, 630, 395-64);
                setlinestyle(0, 0, 3);
                setcolor(YELLOW);
                rectangle(430, 75+64, 630, 395-64);
                while(1)
                {                    
                    newmouse(&MouseX, &MouseY, &press);
                    if(mouse_press(20, 75+64+64, 20+370, 75+64+64+64)==2)
                    {                   
                        time_count(17, 30);
                    }
                    else
                    {
                        repaint_background();
                        break;
                    }     
                }           
            }
            else if(mouse_press(20+370, 75+64+64, 20+400, 75+64+64+64)==1)
            {
                booked(user, 3);
            }
        }
        else if(MouseX>=20&&MouseX<=20+400&&MouseY>=75+64+64+64&&MouseY<=75+64+64+64+64)
        {
            MouseS=1;
            if(mouse_press(20, 75+64+64+64, 20+370, 75+64+64+64+64)==1)
            {
                setfillstyle(1, LIGHTGREEN);
                bar(430, 75+64, 630, 395-64);
                setlinestyle(0, 0, 3);
                setcolor(YELLOW);
                rectangle(430, 75+64, 630, 395-64);

                while(1)
                {                    
                    newmouse(&MouseX, &MouseY, &press);
                    if(mouse_press(20, 75+64+64+64, 20+370, 75+64+64+64+64)==2)
                    {
                        time_count(19, 30);
                    }
                    else
                    {
                        repaint_background();
                        break;
                    }     
                }           
            }
            else if(mouse_press(20+370, 75+64+64+64, 20+400, 75+64+64+64+64)==1)
            {
                booked(user, 4);
            }
        }
        else if(MouseX>=20&&MouseX<=20+400&&MouseY>=75+64+64+64+64&&MouseY<=75+64+64+64+64+64)
        {
            MouseS=1;
            if(mouse_press(20, 75+64+64+64+64, 20+370, 75+64+64+64+64+64)==1)
            {
                setfillstyle(1, LIGHTGREEN);
                bar(430, 75+64, 630, 395-64);
                setlinestyle(0, 0, 3);
                setcolor(YELLOW);
                rectangle(430, 75+64, 630, 395-64);

                while(1)
                {                    
                    newmouse(&MouseX, &MouseY, &press);
                    if(mouse_press(20, 75+64+64+64+64, 20+370, 75+64+64+64+64+64)==2)
                    {
                        time_count(20, 45);
                    }
                    else
                    {
                        repaint_background();
                        break;
                    }     
                }           
            }
            else if(mouse_press(20+370, 75+64+64+64+64, 20+400, 75+64+64+64+64+64)==1)
            {
                booked(user, 5);
            }
        }
        else if(MouseX>=348&&MouseX<=447&&MouseY>=15&&MouseY<=45)
        {
            MouseS=1;
            if(mouse_press(348, 15, 447, 45)==1)
            {
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(315, 45, 480, 45);
                puthz(348, 15, "�ο���֪", 24, 26, BLACK);

                notice_draw();
                break;
            }
        }
        else if(MouseX>=5&&MouseX<=55&&MouseY>=5&&MouseY<=55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55)==1)
            {
                clrmous(MouseX, MouseY);
                notice_draw();
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }
}

void visitor_information()
{
    notice_draw();
    setlinestyle(0, 0, 3);
    setcolor(RED);
    line(315, 45, 480, 45);
    puthz(348, 15, "�ο���֪", 24, 26, BROWN);
    
    setfillstyle(1, LIGHTGRAY);
    bar(20, 75+15, 620, 380+15);
    setlinestyle(0, 0, 3);
    setcolor(YELLOW);
    rectangle(20, 75+15, 620, 380+15);

    puthz(70, 65, "Ϊ���������˵İ�ȫ������ϸ�Ķ�����԰��֪��", 24, 24, RED);

    puthz(52, 82+15, "Ϊ�����İ�ȫ�������ر�������԰�ڲ�����Ŀ���ʺϸ�Ѫѹ�����ಡ���ߡ�", 16, 17, BLACK);
    puthz(27, 104+15, "��׵�����������ߡ����༲�����и������������棻������Ŀ�Բ����ο͵���", 16, 17, BLACK);
    puthz(27, 126+15, "�ߡ���Χ�����ص�����Ҫ�����ƣ������������֢״�ߣ�������ȷ�ϲ�ѡ����", 16, 17, BLACK);
    puthz(27, 148+15, "���ʺ���Ŀ�������絼�²����������԰���е��κ����Ρ�", 16, 17, BLACK);

    puthz(52, 172+15, "��Ʊһ���۳����Ų��˻���", 16, 17, BLACK);

    puthz(52, 196+15, "��Ʊ��һ��ʹ�ã�һ����Ч����԰�����ٴ���԰�����¹�Ʊ��", 16, 17, BLACK);

    puthz(52+24, 220+15, "���꼰���ϳ����蹺��ȫƱ��԰��", 16, 17, BLACK);
    puthz(27, 242+15, "��У��ѧ��ƾ������Ч���֤��ѧ��֤�ɹ���ѧ��Ʊ��԰��", 16, 17, BLACK);
    puthz(27, 264+15, "���", 16, 17, BLACK);
    puthz(92, 264+15, "�ף���������", 16, 17, BLACK);
    puthz(224, 264+15, "�ף������Ķ�ͯ�ɹ����ͯƱ��԰��", 16, 17, BLACK);
    puthz(27, 286+15, "���", 16, 17, BLACK);
    puthz(92, 286+15, "�ף������Ķ�ͯ��Ʊ��԰��", 16, 17, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(52, 216+15, "18");
    outtextxy(62, 260+15, "1.2");
    outtextxy(194, 260+15, "1.5");
    outtextxy(62, 282+15, "1.2");

    puthz(52, 314+15, "���ݹ��Ұ�ȫ�ͼ����ල���Ź涨�Լ��豸��ȫ����Ҫ���ڲ��������豸", 16, 17, BLACK);
    puthz(27, 336+15, "��ȫ���еĶ���������������Ȼ�ֺ�������£����׵硢��ѩ������������ȣ�", 16, 17, BLACK);
    puthz(27, 358+15, "��԰���豸���رջ򲿷ֹرգ����ݻ�ȡ���򲿷�ȡ������԰�������ȸ�֪��", 16, 17, BLACK);

    settextstyle(1, 0, 1);
    setcolor(RED);
    outtextxy(27, 78+15, "01");
    outtextxy(27, 168+15, "02");
    outtextxy(27, 192+15, "03");
    outtextxy(27, 216+15, "04");
    outtextxy(27, 310+15, "05");

    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=173&&MouseX<=272&&MouseY>=15&&MouseY<=45)
        {
            MouseS=1;
            if(mouse_press(173, 15, 272, 45)==1)
            {
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(315, 45, 480, 45);
                puthz(348, 15, "�ο���֪", 24, 26, BLACK);

                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(315, 45, 480, 45);
                puthz(348, 15, "�ο���֪", 24, 26, BLACK);
                notice_draw();
                break;
            }
        }
        else if(MouseX>=5&&MouseX<=55&&MouseY>=5&&MouseY<=55)
        {
            MouseS=1;
            if(mouse_press(5, 5, 55, 55)==1)
            {
                clrmous(MouseX, MouseY);
                notice_draw();
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }

}

void repaint_background()
{
    setfillstyle(1, WHITE);
    bar(430-1, 75+64-1, 630+1, 395-64+1);
    setcolor(YELLOW);
    circle(640,40,100);
    setfillstyle(1,YELLOW);
    floodfill(620,40,YELLOW);
}

void time_count(int h, int m)
{
    time_t nowtime;
    struct tm *t;
    char *hour, *minute, *second;
    int hour_temp, minute_temp, second_temp;

    time(&nowtime);
    t=localtime(&nowtime);

    if(t->tm_hour>h)
    {
        puthz(435+45, 160+17, "�ݳ�", 48, 50, RED);
        puthz(435+20, 160+64+17, "�ѿ�ʼ", 48, 50, RED);
    }
    else if(t->tm_hour==h)
    {
        if (t->tm_min>m)
        {
            puthz(435+45, 160+17, "�ݳ�", 48, 50, RED);
            puthz(435+20, 160+64+17, "�ѿ�ʼ", 48, 50, RED);
        }
        else
        {
            hour_temp = h-t->tm_hour;
            if(t->tm_sec==0)
            {
                minute_temp = m-t->tm_min;
                second_temp = t->tm_sec;
            }
            else
            {
                minute_temp = m-1-t->tm_min;
                second_temp = 60-t->tm_sec;                                    
            }

            puthz(435, 90+64, "�����ݳ���ʼ����", 24, 24, LIGHTRED);
            puthz(438+110, 90+64+40, "ʱ", 32, 32, LIGHTBLUE);
            puthz(438+110, 90+64+40+40, "��", 32, 32, LIGHTBLUE);
            puthz(438+110, 90+64+40+40+40, "��", 32, 32, LIGHTBLUE);

            setfillstyle(1, LIGHTGREEN);
            bar(438+50, 90+60+40, 438+50+50, 90+60+40+40+40+40);

            setcolor(LIGHTBLUE);
            settextstyle(1, 0, 4);
            itoa(hour_temp, hour, 10);
            itoa(minute_temp, minute, 10);
            itoa(second_temp, second, 10);
            outtextxy(438+50, 90+60+40, hour);
            outtextxy(438+50, 90+60+40+40, minute);
            outtextxy(438+50, 90+60+40+40+40, second);
            delay(30);
        }
    }
    else if(t->tm_hour<h)
    {
        if (t->tm_min>m)
        {
            hour_temp = h-1-t->tm_hour;
            if(t->tm_sec==0)
            {
                minute_temp = 60+m-t->tm_min;
                second_temp = t->tm_sec;
            }
            else
            {
                minute_temp = 60+m-1-t->tm_min;
                second_temp = 60-t->tm_sec;                                    
            }
        }
        else
        {
            hour_temp = h-t->tm_hour;
            if(t->tm_sec==0)
            {
                minute_temp = m-t->tm_min;
                second_temp = t->tm_sec;
            }
            else
            {
                minute_temp = m-1-t->tm_min;
                second_temp = 60-t->tm_sec;                                    
            }
        }
    
        puthz(435, 90+64, "�����ݳ���ʼ����", 24, 24, LIGHTRED);
        puthz(438+110, 90+64+40, "ʱ", 32, 32, LIGHTBLUE);
        puthz(438+110, 90+64+40+40, "��", 32, 32, LIGHTBLUE);
        puthz(438+110, 90+64+40+40+40, "��", 32, 32, LIGHTBLUE);

        setfillstyle(1, LIGHTGREEN);
        bar(438+50, 90+60+40, 438+50+50, 90+60+40+40+40+40);

        setcolor(LIGHTBLUE);
        settextstyle(1, 0, 4);
        itoa(hour_temp, hour, 10);
        itoa(minute_temp, minute, 10);
        itoa(second_temp, second, 10);
        outtextxy(438+50, 90+60+40, hour);
        outtextxy(438+50, 90+60+40+40, minute);
        outtextxy(438+50, 90+60+40+40+40, second);
        delay(30);
    }
}

void booked(USER *user, int program)
{
    time_t nowtime;
    struct tm *t;
    char *hour, *minute, *second;

    time(&nowtime);
    t=localtime(&nowtime);

    switch(program)
    {
        case 1:
        {
            if(t->tm_hour>15)
            {
                booking_failed();
            }
            else if(t->tm_hour==15)
            {
                if (t->tm_min>=30)
                {
                    booking_failed();
                }
                else
                {
                    booking_success(user, program);
                }
            }
            else
            {
                booking_success(user, program);
            }
        } 
            break;
        case 2:
        {
            if(t->tm_hour>16)
            {
                booking_failed();
            }
            else if(t->tm_hour==16)
            {
                if (t->tm_min>=20)
                {
                    booking_failed();
                }
                else
                {
                    booking_success(user, program);
                }
            }
            else
            {
                booking_success(user, program);
            }
        } 
            break;
        case 3:
        {
            if(t->tm_hour>17)
            {
                booking_failed();
            }
            else if(t->tm_hour==17)
            {
                if (t->tm_min>=30)
                {
                    booking_failed();
                }
                else
                {
                    booking_success(user, program);
                }
            }
            else
            {
                booking_success(user, program);
            }
        } 
            break;
        case 4:
        {
            if(t->tm_hour>19)
            {
                booking_failed();
            }
            else if(t->tm_hour==19)
            {
                if (t->tm_min>=30)
                {
                    booking_failed();
                }
                else
                {
                    booking_success(user, program);
                }
            }
            else
            {
                booking_success(user, program);
            }
        } 
            break;
        case 5:
        {
            if(t->tm_hour>20)
            {
                booking_failed();
            }
            else if(t->tm_hour==20)
            {
                if (t->tm_min>=45)
                {
                    booking_failed();
                }
                else
                {
                    booking_success(user, program);
                }
            }
            else
            {
                booking_success(user, program);
            }
        } 
            break;
        default:
            break;
    }
}

void booking_failed()
{
    setfillstyle(1, LIGHTGREEN);
    bar(430, 75+64+45, 630, 395-64-45);
    setlinestyle(0, 0, 3);
    setcolor(YELLOW);
    rectangle(430, 75+64+45, 630, 395-64-45);
    puthz(435+45, 160+17+10, "�ݳ�", 48, 50, RED);
    puthz(435+20, 160+64+17-7, "�ѿ�ʼ", 48, 50, RED);
}

void booking_success(USER *user, int program)
{
	int i,j;
	int len;
	USER *uu;
	FILE *fp;
	fp = fopen("Database\\UserData.dat", "rb+");
	fseek(fp,0,SEEK_END);
	len = ftell(fp)/sizeof(USER);
    if ((uu = (USER *)malloc(sizeof(USER))) == NULL)
	{
		printf("memory allocation runs wrong in notice.c");
		delay(3000);
		exit(1);
	}

	for (i = 0; i < len; i++)
	{
		
		fseek(fp, i * sizeof(USER), SEEK_SET);
		fread(uu, sizeof(USER), 1, fp);
        if(strcmp(uu->username,user->username)==0)
        {
            uu->programs[program-1] = 1;
            fseek(fp, i * sizeof(USER), SEEK_SET);
            fwrite(uu, sizeof(USER), 1, fp);
            for(j=0;j<5;j++)
			{
				user->programs[j]=uu->programs[j];
			}
        }
	}

    setfillstyle(1, LIGHTGREEN);
    bar(430, 75+64+45, 630, 395-64-45);
    setlinestyle(0, 0, 3);
    setcolor(YELLOW);
    rectangle(430, 75+64+45, 630, 395-64-45);
    puthz(435, 75+64+45+28, "ԤԼ�ɹ�", 48, 48, RED);
    free(uu);
    fclose(fp);
}