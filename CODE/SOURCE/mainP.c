#include "common.h"
#include "mainP.h"

/*************************************************
 * DESCRIPTION:绘制主界面图形
 ************************************************/
void main_draw()
{
    setlinestyle(0,0,1);
    setcolor(BLACK);//线型

    draw_background();

    draw_logo(160,140,10);

    puthz(80,115,"欢乐谷",48,55,BLACK);
    settextstyle(2,0,5);
    outtextxy(130,180,"Happy Valley");//圆环内文字

    puthz(40,400+20,"欢乐谷",24,26,BLACK);
    puthz(10,430+20,"旅游模拟系统",24,25,BLACK);//logo下方文字

    draw_rounded_rectangle(365, 30, 365+230, 30+70, LIGHTGRAY, LIGHTGRAY);
    draw_rounded_rectangle(365, 30+90, 365+230, 30+90+70, LIGHTGRAY, LIGHTGRAY);
    draw_rounded_rectangle(365, 30+90+90, 365+230, 30+90+90+70, LIGHTGRAY, LIGHTGRAY);
    draw_rounded_rectangle(365, 30+90+90+90, 365+230, 30+90+90+90+70, LIGHTGRAY, LIGHTGRAY);//画4个按钮

    setcolor(LIGHTCYAN);
    circle(420, 55, 7);
    circle(420, 55, 15);
    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    line(406, 62, 420, 87);
    line(434, 62, 420, 87);
    setfillstyle(SOLID_FILL, LIGHTCYAN);
    floodfill(407, 55, LIGHTCYAN);
    floodfill(420, 83, LIGHTCYAN);
    puthz(460, 55, "地图导览", 24, 24, WHITE);//画导航标识

    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setcolor(YELLOW);
    line(420, 130+2, 415, 146+2);
    line(415, 146+2, 400, 146+2);
    line(400, 146+2, 413, 158+2);
    line(413, 158+2, 408, 175+2);
    line(408, 175+2, 420, 165+2);
    line(420, 165+2, 432, 175+2);
    line(432, 175+2, 427, 158+2);
    line(427, 158+2, 440, 146+2);
    line(440, 146+2, 425, 146+2);
    line(425, 146+2, 420, 130+2);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(422, 145, YELLOW);
    puthz(460, 55+90, "项目查看", 24, 24, WHITE);//画五角星

    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setcolor(WHITE);
    circle(420, 245, 23);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(420, 245, WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    bar(419, 245, 421, 245-18);
    bar(420, 244, 420+15, 246);
    puthz(460, 55+90+90, "门票预订", 24, 24, WHITE);//画时钟

    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
    setcolor(WHITE);
    rectangle(400-1, 324-1, 440+1, 324+32+1);
    setcolor(LIGHTBLUE);
    circle(420, 312, 5);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(420, 312, LIGHTBLUE);
    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
    line(420, 312, 406, 324);
    line(420, 312, 434, 324);
    bar(400, 324, 440, 324+32);
    setfillstyle(SOLID_FILL, WHITE);
    bar(400+5, 324+8+3, 440-10, 324+10+3);
    bar(400+15, 324+23-2, 440-5, 324+24-2);
    puthz(460, 55+90+90+90, "园区公告", 24, 24, WHITE);//画告示牌

    puthz(360-40, 55+90+90+90+80, "营业时间", 16, 16, DARKGRAY);
    settextstyle(2, 0, 6);
    setcolor(DARKGRAY);
    outtextxy(360+69-40, 55+90+90+90+80-3, ":");
    puthz(360+70+5-40, 55+90+90+90+80, "欢乐谷", 16, 16, DARKGRAY);
    outtextxy(360+70+5+48+2-40, 55+90+90+90+80-3, ":9:30-18:00");
    puthz(360-40, 55+90+90+90+80+25, "地址", 16, 16, DARKGRAY);
    outtextxy(360+32+2-40, 55+90+90+90+80+25, ":");
    puthz(360+32+5+3-40, 55+90+90+90+80+25, "东湖生态旅游风景区", 16, 16, DARKGRAY);
    puthz(360-40, 55+90+90+90+80+25+25, "欢乐大道", 16, 16, DARKGRAY);
    outtextxy(360+68-40, 55+90+90+90+80+25+25-2, "196");
    puthz(360+68+32-40, 55+90+90+90+80+25+25, "号", 16, 16, DARKGRAY);
    outtextxy(360+68+32+20-40, 55+90+90+90+80+25+25-2, "(");
    puthz(360+68+32+20+8-40, 55+90+90+90+80+25+25, "近武汉火车站", 16, 16, DARKGRAY);
    outtextxy(360+68+32+20+8+100-40, 55+90+90+90+80+25+25-2, ")");//其余注释信息

    setcolor(DARKGRAY);
    setlinestyle(SOLID_LINE, 0, 3);
    rectangle(561,410,640,480);
    circle(601,433,18);
    ellipse(601,480,0,180,35,30);
    setfillstyle(SOLID_FILL, LIGHTCYAN);
    floodfill(601,433,DARKGRAY);
    floodfill(601,470,DARKGRAY);
}


void main_page(int *page, USER *user)//主界面控制函数
{	
	int flag[5]={0,0,0,0,0};
	int pro[5];
	int i;
	
	clrmous(MouseX, MouseY);
	main_draw();
	booking_reminder(user);

	while(1)
	{
		newmouse(&MouseX, &MouseY, &press);

		if(MouseX>=365&&MouseX<=365+230&&MouseY>=30&&MouseY<=30+70)
		{  //点击“地图导览”
		    if((mouse_press(365, 30, 365+230, 30+70) == 2)&&!flag[0])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
			    draw_rounded_rectangle(365, 30, 365+230, 30+70, DARKGRAY, DARKGRAY);

			    setcolor(LIGHTCYAN);
    			circle(420, 55, 7);
	    		circle(420, 55, 15);
		    	setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
			    line(406, 62, 420, 87);
    			line(434, 62, 420, 87);
	    		setfillstyle(SOLID_FILL, LIGHTCYAN);
		    	floodfill(407, 55, LIGHTCYAN);
			    floodfill(420, 83, LIGHTCYAN);
			    puthz(460, 55, "地图导览", 24, 24, WHITE);

                newmouse(&MouseX, &MouseY, &press);
                flag[0]=1;
            }

			else if(mouse_press(365, 30, 365+230, 30+70)==1)
			{
				*page=4;//跳转地图界面
				return;
			}

		}
		else if((MouseX>=365&&MouseX<=365+230)&&(MouseY>=120&&MouseY<=120+70))
		{  //点击“设备推荐”
			if((mouse_press(365, 120, 365+230, 120+70) == 2)&&!flag[1])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
			    draw_rounded_rectangle(365, 30+90, 365+230, 30+90+70, DARKGRAY, DARKGRAY);

			    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
			    setcolor(YELLOW);
			    line(420, 130+2, 415, 146+2);
			    line(415, 146+2, 400, 146+2);
			    line(400, 146+2, 413, 158+2);
			    line(413, 158+2, 408, 175+2);
			    line(408, 175+2, 420, 165+2);
			    line(420, 165+2, 432, 175+2);
			    line(432, 175+2, 427, 158+2);
			    line(427, 158+2, 440, 146+2);
			    line(440, 146+2, 425, 146+2);
			    line(425, 146+2, 420, 130+2);
			    setfillstyle(SOLID_FILL, YELLOW);
			    floodfill(422, 145, YELLOW);
			    puthz(460, 55+90, "项目查看", 24, 24, WHITE);

                newmouse(&MouseX, &MouseY, &press);
                flag[1]=1;
            }
			else if(mouse_press(365, 120, 365+230, 120+70)==1)
			{
				*page=19;//跳转路线推荐界面
				return;
			}
		}
		else if((MouseX>=365&&MouseX<=365+230)&&(MouseY>=210&&MouseY<=210+70))
		{  //点击“门票预订”
			if(mouse_press(365, 210, 365+230, 210+70) == 2&&!flag[2])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
			    draw_rounded_rectangle(365, 30+90+90, 365+230, 30+90+90+70, DARKGRAY, DARKGRAY);

			    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
			    setcolor(WHITE);
			    circle(420, 245, 23);
			    setfillstyle(SOLID_FILL, GREEN);
			    floodfill(420, 245, WHITE);
			    setfillstyle(SOLID_FILL, WHITE);
			    bar(419, 245, 421, 245-18);
			    bar(420, 244, 420+15, 246);
			    puthz(460, 55+90+90, "门票预订", 24, 24, WHITE);

                newmouse(&MouseX, &MouseY, &press);
                flag[2]=1;
            }

			else if(mouse_press(365, 210, 365+230, 210+70)==1)
			{
				*page=20;//跳转门票预订界面
				return;
			}

		}
		else if((MouseX>=365&&MouseX<=365+230)&&(MouseY>=300&&MouseY<=300+70))
		{  //点击“园区公告”
			if((mouse_press(365, 300, 365+230, 300+70) == 2)&&!flag[3])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
			    draw_rounded_rectangle(365, 30+90+90+90, 365+230, 30+90+90+90+70, DARKGRAY, DARKGRAY);
	
			    setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
			    setcolor(WHITE);
			    rectangle(400-1, 324-1, 440+1, 324+32+1);
			    setcolor(LIGHTBLUE);
			    circle(420, 312, 5);
			    setfillstyle(SOLID_FILL, LIGHTBLUE);
			    floodfill(420, 312, LIGHTBLUE);
			    setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
			    line(420, 312, 406, 324);
			    line(420, 312, 434, 324);
			    bar(400, 324, 440, 324+32);
			    setfillstyle(SOLID_FILL, WHITE);
			    bar(400+5, 324+8+3, 440-10, 324+10+3);
			    bar(400+15, 324+23-2, 440-5, 324+24-2);
			    puthz(460, 55+90+90+90, "园区公告", 24, 24, WHITE);

                newmouse(&MouseX, &MouseY, &press);
                flag[3]=1;
            }

			else if(mouse_press(365, 300, 365+230, 300+70)==1)
			{
				*page=21;//跳转公告界面
				return;
			}
		}
        else if((MouseX>=561 && MouseX<=640) && (MouseY>=410 && MouseY<=480))
        {
            if((mouse_press(561, 410, 640, 480)==2) && !flag[4])
            {
                clrmous(MouseX, MouseY);
                MouseS=1;
                setfillstyle(SOLID_FILL, LIGHTGRAY);
                floodfill(564,450,DARKGRAY);
                save_bk_mou(MouseX,MouseY);
                drawmous(MouseX,MouseY);

                flag[4]=1;
            }

            else if(mouse_press(561, 410, 640, 480)==1)
            {
                *page=23;
                cleardevice();
                return;
            }
        }
        else
        {
            MouseS=0;
        }
		
        if(mouse_press(365, 30, 365+230, 30+70)==0 && flag[0])
		{
			clrmous(MouseX, MouseY);
            draw_rounded_rectangle(365, 30, 365+230, 30+70, LIGHTGRAY, LIGHTGRAY);
            setcolor(LIGHTCYAN);
	        circle(420, 55, 7);
	        circle(420, 55, 15);
	        setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	        line(406, 62, 420, 87);
	        line(434, 62, 420, 87);
	        setfillstyle(SOLID_FILL, LIGHTCYAN);
	        floodfill(407, 55, LIGHTCYAN);
	        floodfill(420, 83, LIGHTCYAN);
	        puthz(460, 55, "地图导览", 24, 24, WHITE);//画导航标识

            newmouse(&MouseX, &MouseY, &press);
            flag[0]=0;
        }
        else if(mouse_press(365, 120, 365+230, 120+70)==0 && flag[1])
		{
            clrmous(MouseX, MouseY);
            draw_rounded_rectangle(365, 30+90, 365+230, 30+90+70, LIGHTGRAY, LIGHTGRAY);
            setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	        setcolor(YELLOW);
	        line(420, 130+2, 415, 146+2);
	        line(415, 146+2, 400, 146+2);
	        line(400, 146+2, 413, 158+2);
	        line(413, 158+2, 408, 175+2);
	        line(408, 175+2, 420, 165+2);
	        line(420, 165+2, 432, 175+2);
	        line(432, 175+2, 427, 158+2);
	        line(427, 158+2, 440, 146+2);
	        line(440, 146+2, 425, 146+2);
	        line(425, 146+2, 420, 130+2);
	        setfillstyle(SOLID_FILL, YELLOW);
	        floodfill(422, 145, YELLOW);
	        puthz(460, 55+90, "项目查看", 24, 24, WHITE);//画五角星

            newmouse(&MouseX, &MouseY, &press);
            flag[1]=0;
        }
        else if(mouse_press(365, 210, 365+230, 210+70)==0 && flag[2])
		{
        	clrmous(MouseX, MouseY);
            draw_rounded_rectangle(365, 30+90+90, 365+230, 30+90+90+70, LIGHTGRAY, LIGHTGRAY);
            setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	        setcolor(WHITE);
	        circle(420, 245, 23);
	        setfillstyle(SOLID_FILL, GREEN);
	        floodfill(420, 245, WHITE);
	        setfillstyle(SOLID_FILL, WHITE);
	        bar(419, 245, 421, 245-18);
	        bar(420, 244, 420+15, 246);
	        puthz(460, 55+90+90, "门票预订", 24, 24, WHITE);//画时钟

        	newmouse(&MouseX, &MouseY, &press);
            flag[2]=0;
        }
        else if(mouse_press(365, 300, 365+230, 300+70)==0 && flag[3])
		{
            clrmous(MouseX, MouseY);
            draw_rounded_rectangle(365, 30+90+90+90, 365+230, 30+90+90+90+70, LIGHTGRAY, LIGHTGRAY);
            setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	        setcolor(WHITE);
	        rectangle(400-1, 324-1, 440+1, 324+32+1);
	        setcolor(LIGHTBLUE);
	        circle(420, 312, 5);
	        setfillstyle(SOLID_FILL, LIGHTBLUE);
	        floodfill(420, 312, LIGHTBLUE);
	        setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
	        line(420, 312, 406, 324);
	        line(420, 312, 434, 324);
	        bar(400, 324, 440, 324+32);
	        setfillstyle(SOLID_FILL, WHITE);
	        bar(400+5, 324+8+3, 440-10, 324+10+3);
	        bar(400+15, 324+23-2, 440-5, 324+24-2);
	        puthz(460, 55+90+90+90, "园区公告", 24, 24, WHITE);//画告示牌

            newmouse(&MouseX, &MouseY, &press);
            flag[3]=0;
        }
        else if(mouse_press(561, 410, 640, 480)==0 && flag[4])
        {
            clrmous(MouseX, MouseY);
            setfillstyle(SOLID_FILL, WHITE);
            floodfill(564,450,DARKGRAY);
            save_bk_mou(MouseX,MouseY);
            drawmous(MouseX,MouseY);
            flag[4]=0;
            
        }
	}
}

