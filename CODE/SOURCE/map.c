#include "common.h"
#include "map.h"
#include "DrawMap.h"


void map(int *page, USER *u) //��ͼ���غ���
{
    
    
    
    clrmous(MouseX,MouseY);

    draw_map();
    draw_back();
    draw_lxtj();


    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);
        if((MouseX>=360 && MouseX<=430) && (MouseY>=10 && MouseY<=40))//���ֽ��ǰ�ť
        {
            MouseS=1;
            if(mouse_press(360,10,430,40)==2)
            {
                MouseS=1;
            }
            else if(mouse_press(360,10,430,40)==1)
            {
                *page=5; //��ת���ֽ��ǽ���
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
                *page =6; //��ת��⵺����
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
                *page =7; //��ת�������ý���
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
                *page =8; //��ת쫷������
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
                *page =9; //��ת�����������
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
                *page=10; //��ת����������
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
                *page=11; //��ת��Ʒ��������
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
                *page=12; //��ת���ֺ������
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
                *page=13; //��ת����ʱ�����
                return;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(10,445,"·���Ƽ�",24,24,YELLOW);
            setcolor(BLACK);
            setlinestyle(0,0,3);
            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }

}

void press_back(int *page) //������ϽǷ��ؼ�
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
        return;     //��ת������
    }
}

