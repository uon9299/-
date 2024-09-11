#include "common.h"

void draw_background()
{
	setlinestyle(0,0,1);
    setcolor(BLACK);//线型

	setfillstyle(1,WHITE);
	bar(0,0,640,480);//背景

	setcolor(YELLOW);
    circle(640,40,100);
    setfillstyle(1,YELLOW);
    floodfill(620,40,YELLOW);
    setcolor(LIGHTGREEN);
    circle(-10, -10, 120);
    setfillstyle(1,LIGHTGREEN);
    floodfill(1, 1, LIGHTGREEN);
    setcolor(YELLOW);
    circle(50, 460, 180);
    setfillstyle(1,YELLOW);
    floodfill(41, 421, YELLOW);
    setcolor(CYAN);
    circle(-145, 220, 220);
    setfillstyle(1,CYAN);
    floodfill(1, 251, CYAN);//装饰背景
}

void draw_logo(int x, int y, int times)
{
    setlinestyle(0, 0, 1);
    setcolor(BLACK);
    
    circle(x,y,(10*times));
    circle(x,y,(9*times));
    setfillstyle(1,WHITE);
    floodfill(x,y,BLACK);
    line(x,(y-10*times)-1,x,(y-9*times)+1);
    line(x,(y+9*times)-1,x,(y+10*times)+1);
    line((x-10*times)-1,y,(x-9*times)+1,y);
    line((x+9*times)-1,y,(x+10*times)+1,y);
    line((x-7*times),(y-7*times),(10*x-63*times)/10,(10*y-63*times)/10);
    line((x+7*times),(y-7*times),(10*x+63*times)/10,(10*y-63*times)/10);
    line((x-7*times),(y+7*times),(10*x-63*times)/10,(10*y+63*times)/10);
    line((x+7*times),(y+7*times),(10*x+63*times)/10,(10*y+63*times)/10);
    setfillstyle(1,RED);
    floodfill((10*x-95*times)/10,y-2,BLACK);
    setfillstyle(1,YELLOW);
    floodfill(x-2,(10*y-95*times)/10,BLACK);
    setfillstyle(1,LIGHTBLUE);
    floodfill(x+2,(10*y-95*times)/10,BLACK);
    setfillstyle(1,BLUE);
    floodfill((10*x+95*times)/10,y-2,BLACK);
    setfillstyle(1,YELLOW);
    floodfill((10*x+95*times)/10,y+2,BLACK);
    setfillstyle(1,GREEN);
    floodfill((10*x-95*times)/10,y+2,BLACK);
    setfillstyle(1,BLUE);
    floodfill(x-2,(10*y+95*times)/10,BLACK);
    setfillstyle(1,LIGHTRED);
    floodfill(x+2,(10*y+95*times)/10,BLACK);//画外侧圆环
}


/*************************************************
 * DESCRIPTION:绘制圆角矩形；color1为边框颜色，color2为填充颜色
 ************************************************/

void draw_rounded_rectangle(int x1, int y1, int x2, int y2, int color1, int color2)
{

    int mid_y = (y1 + y2) / 2;
    int r = (y2 - y1) / 2;

    setcolor(color1);
    setfillstyle(SOLID_FILL, color2);
    pieslice(x1 + r, mid_y, 270, 450, r);
    pieslice(x2 - r, mid_y, 359, 0, r);
    bar(x1 + r, y1, x2 - r, y2);

    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    line(x1 + r, y1, x2 - r, y1);
    line(x1 + r, y2, x2 - r, y2);

    setcolor(color2);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
    line(x2 - r, mid_y, x2, mid_y);
}

/*************************************************
 * DESCRIPTION:绘制实心圆形
 ************************************************/
void circle_fill(int x, int y, int r, int color)
{
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    pieslice(x, y, 0, 359, r);
    circle(x, y, r);
    floodfill(x + r - 2, y + 2, color);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
    line(x, y, x + r - 3, y);
}

/*************************************************
 * DESCRIPTION:横线标亮
 ************************************************/
void light_line(int x, int y, int len, int color)
{
    setcolor(color);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    line(x, y, x + len, y);
}

/*************************************************
 * DESCRIPTION:￥绘制
 ************************************************/
void draw_money(int x, int y, int color, int size)
{

    setcolor(color);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);

    line(x - size * 2, y - size * 2, x, y);
    line(x + size * 2, y - size * 2, x, y);
    line(x - size * 2, y, x + size * 2, y);
    line(x - size * 2, y + size * 1.5, x + size * 2, y + size * 1.5);
    line(x, y, x, y + size * 3);
}

void draw_back_logo(int color0, int color1, int color2)//color0为线条颜色，color1为填充颜色，color2为箭头颜色
{
    setlinestyle(0, 0, 1);
    setcolor(color0);
    rectangle(5, 5, 55, 55);
    setfillstyle(1, color1);
    floodfill(5+ 2, 5+ 2, color0);

    setcolor(color2);
    setfillstyle(1, color2);
    bar((4*5+55)/5, (5+55)/2-3, (5+4*55)/5+2, (5+55)/2+3);

    line((4*5+55)/5-5, (5+55)/2, (5+55)/2-5, (5*3+55)/4);
    line((5+55)/2-5, (5*3+55)/4, (5+55)/2+5, (5*3+55)/4);
    line((5+55)/2+5, (5*3+55)/4, (4*5+55)/5+5, (5+55)/2);

    line((4*5+55)/5-5, (5+55)/2, (5+55)/2-5, (5+55*3)/4);
    line((5+55)/2-5, (5+55*3)/4+1, (5+55)/2+5, (5+55*3)/4+1);
    line((5+55)/2+5, (5+55*3)/4+1, (4*5+55)/5+5, (5+55)/2);
    floodfill((5+55)/2, (5+55*3)/4-2, color2);
    floodfill((5+55)/2, (5*3+55)/4+2, color2);
    floodfill((4*5+55)/5-3, 30, color2);
}

void draw_navigation(int x, int y, int size, int color)
{
    setcolor(color);
	circle(x, y, (size*7/10));
	circle(x, y, (size*15/10));
	setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	line(x-(14*size/10), y+(7*size/10), x, y+(32*size)/10);
	line(x+(14*size/10), y+(7*size/10), x, y+(32*size)/10);
	setfillstyle(1, color);
	floodfill(x-(14*size/10)+1, y, color);
	floodfill(x, y+(32*size/10)-1, color);
}

void draw_star(int x, int y, int size, int color1, int color2)//x,y为五角星重心坐标，color1为边框颜色，color2为填充颜色
{
    setlinestyle(0, 0, 1);
    setcolor(color1);
    setfillstyle(1, color2);
    line(x, y-68*size/10, x-14*size/10, y-21*size/10);
    line(x, y-68*size/10, x+14*size/10, y-21*size/10);
    line(x-14*size/10, y-21*size/10, x-60*size/10, y-20*size/10);
    line(x+14*size/10, y-21*size/10, x+60*size/10, y-20*size/10);
    line(x-60*size/10, y-20*size/10, x-25*size/10, y+8*size/10);
    line(x+60*size/10, y-20*size/10, x+25*size/10, y+8*size/10);
    line(x-25*size/10, y+8*size/10, x-38*size/10, y+55*size/10);
    line(x+25*size/10, y+8*size/10, x+38*size/10, y+55*size/10);
    line(x-38*size/10, y+55*size/10, x, y+28*size/10);
    line(x+38*size/10, y+55*size/10, x, y+28*size/10);
    floodfill(x, y, color1);
}






