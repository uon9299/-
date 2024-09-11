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
                setcolor(BLACK);//����
                puthz(270,410,"��Ծ����",16,18,WHITE);
            }
            else if(mouse_press(265,405,350,435)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"��Ծ����",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"�����׸���ά��Ļ����ӰԺ",16,16,RED);
                puthz(X0,Y4,"���������侳�ļ��������Ծ���޵�һ����",16,16,WHITE);
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 324 && MouseY <= 324+38))
        {
            MouseS=1;
            if(mouse_press(496,324,595,324+38)==2)
            {
                MouseS=1;
                puthz(500,333,"����ʹ�",16,18,WHITE);
                puthz(500,333+44,"ѥ�Ӿ���",16,18,BLACK);
            }
            else if(mouse_press(496,324,595,324+38)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"����ʹ�",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"**");

                puthz(X3,Y3,"ȫ��������ʵ",16,16,RED);
                puthz(X0,Y4,"������ȫ����������������Ч",16,16,WHITE);
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 324+38 && MouseY <= 324+75))
        {
            MouseS=1;
            if(mouse_press(496,324+38,595,324+75)==2)
            {
                MouseS=1;
                puthz(500,333,"����ʹ�",16,18,BLACK);
                puthz(500,333+44,"ѥ�Ӿ���",16,18,WHITE);
            }
            else if(mouse_press(496,324+38,595,324+75)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"ѥ�Ӿ���",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"������԰",16,16,RED);
                puthz(X0,Y4,"��ѥ�Ӿ�����ս���ʺ϶�ͯ����������",16,16,WHITE);
            }
        }
        else if((MouseX >= 184 && MouseX <= 276) && (MouseY >= 325 && MouseY <= 354))
        {
            MouseS=1;
            if(mouse_press(184,325,276,354)==2)
            {
                MouseS=1;
                puthz(189,330,"�ʼ�ת��",16,18,WHITE);
            }
            else if(mouse_press(184,325,276,354)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"�ʼ�ת��",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"**");

                puthz(X3,Y3,"�λ�Ψ��",16,16,RED);
                puthz(X0,Y4,"��ͯ�����ľ��������������",16,16,WHITE);
            }
        }
        else if((MouseX >= 530 && MouseX <= 620) && (MouseY >= 207 && MouseY <= 240))
        {
            MouseS=1;
            if(mouse_press(530,207,620,240)==2)
            {
                MouseS=1;
                puthz(535,212,"���Ѫ��",16,18,WHITE);
            }
            else if(mouse_press(530,207,620,240)==1)
            {
                draw_intro();

                puthz(X0,Y0,"���Ѫ��",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"***");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"���쾪�",16,16,RED);
                puthz(X0,Y4,"����ɭ�ֲ������صĿռ��о�����а�",16,16,WHITE);
            }
        }
        else if((MouseX >= 228 && MouseX <= 301) && (MouseY >= 85 && MouseY <= 111))
        {
            MouseS=1;
            if(mouse_press(228,85,301,111)==2)
            {
                MouseS=1;
                puthz(233,90,"������",16,18,WHITE);
            }
            else if(mouse_press(228,85,301,111)==1)
            {
                draw_intro();

                puthz(X0,Y0,"������",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"���߷��",16,16,RED);
                puthz(X0,Y4,"ֱ�������Ķ��������㸩������ʤ��",16,16,WHITE);
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
            puthz(270,410,"��Ծ����",16,18,BLACK);
            puthz(500,333,"����ʹ�",16,18,BLACK);
            puthz(500,333+44,"ѥ�Ӿ���",16,18,BLACK);
            puthz(189,330,"�ʼ�ת��",16,18,BLACK);
            puthz(535,212,"���Ѫ��",16,18,BLACK);
            puthz(233,90,"������",16,18,BLACK);
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
                puthz(30,340,"̫����",16,18,WHITE);
            }
            else if(mouse_press(25,335,113,368)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"̫����",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"*****");

                puthz(X3,Y3,"ҡ����ת",16,16,RED);
                puthz(X0,Y4,"���ڴ�һ����Խ�ٶ�������̼���ʧ��",16,16,WHITE);
            }
        }
        else if((MouseX >= 277 && MouseX <= 349) && (MouseY >= 363 && MouseY <= 393))
        {
            if(mouse_press(277,363,349,393)==2)
            {
                MouseS=1;
                puthz(282,368,"���˫��",16,18,WHITE);
            }
            else if(mouse_press(277,363,349,393)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"���˫��",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"*****");

                puthz(X3,Y3,"�����轵",16,16,RED);
                puthz(X0,Y4,"������صļ��ٴ������ܴ̼���",16,16,WHITE);
            }
        }
        else if((MouseX >= 513 && MouseX <= 592) && (MouseY >= 260 && MouseY <= 260+28))
        {
            if(mouse_press(513,260,592,260+28)==2)
            {
                MouseS=1;
                puthz(518,265,"쫷����",16,18,WHITE);
                puthz(518,265+28,"�����籩",16,18,BLACK);
            }
            else if(mouse_press(513,260,592,260+28)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"쫷����",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"����Ʈ����ת",16,16,RED);
                puthz(X0,Y4,"���Ϸ�����������쫷�Ŀ�а�",16,16,WHITE);
            }
        }
        else if((MouseX >= 513 && MouseX <= 592) && (MouseY >= 260+28 && MouseY <= 316))
        {
            if(mouse_press(513,260+28,592,316)==2)
            {
                MouseS=1;
                puthz(518,265,"쫷����",16,18,BLACK);
                puthz(518,265+28,"�����籩",16,18,WHITE);
            }
            else if(mouse_press(513,260+28,592,316)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"�����籩",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"ȫ������ת",16,16,RED);
                puthz(X0,Y4,"�ڰ�צ�����͵�ת���ϸ��������ķ籩��",16,16,WHITE);
            }
        }
        else if((MouseX >= 530 && MouseX <= 620) && (MouseY >= 207 && MouseY <= 240))
        {
            if(mouse_press(530,207,620,240)==2)
            {
                MouseS=1;
                puthz(535,212,"�����籩",16,18,WHITE);
            }
            else if(mouse_press(530,207,620,240)==1)
            {
                draw_intro();

                puthz(X0,Y0,"�����籩",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"��շ�תʧ��",16,16,RED);
                puthz(X0,Y4,"�����кͷ�ת����ս�������ܴ̼�",16,16,WHITE);
            }
        }
        else if((MouseX >= 13 && MouseX <= 102) && (MouseY >= 138 && MouseY <= 170))
        {
            if(mouse_press(13,138,102,170)==2)
            {
                MouseS=1;
                puthz(18,143,"��������",16,18,WHITE);
            }
            else if(mouse_press(13,138,102,170)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"��������",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"��������",16,16,RED);
                puthz(X0,Y4,"�ͼ�����������һ���ڴ������ת�������",16,16,WHITE);
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
            puthz(30,340,"̫����",16,18,BLACK);
            puthz(282,368,"���˫��",16,18,BLACK);
            puthz(518,265,"쫷����",16,18,BLACK);
            puthz(518,265+28,"�����籩",16,18,BLACK);
            puthz(535,212,"�����籩",16,18,BLACK);
            puthz(18,143,"��������",16,18,BLACK);
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
                puthz(282,368,"���˫��",16,18,WHITE);
            }
            else if(mouse_press(277,363,349,393)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"���˫��",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"*****");

                puthz(X3,Y3,"�����轵",16,16,RED);
                puthz(X0,Y4,"������صļ��ٴ������ܴ̼���",16,16,WHITE);
            }
        }
        else if((MouseX >= 530 && MouseX <= 620) && (MouseY >= 207 && MouseY <= 240))
        {
            if(mouse_press(530,207,620,240)==2)
            {
                MouseS=1;
                puthz(535,212,"�����籩",16,18,WHITE);
            }
            else if(mouse_press(530,207,620,240)==1)
            {
                draw_intro();

                puthz(X0,Y0,"�����籩",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"��շ�תʧ��",16,16,RED);
                puthz(X0,Y4,"�����кͷ�ת����ս�������ܴ̼�",16,16,WHITE);
            }
        }
        else if((MouseX >= 435 && MouseX <= 525) && (MouseY >= 9 && MouseY <= 40))
        {
            if(mouse_press(435,9,525,40)==2)
            {
                MouseS=1;
                puthz(440,14,"����ͷ",16,18,WHITE);
            }
            else if(mouse_press(435,9,525,40)==1)
            {
                MouseS=1;

                draw_intro();
                puthz(X0,Y0,"����ͷ",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(410,153,"****");
                outtextxy(410,186,"***");
                puthz(271,237,"�龰����",16,16,RED);
                puthz(165,263,"�������ֵ���ĺ�����ͷ���ƹ���",16,16,WHITE);
            }
        }
        else if((MouseX >= 285 && MouseX <= 360) && (MouseY >= 9 && MouseY <= 40))
        {
            if(mouse_press(285,9,360,40)==2)
            {
                MouseS=1;
                puthz(290,14,"ľ��˫��",16,18,WHITE);
            }
            else if(mouse_press(285,9,360,40)==1)
            {
                MouseS=1;

                draw_intro();
                puthz(X0,Y0,"ľ��˫��",48,40,YELLOW);
                
                settextstyle(2,0,6);
                setcolor(RED);
                
                outtextxy(X12,Y1,"*****");
                
                outtextxy(X12,Y2,"*****");
                
                puthz(X3,Y3,"�ֺ�̼�",16,16,RED);
                puthz(X0,Y4,"�ر��ľ�ʹ���������Ӿ��մ̼�������",16,16,WHITE);
                puthz(165,283,"������ɽ�������һ����ͬս��",16,16,WHITE);
            }
        }
        else if((MouseX >= 25 && MouseX <= 113) && (MouseY >= 335 && MouseY <= 368))
        {
            if(mouse_press(25,335,113,368)==2)
            {
                MouseS=1;
                puthz(30,340,"���ٷɳ�",16,18,WHITE);
            }
            else if(mouse_press(25,335,113,368)==1)
            {
                MouseS=1;
                draw_intro();

                puthz(X0,Y0,"���ٷɳ�",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"���پ���",16,16,RED);
                puthz(X0,Y4,"�Ե������ٶ���������ʢ���Ĺ�ɽ��",16,16,WHITE);
            }
        }
        else if((MouseX >= 420 && MouseX <= 495) && (MouseY >= 409 && MouseY <= 440))
        {
            if(mouse_press(420,409,495,440)==2)
            {
                MouseS=1;
                puthz(425,414,"��Ծ����",16,18,WHITE);
            }
            else if(mouse_press(420,409,495,440)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"��Ծ����",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"�����׸���ά��Ļ����ӰԺ",16,16,RED);
                puthz(X0,Y4,"���������侳�ļ��������Ծ���޵�һ����",16,16,WHITE);
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
            puthz(282,368,"���˫��",16,18,BLACK);
            puthz(535,212,"�����籩",16,18,BLACK);
            puthz(440,14,"����ͷ",16,18,BLACK);
            puthz(290,14,"ľ��˫��",16,18,BLACK);
            puthz(30,340,"���ٷɳ�",16,18,BLACK);
            puthz(425,414,"��Ծ����",16,18,BLACK);
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
                puthz(270,410,"������ʿ",16,18,WHITE);
            }
            else if(mouse_press(265,405,350,435)==1)
            {
                MouseS=1;
                draw_intro();

                puthz(X0,Y0,"������ʿ",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"******");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"����������ɰ��ĺ���",16,16,RED);
                puthz(X0,Y4,"������΢��ʧ����¥��",16,16,WHITE);
            }
        }
        else if((MouseX >= 495 && MouseX <= 586) && (MouseY >= 352 && MouseY <= 385))
        {
            if(mouse_press(495,352,586,385)==2)
            {
                MouseS=1;
                puthz(500,357,"�λ��ǹ�",16,18,WHITE);
            }
            else if(mouse_press(495,352,586,385)==1)
            {
                draw_intro();

                puthz(X0,Y0,"�λ��ǹ�",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"���ۼ�ս��շɴ�",16,16,RED);
                puthz(X0,Y4,"����Ʒ�ɴ���������ɵ�������",16,16,WHITE);
            }
        }
        else if((MouseX >= 228 && MouseX <= 301) && (MouseY >= 85 && MouseY <= 111))
        {
            MouseS=1;
            if(mouse_press(228,85,301,111)==2)
            {
                MouseS=1;
                puthz(233,90,"������",16,18,WHITE);
            }
            else if(mouse_press(228,85,301,111)==1)
            {
                draw_intro();

                puthz(X0,Y0,"������",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"���߷��",16,16,RED);
                puthz(X0,Y4,"ֱ�������Ķ��������㸩������ʤ��",16,16,WHITE);
            }
        }
        else if((MouseX >= 27 && MouseX <= 105) && (MouseY >= 111 && MouseY <= 111+37))
        {
            MouseS=1;
            if(mouse_press(27,111,105,111+37)==2)
            {
                MouseS=1;
                puthz(33,116,"��������",16,18,WHITE);
                puthz(33,116+37,"�˻�����",16,18,BLACK);
            }
            else if(mouse_press(27,111,105,111+37)==1)
            {
               draw_intro();

                puthz(X0,Y0,"��������",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"��������",16,16,RED);
                puthz(X0,Y4,"�ͼ�����������һ���ڴ������ת�������",16,16,WHITE);
            }
        }
        else if((MouseX >= 27 && MouseX <= 105) && (MouseY >= 111+37 && MouseY <= 185))
        {
            MouseS=1;
            if(mouse_press(27,111+37,105,185)==2)
            {
                MouseS=1;
                puthz(33,116+37,"�˻�����",16,18,WHITE);
                puthz(33,116,"��������",16,18,BLACK);
            }
            else if(mouse_press(27,111+37,105,185)==1)
            {
                draw_intro();

                puthz(X0,Y0,"�˻�����",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"��ת����",16,16,RED);
                puthz(X0,Y4,"�������������˻�һ���������Ͽ����趯",16,16,WHITE);
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
            puthz(270,410,"������ʿ",16,18,BLACK);
            puthz(500,357,"�λ��ǹ�",16,18,BLACK);
            puthz(233,90,"������",16,18,BLACK);
            puthz(33,116,"��������",16,18,BLACK);
            puthz(33,116+37,"�˻�����",16,18,BLACK);
        }
    }
}