#include "common.h"
#include "DrawR.h"

void draw_menu() //画主界面
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

    setfillstyle(1,LIGHTCYAN);
    bar(22,75,386,370);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    rectangle(22,75,386,370);

    line(22,75+74,386,75+74);
    line(22,75+74*2,386,75+74*2);
    line(22,75+74*3,386,75+74*3);
    puthz(35,85,"雨天室内路线",48,50,LIGHTRED);
    puthz(35,85+74,"夜场游玩路线",48,50,LIGHTRED);
    puthz(35,85+74*2,"网红打卡路线",48,50,LIGHTRED);
    puthz(35,85+74*3,"亲子休闲路线",48,50,LIGHTRED);

    draw_backmap();
}

void draw_rain() //画雨天室内路线
{
    draw_location(1,"飞跃长江");
    draw_location(2,"蛋糕皇宫");
    draw_location(3,"靴子警局");
    draw_location(4,"皇家转马");
    draw_location(5,"魂断血域");
    draw_location(6,"东湖塔");
}
void draw_night() //画夜场游玩路线
{
    draw_location(1,"太阳神车");
    draw_location(2,"天地双雄");
    draw_location(3,"飓风飞椅");
    draw_location(4,"能量风暴");
    draw_location(5,"完美风暴");
    draw_location(6,"丛林迷旋");
}
void draw_star1() //画网红打卡路线
{
    draw_location(1,"天地双雄");
    draw_location(2,"完美风暴");
    draw_location(3,"打码头");
    draw_location(4,"木翼双龙");
    draw_location(5,"极速飞车");
    draw_location(6,"飞越长江");
}
void draw_family() //画亲子休闲路线
{
    draw_location(1,"海马骑士");
    draw_location(2,"梦幻糖果");
    draw_location(3,"东湖塔");
    draw_location(4,"丛林迷旋");
    draw_location(5,"浪花跳跳");
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
    puthz(240,425,"在地图中显示",24,24,LIGHTRED);
}

void draw_path()
{
    setfillstyle(1,LIGHTCYAN);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    bar(29,405,182,465);
    rectangle(235,405,388,465);
    puthz(29+5,425,"最短路径规划",24,24,LIGHTRED);
}