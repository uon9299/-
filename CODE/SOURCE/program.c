#include "common.h"
#include "program.h"
#include "propose.h"
#include "skipmap.h"

void happy_ocean_1(int *page)
{    
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "��Ծ����", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "������ʿ", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "��Ծ����", 24, 26, RED);
    puthz(270, 132, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140, 1, RED, RED);
    draw_star(355+18, 140, 1, RED, RED);
    draw_star(355+18*2, 140, 1, RED, RED);
    draw_star(355+18*3, 140, 1, RED, RED);
    draw_star(355+18*4, 140, 1, RED, RED);
    puthz(270, 162, "��Ŀ�ص㣺�߿ա�����", 16, 17, BLACK);
    puthz(250-5, 187, "�����׸�", 24, 25, RED);
    settextstyle(1, 0, 3);
    setcolor(RED);
    outtextxy(353-5, 183, "7D");
    puthz(387-5, 187, "��Ļ����ӰԺ", 24, 25, RED);
    puthz(80, 230, "��Խ���޵�һ���ӡ����������ڸ���ҡ���и��ܼ��ٷ������", 16, 17, BLACK);
    puthz(80, 250, "����У��������ﳤ��׳��ɽ�ӣ�������ո�����ư��磡", 16, 17, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(80, 265, "7D");
    puthz(105, 270, "��ĻӰԺ���������侳�����鼯�������Ӿ��������������", 16, 17, BLACK);
    puthz(80, 290, "ζ�����о���������һ��ı�����Ч�����ܳ����Ӿ������", 16, 17, BLACK);


    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=307+30+30 && MouseX<=552-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_ocean_2(page);
                break;
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
                skipmap(page,1);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55, 390, "�����ֺ��󡱴���һվʽ�񻶣��������ӻ����豸���ο�����ӱ���", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "��Ծ����", 24, 30, BLACK);
                puthz(307+30+33, 65, "������ʿ", 24, 30, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void happy_ocean_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "��Ծ����", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "������ʿ", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "������ʿ", 24, 26, RED);
    puthz(270, 132, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140, 1, RED, RED);
    draw_star(355+18, 140, 1, RED, RED);
    draw_star(355+18*2, 140, 1, RED, RED);
    draw_star(355+18*3, 140, 1, RED, RED);
    draw_star(355+18*4, 140, 1, RED, RED);
    puthz(270, 162, "��Ŀ�ص㣺���Ϻ��¡�Բ���˶�", 16, 17, BLACK);
    puthz(250+10, 187, "������΢��ʧ����¥��", 24, 25, RED);
    puthz(80, 230, "�������������������Ͽɰ����������������������ߺ��ͣ�", 16, 17, BLACK);
    puthz(80, 250, "�·�ͺ���һ����󺣣�����Щ��ʧ�غ�ѣ�θС�", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_ocean_1(page);
                break;
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
                skipmap(page,1);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55, 390, "�����ֺ��󡱴���һվʽ�񻶣��������ӻ����豸���ο�����ӱ���", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "��Ծ����", 24, 30, BLACK);
                puthz(307+30+33, 65, "������ʿ", 24, 30, BLACK);
                //bar(555, 290, 635, 380);
                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void dessert_kingdom_1(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "����ʹ�", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "�λ��ǹ�", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "ѥ�Ӿ���", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "����ʹ�", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺", 16, 17, BLACK);
    puthz(270+90+40, 162+15, "��ȫ��", 16, 17, BLACK);
    puthz(270+90+40+55+30, 162+15, "�����", 16, 17, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(270+90, 162+15-4, "360");
    outtextxy(270+90+40+55, 162+15-4, "VR");
    
    outtextxy(80, 230-4, "360");
    puthz(80+36, 230, "��ȫ�������ͳ������Ӿ���Ч����������������磬��", 16, 17, BLACK);
    puthz(80, 250, "����Ϸʵʱ���������ʳ�������Ŀ��Ͼ�ӡ�", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                dessert_kingdom_2(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                dessert_kingdom_3(page);
                break;
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
                skipmap(page,2);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55, 390, "����Ʒ������������", 16, 17, YELLOW);
                settextstyle(1, 0, 2);
                setcolor(YELLOW);
                outtextxy(210, 390-5, "IP");
                puthz(227, 390, "�����ɾ�����Ϊ���⣬ͻ���׺��Ѱ��ķ�Χ��", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "����ʹ�", 24, 26, BLACK);
                puthz(225+20+12, 65, "�λ��ǹ�", 24, 26, BLACK);
                puthz(388+20+12, 65, "ѥ�Ӿ���", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void dessert_kingdom_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "�λ��ǹ�", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "����ʹ�", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "ѥ�Ӿ���", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "�λ��ǹ�", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺���ۼ�ս��շɴ�", 16, 17, BLACK);
        
    puthz(80, 230, "�λð�������ת����Ӫ���������գ��������������������", 16, 17, BLACK);
    puthz(80, 250, "��������ձ�����Ʒ������⡣", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                dessert_kingdom_1(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                dessert_kingdom_3(page);
                break;
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
                skipmap(page,2);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55, 390, "����Ʒ������������", 16, 17, YELLOW);
                settextstyle(1, 0, 2);
                setcolor(YELLOW);
                outtextxy(210, 390-5, "IP");
                puthz(227, 390, "�����ɾ�����Ϊ���⣬ͻ���׺��Ѱ��ķ�Χ��", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "����ʹ�", 24, 26, BLACK);
                puthz(225+20+12, 65, "�λ��ǹ�", 24, 26, BLACK);
                puthz(388+20+12, 65, "ѥ�Ӿ���", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void dessert_kingdom_3(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "ѥ�Ӿ���", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "�λ��ǹ�", 24, 26, BLACK);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "����ʹ�", 24, 26, BLACK);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "ѥ�Ӿ���", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺���Ͷ�ͯ������", 16, 17, BLACK);
    
    puthz(80, 230, "��ѥ�Ӿ�����ս�����������궯���ӻ����ϸ��塢ֱ�£�", 16, 17, BLACK);
    puthz(80, 250, "���Ͷ�ͯ������ʩ�ú����Ǿ�������", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                dessert_kingdom_2(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                dessert_kingdom_1(page);
                break;
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
                skipmap(page,2);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55, 390, "����Ʒ������������", 16, 17, YELLOW);
                settextstyle(1, 0, 2);
                setcolor(YELLOW);
                outtextxy(210, 390-5, "IP");
                puthz(227, 390, "�����ɾ�����Ϊ���⣬ͻ���׺��Ѱ��ķ�Χ��", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "����ʹ�", 24, 26, BLACK);
                puthz(225+20+12, 65, "�λ��ǹ�", 24, 26, BLACK);
                puthz(388+20+12, 65, "ѥ�Ӿ���", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void happy_time_1(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "쫷����", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "�����籩", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "쫷����", 24, 26, RED);
    puthz(270, 132+8, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+8, 1, RED, RED);
    draw_star(355+18, 140+8, 1, RED, RED);
    draw_star(355+18*2, 140+8, 1, RED, RED);
    draw_star(355+18*3, 140+8, 1, RED, RED);
    draw_star(355+18*4, 140+8, 1, RED, RED);
    draw_star(355+18*5, 140+8, 1, RED, RED);
    puthz(270, 162+8, "��Ŀ�ص㣺Ʈ�������衢ʧ�ء�", 16, 17, BLACK);
    puthz(270, 182+8, "���ա��̼�", 16, 17, BLACK);
    
    puthz(80, 230, "쫷����٣�����Ҳ����쫷���ת�����ˣ����Ϸ��θ��������", 16, 17, BLACK);
    puthz(80, 250, "��Ŀ�аɣ�쫷�������������������Ц��ȡ������", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=307+30+30 && MouseX<=552-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_time_2(page);
                break;
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
                skipmap(page,3);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-5, 390, "������ʱ�⡱����Ϸ������껪���ںϣ�Ӫ���������⡢�ɶԷ��顣", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "쫷����", 24, 30, BLACK);
                puthz(307+30+33, 65, "�����籩", 24, 30, BLACK);
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void happy_time_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "쫷����", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "�����籩", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "�����籩", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    draw_star(355+18*5, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺��ת��ʧ�ء����ա��̼�", 16, 17, BLACK);
    
    puthz(80, 230, "���Ϳ��ư�צ��ġ������籩�������ڼ��ٵ���ת����������", 16, 17, BLACK);
    puthz(80, 250, "�������������ŵ��ٶȺ�˫�ص���ת��Ϊ������һ�������ױ�", 16, 17, BLACK);
    puthz(80, 270, "�ļ��䣡", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_time_1(page);
                break;
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
                skipmap(page,3);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-5, 390, "������ʱ�⡱����Ϸ������껪���ںϣ�Ӫ���������⡢�ɶԷ��顣", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "쫷����", 24, 30, BLACK);
                puthz(307+30+33, 65, "�����籩", 24, 30, BLACK);
                
                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void speed_world_1(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "���ٷɳ�", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "̫����", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "���ٷɳ�", 24, 26, RED);
    puthz(270, 132+8, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+8, 1, RED, RED);
    draw_star(355+18, 140+8, 1, RED, RED);
    draw_star(355+18*2, 140+8, 1, RED, RED);
    draw_star(355+18*3, 140+8, 1, RED, RED);
    draw_star(355+18*4, 140+8, 1, RED, RED);
    draw_star(355+18*5, 140+8, 1, RED, RED);
    puthz(270, 162+8, "��Ŀ�ص㣺���١�ս�������ء�", 16, 17, BLACK);
    puthz(270, 182+8, "ʧ�ء����ա��̼�", 16, 17, BLACK);
    puthz(80, 230, "�ɳ����񵼵�һ�㵯���ȥ������˲��ļ��ٶ�������ѵ���", 16, 17, BLACK);
    puthz(80, 250, "������ÿһ�����Ǽ��䡢ÿһ�ε�����ÿһ�¸��嶼��������", 16, 17, BLACK);
    puthz(80, 270, "�������ɳ۵糸����������ٶȵ����м����������", 16, 17, BLACK);


    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=307+30+30 && MouseX<=552-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                speed_world_2(page);
                break;
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
                skipmap(page,4);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55, 390, "���������硱����δ���Ƽ�����ƣ�������Ŀ����ȫ�йٳ����������飡", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "���ٷɳ�", 24, 30, BLACK);
                puthz(307+30+33, 65, "̫����", 24, 30, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void speed_world_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "���ٷɳ�", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "̫����", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "̫����", 24, 26, RED);
    puthz(270, 132+8, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+8, 1, RED, RED);
    draw_star(355+18, 140+8, 1, RED, RED);
    draw_star(355+18*2, 140+8, 1, RED, RED);
    draw_star(355+18*3, 140+8, 1, RED, RED);
    draw_star(355+18*4, 140+8, 1, RED, RED);
    puthz(270, 162+8, "��Ŀ�ص㣺ҡ�ڡ���ת�����ء�", 16, 17, BLACK);
    puthz(270, 182+8, "ʧ�ء����ա��̼�", 16, 17, BLACK);
    puthz(80, 230, "��һ̨���ڴ�һ����Ӵ����������㳬Խʧ��״̬��", 16, 17, BLACK);
    puthz(80, 250, "����״̬�ļ��ޣ�����Բ�̵Ĵ��ҡ�ڣ���ǰ������Ҳ�ߵ�", 16, 17, BLACK);
    puthz(80, 270, "����һ��ģ����", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                speed_world_1(page);
                break;
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
                skipmap(page,4);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55, 390, "���������硱����δ���Ƽ�����ƣ�������Ŀ����ȫ�йٳ����������飡", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "���ٷɳ�", 24, 30, BLACK);
                puthz(307+30+33, 65, "̫����", 24, 30, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void feather_fall_heaven_1(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "��������", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "�˻�����", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "��������", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺��������", 16, 17, BLACK);
    puthz(80, 230, "�ͼ�������Χ������������ת���ϣ������Ÿ��н������", 16, 17, BLACK);
    puthz(80, 250, "�֣���������Բ���˶�����󺣲��ε���������̫�շɵ���", 16, 17, BLACK);
    puthz(80, 270, "����ʱ��ʱ�����仯�����������һ������������������", 16, 17, BLACK);
    puthz(80, 290, "ͬ�����һ�λ��ֵ����¡�", 16, 17, BLACK);


    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=307+30+30 && MouseX<=552-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                feather_fall_heaven_2(page);
                break;
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
                skipmap(page,5);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-20, 390, "���������á�������ˮɼ��ʪ����Դ����̬԰��ǿ��������Ȼ�ĺ�г��ϵ��", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "��������", 24, 30, BLACK);
                puthz(307+30+33, 65, "�˻�����", 24, 30, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void feather_fall_heaven_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33, 65, "��������", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "�˻�����", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "�˻�����", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺��ת���������½�", 16, 17, BLACK);
    puthz(80, 230, "�������֣������ٿ�������ת�����˻�һ������˷����趯��", 16, 17, BLACK);
    puthz(80, 250, "�н�����������½���", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                feather_fall_heaven_1(page);
                break;
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
                skipmap(page,5);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-20, 390, "���������á�������ˮɼ��ʪ����Դ����̬԰��ǿ��������Ȼ�ĺ�г��ϵ��", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "��������", 24, 30, BLACK);
                puthz(307+30+33, 65, "�˻�����", 24, 30, BLACK);
                //bar(555, 290, 635, 380);
                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void fishguard_island_1(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33-5, 65, "Ұ�˹�Ư��", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33+10, 65, "������", 24, 36, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120-20, 170-5, "Ұ�˹�Ư��", 24, 25, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺Ұ�ԡ�Ư��", 16, 17, BLACK);
    puthz(80, 230, "���Ư����ν���Ķ��ǣ���������ʱ�Ľ���ˮ�������·ת", 16, 17, BLACK);
    puthz(80, 250, "ʱ�ڴ������飬����ǰ��ʱ��;�ķ羰�����������������", 16, 17, BLACK);
    puthz(80, 270, "������ζ���á�", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=307+30+30 && MouseX<=552-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(307+30+30, 62, 552-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                fishguard_island_2(page);
                break;
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
                skipmap(page,6);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-25, 390, "����⵺������̬��������Զ���������Ƹߵ㣬��Ϊ������������������������", 16, 16, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33-5, 65, "Ұ�˹�Ư��", 24, 26, BLACK);
                puthz(307+30+33+10, 65, "������", 24, 36, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void fishguard_island_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(LIGHTGRAY);
    line(62+30, 92, 307-30, 92);
    puthz(62+30+33-5, 65, "Ұ�˹�Ư��", 24, 26, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33+10, 65, "������", 24, 36, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "������", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺���ߡ����", 16, 17, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(80, 225, "120");
    puthz(116, 230, "�׵�����߶Ⱦ����˸�������ʤ���Ĳ����ػ���ֱ������", 16, 17, BLACK);
    puthz(80, 250, "������������������������ϵ�����Ҳ�̲�ס����չ��������", 16, 17, BLACK);
    puthz(80, 270, "�����˼�������", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+30+30 && MouseX<=307-30-30 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+30+30, 62, 307-30-30, 92)==1))
            {
                clrmous(MouseX, MouseY);
                fishguard_island_1(page);
                break;
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
                skipmap(page,6);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-25, 390, "����⵺������̬��������Զ���������Ƹߵ㣬��Ϊ������������������������", 16, 16, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33-5, 65, "Ұ�˹�Ư��", 24, 26, BLACK);
                puthz(307+30+33+10, 65, "������", 24, 36, BLACK);
                //bar(555, 290, 635, 380);
                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void hurricane_bay_1(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "�����½�", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "�����籩", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "���Ѫ��", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "�����½�", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    draw_star(355+18*5, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺��ˮ�����衢ʧ�ء�", 16, 17, BLACK);
    puthz(270, 182+15, "���ա��̼�", 16, 17, BLACK);
    
    puthz(80, 230, "�������룬ˮ���ǽ���ʼ��յĺ���֮�ã���ֻһ���", 16, 17, BLACK);
    puthz(80, 250, "�����˾���һ�����׹������׵���Ԩ��ֻ�о�����", 16, 17, BLACK);
    puthz(80, 270, "���½��Ŀ��飬����һ��������ˮ�֣�", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                hurricane_bay_2(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                hurricane_bay_3(page);
                break;
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
                skipmap(page,7);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-15, 390, "��쫷��塱��ˮ����Ŀ���������޺������Ϊ��������ɳ̲������Ԫ�ء�", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "�����½�", 24, 26, BLACK);
                puthz(225+20+12, 65, "�����籩", 24, 26, BLACK);
                puthz(388+20+12, 65, "���Ѫ��", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void hurricane_bay_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "�����籩", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "�����½�", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "���Ѫ��", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "�����籩", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    draw_star(355+18*5, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺Բ�ܷ�ת��ʧ�ء����մ̼�", 16, 17, BLACK);
        
    puthz(80, 230, "���ŷ籩����һ����һ�����˻�ת����������֮�ĵ�������", 16, 17, BLACK);
    puthz(80, 250, "����ңԶ���������кͷ�ת����ս���ң�����Ѿ�ͨ���˴�", 16, 17, BLACK);
    puthz(80, 270, "��Ȼ�Ŀ��飡", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                hurricane_bay_1(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                hurricane_bay_3(page);
                break;
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
                skipmap(page,7);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-15, 390, "��쫷��塱��ˮ����Ŀ���������޺������Ϊ��������ɳ̲������Ԫ�ء�", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "�����½�", 24, 26, BLACK);
                puthz(225+20+12, 65, "�����籩", 24, 26, BLACK);
                puthz(388+20+12, 65, "���Ѫ��", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void hurricane_bay_3(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "���Ѫ��", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "�����籩", 24, 26, BLACK);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "�����½�", 24, 26, BLACK);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "���Ѫ��", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺���졢���", 16, 17, BLACK);
    
    puthz(80, 230, "��ɭ���ֲ������صĿռ���������ǧ���ʬ�������ˡ�˫", 16, 17, BLACK);
    puthz(80, 250, "�Ƕ��Ǻ͸��ֹ�ꡭ�������㺦����񣬶����ھ��������", 16, 17, BLACK);
    puthz(80, 270, "������ս�Ŀ��֣�", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                hurricane_bay_2(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                hurricane_bay_1(page);
                break;
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
                skipmap(page,7);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-15, 390, "��쫷��塱��ˮ����Ŀ���������޺������Ϊ��������ɳ̲������Ԫ�ء�", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "�����½�", 24, 26, BLACK);
                puthz(225+20+12, 65, "�����籩", 24, 26, BLACK);
                puthz(388+20+12, 65, "���Ѫ��", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void happy_river_city_1(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "ľ��˫��", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "����ͷ", 24, 39, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "�������", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "ľ��˫��", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺�ֺ롢�̼�", 16, 17, BLACK);
    
    puthz(80, 230, "�ر��ľ�ʹ���������Ӿ��մ̼������飬�������г�ͬ", 16, 17, BLACK);
    puthz(80, 250, "ʱ���У���ͬ��ֻս��һ��ͬս�����������ߡ����", 16, 17, BLACK);
    puthz(80, 270, "�ٸ��塢����ٴ��У����ڿվ����������ݣ�", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_river_city_2(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_river_city_3(page);
                break;
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
                skipmap(page,8);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-15, 390, "�����ֽ��ǡ��Ծ�������Ϊ��������Ϊˮկ���С�ˮ�����������顣", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "ľ��˫��", 24, 26, BLACK);
                puthz(225+20+12, 65, "����ͷ", 24, 39, BLACK);
                puthz(388+20+12, 65, "�������", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void happy_river_city_2(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "����ͷ", 24, 39, RED);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "ľ��˫��", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "�������", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "����ͷ", 24, 39, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺�龰����", 16, 17, BLACK);
        
    puthz(80, 230, "��ˮ���ߴ�̨�˽��ľ糡�ڣ���ͷ�ߵķ��Ʊ�õĴ������", 16, 17, BLACK);
    puthz(80, 250, "��������ӳ������ĳ����������֣�����Թ����е�������", 16, 17, BLACK);
    puthz(80, 270, "������", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_river_city_1(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=388+15+10 && MouseX<=552-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(388+15+10, 62, 552-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_river_city_3(page);
                break;
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
                skipmap(page,8);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-15, 390, "�����ֽ��ǡ��Ծ�������Ϊ��������Ϊˮկ���С�ˮ�����������顣", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "ľ��˫��", 24, 26, BLACK);
                puthz(225+20+12, 65, "����ͷ", 24, 39, BLACK);
                puthz(388+20+12, 65, "�������", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}

void happy_river_city_3(int *page)
{
    setfillstyle(1, WHITE);
    //bar(555, 290, 635, 380);
    bar(64, 100, 550, 382);
    setlinestyle(0, 0, 3);
    setcolor(BROWN);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "�������", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "����ͷ", 24, 39, BLACK);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "ľ��˫��", 24, 26, BLACK);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "��ͼ�鿴", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "�������", 24, 26, RED);
    puthz(270, 132+15, "����ָ��", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(335+18*3, 140+15, 1, RED, RED);
    draw_star(335+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "��Ŀ�ص㣺Ťת��ʧ�ء����", 16, 17, BLACK);
    puthz(270, 182+15, "���ա��̼�", 16, 17, BLACK);

    puthz(80, 230, "����Ťת�Ļ��ι켣��ͬ������������Ӱ�������ε�����", 16, 17, BLACK);
    puthz(80, 250, "����������һ����һ�����ٶȳ������������յĳ�̺�", 16, 17, BLACK);
    puthz(80, 270, "��ת�и��ܷ�������ľ�����̬��", 16, 17, BLACK);

    /*while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if(MouseX>=225+15+10 && MouseX<=388-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(225+15+10, 62, 388-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_river_city_2(page);
                break;
                save_bk_mou(MouseX, MouseY);
                drawmous(MouseX, MouseY);
            }
        }
        else if(MouseX>=62+15+10 && MouseX<=225-15-10 && MouseY>=62 && MouseY<=92)
        {
            MouseS=1;
            if((mouse_press(62+15+10, 62, 225-15-10, 92)==1))
            {
                clrmous(MouseX, MouseY);
                happy_river_city_1(page);
                break;
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
                skipmap(page,8);//��ת��ͼ����ʾ
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
                draw_rounded_rectangle(30, 387, 590, 410, BROWN, BROWN);
                puthz(55-15, 390, "�����ֽ��ǡ��Ծ�������Ϊ��������Ϊˮկ���С�ˮ�����������顣", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+15, 92, 225-15, 92);
                line(225+15, 92, 388-15, 92);
                line(388+15, 92, 552-15, 92);
                puthz(62+20+12, 65, "ľ��˫��", 24, 26, BLACK);
                puthz(225+20+12, 65, "����ͷ", 24, 39, BLACK);
                puthz(388+20+12, 65, "�������", 24, 26, BLACK);
                //bar(555, 290, 635, 380);

                //draw_back_logo(BLACK, WHITE, BLACK);

                delay(300);
                break;
            }
        }
        else
        {
            MouseS=0;
        }
    }*/
}