void booking_reminder(USER *user)
{
    int i=0, j;
    int h = 28;
    int program=0;
    setfillstyle(1, LIGHTCYAN);
    bar(5, 265, 300, 415);
    setlinestyle(0, 0, 1);
    setcolor(LIGHTRED);
    rectangle(5, 265, 300, 415);
    line(36, 265, 36, 415);
    puthz(8, 272, "预", 24, 24, BROWN);
    puthz(8, 272+38, "约", 24, 24, BROWN);
    puthz(8, 272+38*2, "提", 24, 24, BROWN);
    puthz(8, 272+38*3, "醒", 24, 24, BROWN);

	settextstyle(1, 0, 4);
	setcolor(BROWN);
    for(j=0;j<5;j++)
    {
        if(user->programs[j]==1)
        {
            program = j+1;
            switch(program)
            {
                case 1:
                {
                    puthz(50, 273+i*h, "落樱雅集", 24, 28, LIGHTRED);
					outtextxy(200, 263+i*h, "15:30");
                    i++;
                }
                    break;
                case 2:
                {
                    puthz(50, 273+i*h, "百戏杂耍", 24, 28, LIGHTRED);
					outtextxy(200, 263+i*h, "16:20");
                    i++;
                }
                    break;
                case 3:
                {
                    puthz(50, 273+i*h, "打码头", 24, 42, LIGHTRED);
					outtextxy(200, 263+i*h, "17:30");
                    i++;
                }
                    break;            
                case 4:
                {
                    puthz(50, 273+i*h, "夺宝飞车", 24, 28, LIGHTRED);
					outtextxy(200, 263+i*h, "19:30");
                    i++;
                }
                    break;
                case 5:
                {
                    puthz(50, 273+i*h, "曲水流觞", 24, 28, LIGHTRED);
					outtextxy(200, 263+i*h, "20:45");
                    i++;
                }
                    break;
                default:
                    break;
            }
        }
    }
	if(program==0)
	{
	    puthz(70, 315, "暂无预约", 48, 50, LIGHTRED);
	}
}