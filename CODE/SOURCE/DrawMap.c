#include "common.h"
#include "DrawMap.h"


void draw_map() //��������ͼ
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,WHITE);
    bar(0,0,640,480);//����
    bmp_convert("SOURCE\\map.bmp","OUTPUT\\MAP.dbm");
    show_dbm(0,1,"OUTPUT\\MAP.dbm",0); //��ͼ��ͼ
}

void draw_back() //�����ϽǷ��ؼ�
{  
    setlinestyle(0,0,3);
    setcolor(BLACK);//����

    setfillstyle(1,CYAN);
    rectangle(0,0,81,65);
    bar(0,0,80,64);
    setlinestyle(0,0,3);
    line(14,29,64,29);
    line(31,12,14,29);
    line(31,44,14,29);
}

void draw_hljc()  //�����ֽ�����Ŀ
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(433,0,530,112);
    rectangle(433,0,530,112);
    line(433,35,530,35);
    line(433,35+35,530,35+35);
    puthz(440,12,"ľ��˫��",16,18,BLACK);
    puthz(440,12+35,"����ͷ",16,18,BLACK);
    puthz(440,12+35+35,"�������",16,18,BLACK);
}

void draw_ygd()
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(199,33,300,113);
    rectangle(199,33,300,113);
    line(199,33+40,300,33+40);
    puthz(205,45,"Ұ�˹�Ư��",16,18,BLACK);
    puthz(205,45+40,"������",16,18,BLACK);
}

void draw_yltt() //����������
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(27,111,105,185);
    rectangle(27,111,105,185);
    line(27,111+37,105,111+37);
    puthz(33,116,"��������",16,18,BLACK);
    puthz(33,116+37,"�˻�����",16,18,BLACK);
}

void draw_mxdd()
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(350,320,425,402);
    rectangle(350,320,425,402);
    line(350,320+40,425,320+40);

    puthz(356,334,"���˫��",16,18,BLACK);
    puthz(356,334+40,"�ʼ�ת��",16,18,BLACK);
}

void draw_tpwg()  //����Ʒ����
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(496,324,595,456);
    rectangle(496,324,595,456);
    line(496,324+44,595,324+44);
    line(496,324+88,595,324+88);

    puthz(500,333,"����ʹ�",16,18,BLACK);
    puthz(500,333+44,"�λ��ǹ�",16,18,BLACK);
    puthz(500,333+88,"ѥ�Ӿ���",16,18,BLACK);
}

void draw_hlhy() //�����ֺ���
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(275,380,347,480);
    rectangle(275,380,347,480);
    line(275,430,347,430);

    puthz(278,400,"��Ծ����",16,18,BLACK);
    puthz(278,400+50,"������ʿ",16,18,BLACK);
}

void draw_jssj()
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(183,327,267,416);
    rectangle(183,327,267,416);
    line(183,327+45,267,327+45);

    puthz(189,335,"���ٷɳ�",16,18,BLACK);
    puthz(189,335+45,"̫����",16,18,BLACK);
}

void draw_jfw()
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(505,211,590,306);
    rectangle(505,211,590,306);
    line(505,211+32,590,211+32);
    line(505,211+64,590,211+64);
    puthz(511,215,"�����½�",16,18,BLACK);
    puthz(511,215+32,"�����籩",16,18,BLACK);
    puthz(511,215+64,"���Ѫ��",16,18,BLACK);
}

void draw_intro()
{
    setlinestyle(0,0,1);
    setcolor(BLACK);

    setfillstyle(SOLID_FILL,CYAN);
    bar(135,112,500,325);
    rectangle(135,112,500,325);
    rectangle(153,133,490,302);

    puthz(329,153,"����ָ��",16,16,YELLOW);
    puthz(329,186,"�̼�ָ��",16,16,YELLOW);
    puthz(165,236,"��Ŀ�ص�",16,16,YELLOW);
}

void draw_hlsg()
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,YELLOW);
    bar(513,260,592,316);
    rectangle(513,260,592,316);
    line(513,260+28,592,260+28);
    puthz(518,265,"쫷����",16,18,BLACK);
    puthz(518,265+28,"�����籩",16,18,BLACK);
}

void draw_lxtj()  //��·���Ƽ���ť
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//����

    setfillstyle(1,CYAN);
    bar(0,426,112,480);
    rectangle(0,426,112,480);
    puthz(10,445,"·���Ƽ�",24,24,YELLOW);
}