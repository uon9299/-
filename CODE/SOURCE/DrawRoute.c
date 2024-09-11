#include "common.h"
#include "DrawR.h"

void draw_menu() //��������
{
    setlinestyle(0, 0 ,1);
    setcolor(BLACK);

    setfillstyle(1,WHITE);

    draw_background();
    draw_back_logo(BLACK,WHITE,BLACK);

    setlinestyle(0,0,3);
    setcolor(BROWN);
    line(141,44,482,44);
    puthz(245,15,"·���Ƽ�",24,40,BROWN);

    setfillstyle(1,LIGHTCYAN);
    bar(22,75,386,370);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    rectangle(22,75,386,370);

    line(22,75+74,386,75+74);
    line(22,75+74*2,386,75+74*2);
    line(22,75+74*3,386,75+74*3);
    puthz(35,85,"��������·��",48,50,LIGHTRED);
    puthz(35,85+74,"ҹ������·��",48,50,LIGHTRED);
    puthz(35,85+74*2,"�����·��",48,50,LIGHTRED);
    puthz(35,85+74*3,"��������·��",48,50,LIGHTRED);

    draw_backmap();
}

void draw_rain() //����������·��
{
    draw_location(1,"��Ծ����");
    draw_location(2,"����ʹ�");
    draw_location(3,"ѥ�Ӿ���");
    draw_location(4,"�ʼ�ת��");
    draw_location(5,"���Ѫ��");
    draw_location(6,"������");
}
void draw_night() //��ҹ������·��
{
    draw_location(1,"̫����");
    draw_location(2,"���˫��");
    draw_location(3,"쫷����");
    draw_location(4,"�����籩");
    draw_location(5,"�����籩");
    draw_location(6,"��������");
}
void draw_star1() //�������·��
{
    draw_location(1,"���˫��");
    draw_location(2,"�����籩");
    draw_location(3,"����ͷ");
    draw_location(4,"ľ��˫��");
    draw_location(5,"���ٷɳ�");
    draw_location(6,"��Խ����");
}
void draw_family() //����������·��
{
    draw_location(1,"������ʿ");
    draw_location(2,"�λ��ǹ�");
    draw_location(3,"������");
    draw_location(4,"��������");
    draw_location(5,"�˻�����");
}
void draw_location(int n,char name[])
{
    char str[10];
    draw_navigation(420,95+(n-1)*65,10,LIGHTCYAN);
    settextstyle(1,0,2);
    setcolor(RED);
    itoa(n,str,10);
    outtextxy(415,120+(n-1)*65,str);
    puthz(445,93+(n-1)*65,name,24,26,RED);
}
void draw_backmap()
{
    setfillstyle(1,LIGHTCYAN);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    bar(235,405,388,465);
    rectangle(235,405,388,465);
    puthz(240,425,"�ڵ�ͼ����ʾ",24,24,LIGHTRED);
}

void draw_path()
{
    setfillstyle(1,LIGHTCYAN);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    bar(29,405,182,465);
    rectangle(235,405,388,465);
    puthz(29+5,425,"���·���滮",24,24,LIGHTRED);
}