void hljc_con(int *page,int flag) //���ֽ��ǿ��ƺ���
{
    int state1,state2,state3;
    draw_hljc();
    draw_back();

    while(1)
    {
        newmouse(&MouseX,&MouseY,&press);
        if((MouseX>=433 && MouseX<=530) && (MouseY>=0 && MouseY<=35)) //���ľ��˫��
        {
            if(mouse_press(433,0,530,35)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����
                puthz(440,12+35,"����ͷ",16,18,BLACK);
                puthz(440,12+35+35,"�������",16,18,BLACK);

                puthz(440,12,"ľ��˫��",16,18,WHITE);
            }
            else if(mouse_press(433,0,530,35)==1)
            {
                draw_intro();
                puthz(X0,Y0,"ľ��˫��",48,40,YELLOW);
                
                settextstyle(2,0,6);
                setcolor(RED);
                
                outtextxy(X12,Y1,"*****");
                
                outtextxy(X12,Y2,"*****");
                
                puthz(X3,Y3,"�ֺ�̼�",16,16,RED);
                puthz(X0,Y4,"�ر��ľ�ʹ���������Ӿ��մ̼�������",16,16,WHITE);
                puthz(165,283,"������ɽ�������һ����ͬս��",16,16,WHITE);
                
                state1 = 1;
            }
        }
        else if((MouseX>=433 && MouseX<=530) && (MouseY>=35 && MouseY<=70)) //�������ͷ
        {
            if(mouse_press(433,35,530,70)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����

                puthz(440,12,"ľ��˫��",16,18,BLACK);
                puthz(440,12+35+35,"�������",16,18,BLACK);
                puthz(440,12+35,"����ͷ",16,18,WHITE);
            }
            else if(mouse_press(433,35,530,70)==1)
            {
                draw_intro();
                puthz(X0,Y0,"����ͷ",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(410,153,"****");
                outtextxy(410,186,"***");
                puthz(271,237,"�龰����",16,16,RED);
                puthz(165,263,"�������ֵ���ĺ�����ͷ���ƹ���",16,16,WHITE);
                state2 = 1;
            }
        }
        else if((MouseX>=433 && MouseX<=530) && (MouseY>=70 && MouseY<=112)) //����������
        {
            if(mouse_press(433,70,530,112)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����
                puthz(440,12,"ľ��˫��",16,18,BLACK);
                puthz(440,12+35,"����ͷ",16,18,BLACK);
                
                puthz(440,12+35+35,"�������",16,18,WHITE);
            }
            else if(mouse_press(433,70,530,112)==1)
            {
                draw_intro();
                puthz(165,149,"�������",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(410,153,"*****");
                outtextxy(410,186,"****");

                puthz(271,237,"��תʧ��",16,16,RED);
                puthz(165,263,"����Ťת�Ļ��ι������һ����һ���ĳ��",16,16,WHITE);

                state3 = 1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(440,12,"ľ��˫��",16,18,BLACK);
            puthz(440,12+35,"����ͷ",16,18,BLACK);
            puthz(440,12+35+35,"�������",16,18,BLACK);
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
        if((MouseX>=199 && MouseX<=300) && (MouseY>=33 && MouseY<=73)) //Ұ�˹�Ư��
        {
            if(mouse_press(199,33,300,73)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����

                puthz(205,45,"Ұ�˹�Ư��",16,18,WHITE);
                puthz(205,45+40,"������",16,18,BLACK);
            }
            else if(mouse_press(199,33,300,73)==1)
            {
                draw_intro();

                puthz(X0,Y0,"Ұ�˹�Ư��",32,30,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"Ұ��Ư��",16,16,RED);
                puthz(X0,Y4,"���Ķ��ǵ�Ư�������Ľ���ˮ������������",16,16,WHITE);

                state1=1;
            }
        }
        else if((MouseX>=199 && MouseX<=300) && (MouseY>=73 && MouseY<=113)) //������
        {
            if(mouse_press(219,73,300,113)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����

                puthz(205,45,"Ұ�˹�Ư��",16,18,BLACK);
                puthz(205,45+40,"������",16,18,WHITE);
            }
            else if(mouse_press(199,73,300,113)==1)
            {
                draw_intro();

                puthz(X0,Y0,"������",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"���߷��",16,16,RED);
                puthz(X0,Y4,"ֱ�������Ķ��������㸩������ʤ��",16,16,WHITE);

                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(205,45,"Ұ�˹�Ư��",16,18,BLACK);
            puthz(205,45+40,"������",16,18,BLACK);
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
        if((MouseX>=27 && MouseX<=105) && (MouseY>=111 && MouseY<=148)) //��������
        {
            MouseS=1;

            if(mouse_press(27,111,105,148)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����

                puthz(33,116,"��������",16,18,WHITE);
                puthz(33,116+37,"�˻�����",16,18,BLACK);
            }
            else if(mouse_press(27,111,105,148)==1)
            {
                draw_intro();

                puthz(X0,Y0,"��������",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"***");

                puthz(X3,Y3,"��������",16,16,RED);
                puthz(X0,Y4,"�ͼ�����������һ���ڴ������ת�������",16,16,WHITE);

                state1=1;
            }
        }
        else if((MouseX>=27 && MouseX<=105) && (MouseY>=111+37 && MouseY<=185)) //�˻�����
        {
            MouseS=1;

            if(mouse_press(27,111+37,105,185)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����

                puthz(33,116,"��������",16,18,BLACK);
                puthz(33,116+37,"�˻�����",16,18,WHITE);
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

                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(33,116,"��������",16,18,BLACK);
            puthz(33,116+37,"�˻�����",16,18,BLACK);
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

        if((MouseX>=505 && MouseX<=590) && (MouseY>=211 && MouseY<=211+32)) //�����½�
        {
            if(mouse_press(505,211,590,211+32)==2)
            {
                MouseS=1;

                setlinestyle(0,0,1);
                setcolor(BLACK);//����

                puthz(511,215,"�����½�",16,18,WHITE);
                puthz(511,215+32,"�����籩",16,18,BLACK);
                puthz(511,215+64,"���Ѫ��",16,18,BLACK);
            }
            else if(mouse_press(505,211,590,211+32)==1)
            {
                draw_intro();

                puthz(X0,Y0,"�����½�",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"ʧ�ؾ���",16,16,RED);
                puthz(X0,Y4,"�ھ���������ڴ�ֻ�ϸ��ܼ���",16,16,WHITE);

                state1=1;
            }
        }
        else if((MouseX>=505 && MouseX<=590) && (MouseY>=244 && MouseY<=244+32)) //�����籩
        {
            if(mouse_press(505,244,590,244+32)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(511,215,"�����½�",16,18,BLACK);
                puthz(511,215+32,"�����籩",16,18,WHITE);
                puthz(511,215+64,"���Ѫ��",16,18,BLACK);
            }
            else if(mouse_press(505,244,590,244+32)==1)
            {
                draw_intro();

                puthz(X0,Y0,"�����籩",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"��շ�תʧ��",16,16,RED);
                puthz(X0,Y4,"�����кͷ�ת����ս�������ܴ̼�",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX>=505 && MouseX<=590) && (MouseY>=277 && MouseY<=277+32)) //���Ѫ��
        {
            if(mouse_press(505,277,590,277+32)==2)
            {
                MouseS=1;
                setlinestyle(0,0,1);  
                setcolor(BLACK);

                puthz(511,215,"�����½�",16,18,BLACK);
                puthz(511,215+32,"�����籩",16,18,BLACK);
                puthz(511,215+64,"���Ѫ��",16,18,WHITE);
            }
            else if(mouse_press(505,277,590,277+32)==1)
            {
                draw_intro();

                puthz(X0,Y0,"���Ѫ��",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"***");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"���쾪�",16,16,RED);
                puthz(X0,Y4,"����ɭ�ֲ������صĿռ��о�����а�",16,16,WHITE);
                state3=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(511,215,"�����½�",16,18,BLACK);
            puthz(511,215+32,"�����籩",16,18,BLACK);
            puthz(511,215+64,"���Ѫ��",16,18,BLACK);
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

                puthz(189,335,"���ٷɳ�",16,18,WHITE);
                puthz(189,335+45,"̫����",16,18,BLACK);
            }
            else if(mouse_press(183,327,267,372)==1)
            {
                draw_intro();

                puthz(X0,Y0,"���ٷɳ�",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"****");
                outtextxy(X12,Y2,"******");

                puthz(X3,Y3,"���پ���",16,16,RED);
                puthz(X0,Y4,"�Ե������ٶ���������ʢ���Ĺ�ɽ��",16,16,WHITE);

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

                puthz(189,335,"���ٷɳ�",16,18,BLACK);
                puthz(189,335+45,"̫����",16,18,WHITE);
            }
            else if(mouse_press(183,372,267,417)==1)
            {
                draw_intro();

                puthz(X0,Y0,"̫����",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"*****");

                puthz(X3,Y3,"ҡ����ת",16,16,RED);
                puthz(X0,Y4,"���ڴ�һ����Խ�ٶ�������̼���ʧ��",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(189,335,"���ٷɳ�",16,18,BLACK);
            puthz(189,335+45,"̫����",16,18,BLACK);
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

                puthz(356,334,"���˫��",16,18,WHITE);
                puthz(356,334+40,"�ʼ�ת��",16,18,BLACK);
            }
            else if(mouse_press(350,320,425,360)==1)
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

                puthz(356,334,"���˫��",16,18,BLACK);
                puthz(356,334+40,"�ʼ�ת��",16,18,WHITE);
            }
            else if(mouse_press(350,360,425,402)==1)
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
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(356,334,"���˫��",16,18,BLACK);
            puthz(356,334+40,"�ʼ�ת��",16,18,BLACK);
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
                puthz(500,333,"����ʹ�",16,18,WHITE);
                puthz(500,333+44,"�λ��ǹ�",16,18,BLACK);
                puthz(500,333+88,"ѥ�Ӿ���",16,18,BLACK);
            }
            else if(mouse_press(496,324,595,371)==1)
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
                state1=1;
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 371 && MouseY <= 415))
        {
            MouseS=1;

            if(mouse_press(496,371,595,415)==2)
            {
                MouseS = 1;
                puthz(500,333,"����ʹ�",16,18,BLACK);
                puthz(500,333+44,"�λ��ǹ�",16,18,WHITE);
                puthz(500,333+88,"ѥ�Ӿ���",16,18,BLACK);
            }
            else if(mouse_press(496,371,595,415)==1)
            {
                MouseS=1;

                draw_intro();

                puthz(X0,Y0,"�λ��ǹ�",48,40,YELLOW);

                settextstyle(2,0,6);
                setcolor(RED);

                outtextxy(X12,Y1,"*****");
                outtextxy(X12,Y2,"****");

                puthz(X3,Y3,"���ۼ�ս��շɴ�",16,16,RED);
                puthz(X0,Y4,"����Ʒ�ɴ���������ɵ�������",16,16,WHITE);
                state2=1;
            }
        }
        else if((MouseX >= 496 && MouseX <= 595) && (MouseY >= 415 && MouseY <= 456))
        {
            MouseS=1;

            if(mouse_press(496,415,595,456)==2)
            {
                MouseS = 1;
                puthz(500,333,"����ʹ�",16,18,BLACK);
                puthz(500,333+44,"�λ��ǹ�",16,18,BLACK);
                puthz(500,333+88,"ѥ�Ӿ���",16,18,WHITE);
            }
            else if(mouse_press(496,415,595,456)==1)
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
                state3=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(500,333,"����ʹ�",16,18,BLACK);
            puthz(500,333+44,"�λ��ǹ�",16,18,BLACK);
            puthz(500,333+88,"ѥ�Ӿ���",16,18,BLACK);
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
                puthz(278,400,"��Ծ����",16,18,WHITE);
                puthz(278,400+50,"������ʿ",16,18,BLACK);
            }
            else if(mouse_press(275,380,347,430)==1)
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
                state1=1;
            }
        }
        else if((MouseX>=275 && MouseX<=347) && (MouseY>=430 && MouseY<=480))
        {
            MouseS=1;
            if(mouse_press(275,430,347,480)==2)
            {
                MouseS=1;
                puthz(278,400,"��Ծ����",16,18,BLACK);
                puthz(278,400+50,"������ʿ",16,18,WHITE);
            }
            else if(mouse_press(275,430,347,480)==1)
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
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(278,400,"��Ծ����",16,18,BLACK);
            puthz(278,400+50,"������ʿ",16,18,BLACK);
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
                puthz(513+5,265,"쫷����",16,18,WHITE);
                puthz(518,265+28,"�����籩",16,18,BLACK);
            }
            else if(mouse_press(513,260,592,288)==1)
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
                state1=1;
            }
        }
        else if((MouseX >= 513 && MouseX <= 592) && (MouseY >= 288 && MouseY <= 316))
        {
            if(mouse_press(513,288,592,316)==2)
            {
                MouseS=1;
                puthz(513+5,265,"쫷����",16,18,BLACK);
                puthz(518,265+28,"�����籩",16,18,WHITE);
            }
            else if(mouse_press(513,288,592,316)==1)
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
                state2=1;
            }
        }
        else if((MouseX>=0 && MouseX<=80) && (MouseY>=0 && MouseY<=64)) //���ذ�ť
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
                puthz(10,445,"·���Ƽ�",24,24,WHITE);
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

            puthz(513+5,265,"쫷����",16,18,BLACK);
            puthz(518,265+28,"�����籩",16,18,BLACK);

            setcolor(BLACK);
            setlinestyle(0,0,3);

            line(14,29,64,29);
            line(31,12,14,29);
            line(31,44,14,29);
        }
    }
    
    
}