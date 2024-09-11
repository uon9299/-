#include "common.h"
#include "Drawpath.h"
#include "DrawMap.h"

void draw_rain_route()
{
    draw_map();
    draw_back();
    setfillstyle(1,YELLOW);
    setlinestyle(0,0,1);
    setcolor(BLACK);//线型
    bar(265,405,350,435);
    rectangle(265,405,350,435);
    puthz(270,410,"飞跃长江",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTCYAN);
    line(418,409,455,383);
    line(455,383,437,381);
    line(455,383,452,403);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(496,324,595,324+75);
    rectangle(496,324,595,324+75);
    line(496,324+38,595,324+38);
    puthz(500,333,"蛋糕皇宫",16,18,BLACK);
    puthz(500,333+44,"靴子警局",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    line(424,357,349,341);
    line(349,341,358,335);
    line(349,341,354,352);
    
    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(184,325,276,354);
    rectangle(184,325,276,354);
    puthz(189,330,"皇家转马",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTGREEN);
    line(347,325,511,202);
    line(511,202,490,200);
    line(511,202,511,223);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(530,207,620,240);
    rectangle(530,207,620,240);
    puthz(535,212,"魂断血域",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTCYAN);
    line(511,171,370,123);
    line(370,123,376,142);
    line(370,123,388,111);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(228,85,301,111);
    rectangle(228,85,301,111);
    puthz(233,90,"东湖塔",16,18,BLACK);
}

void draw_night_route()
{
    draw_map();
    draw_back();
    setfillstyle(1,YELLOW);
    setlinestyle(0,0,1);
    setcolor(BLACK);//线型
    bar(25,335,113,368);
    rectangle(25,335,113,368);
    puthz(30,340,"太阳神车",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    line(183,351,278,339);
    line(278,339,268,333);
    line(278,339,270,349);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(277,363,349,393);
    rectangle(277,363,349,393);
    puthz(282,368,"天地双雄",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTGREEN);
    line(349,331,443,299);
    line(443,299,422,294);
    line(443,299,433,317);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(513,260,592,316);
    rectangle(513,260,592,316);
    line(513,260+28,592,260+28);
    puthz(518,265,"飓风飞椅",16,18,BLACK);
    puthz(518,265+28,"能量风暴",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTRED);
    line(475,283,514,201);
    line(514,201,498,207);
    line(514,201,512,214);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(530,207,620,240);
    rectangle(530,207,620,240);
    puthz(535,212,"完美风暴",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTCYAN);
    line(511,174,172,153);
    line(172,153,199,139);
    line(172,153,188,170);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(13,138,102,170);
    rectangle(13,138,102,170);
    puthz(18,143,"丛林迷旋",16,18,BLACK);
}

void draw_star_route()
{
    draw_map();
    draw_back();
    setfillstyle(1,YELLOW);
    setlinestyle(0,0,1);
    setcolor(BLACK);//线型
    bar(277,363,349,393);
    rectangle(277,363,349,393);
    puthz(282,368,"天地双雄",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTGREEN);
    line(349,333,514,201);
    line(514,201,498,207);
    line(514,201,518,216);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(530,207,620,240);
    rectangle(530,207,620,240);
    puthz(535,212,"完美风暴",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTRED);
    line(513,169,422,42);
    line(422,42,443,46);
    line(422,42,421,60);
    
    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(435,9,525,40);
    rectangle(435,9,525,40);
    puthz(440,14,"打码头",16,18,BLACK);
    bar(285,9,360,40);
    rectangle(285,9,360,40);
    puthz(290,14,"木翼双龙",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    line(362,40,176,337);
    line(176,337,173,317);
    line(176,337,197,332);
    setlinestyle(0,0,1);
    setcolor(BLACK);//线型
    bar(25,335,113,368);
    rectangle(25,335,113,368);
    puthz(30,340,"极速飞车",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTCYAN);
    line(151,376,348,439);
    line(348,439,338,424);
    line(348,439,330,443);

    setlinestyle(0,0,1);
    setcolor(BLACK);//线型
    bar(420,409,495,440);
    rectangle(420,409,495,440);
    puthz(425,414,"飞跃长江",16,18,BLACK);
}

void draw_family_route()
{
    draw_map();
    draw_back();
    setfillstyle(1,YELLOW);
    setlinestyle(0,0,1);
    setcolor(BLACK);//线型
    bar(265,405,350,435);
    rectangle(265,405,350,435);
    puthz(270,410,"海马骑士",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTGREEN);
    line(417,410,427,381);
    line(427,381,419,387);
    line(427,381,432,391);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(495,352,586,385);
    rectangle(495,352,586,385);
    puthz(500,357,"梦幻糖果",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(YELLOW);
    line(426,351,368,125);
    line(368,125,363,140);
    line(368,125,381,135);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    bar(228,85,301,111);
    rectangle(228,85,301,111);
    puthz(233,90,"东湖塔",16,18,BLACK);
    setlinestyle(0,0,3);
    setcolor(LIGHTGREEN);
    line(302,125,175,163);
    line(175,163,180,149);
    line(175,163,187,170);

    setlinestyle(0,0,1);
    setcolor(BLACK);
    setfillstyle(1,YELLOW);
    bar(27,111,105,185);
    rectangle(27,111,105,185);
    line(27,111+37,105,111+37);
    puthz(33,116,"丛林迷旋",16,18,BLACK);
    puthz(33,116+37,"浪花跳跳",16,18,BLACK);
}