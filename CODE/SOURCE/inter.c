#include "common.h"
#include "inter.h"

void inter(USER *user, int *page)
{
    int judge[5], position[5]={0,0,0,0,0};
    int program = 0, search = 0, temp, i, j, p1, p2, p3, p4, p5;
    
	clrmous(MouseX, MouseY);
    inter_draw(user);
    booking_editor(user->programs, &program); //绘制预约界面，包括用户信息和预约项目等元素。
    save_bk_mou(MouseX, MouseY);
    drawmous(MouseX, MouseY);
    
    for(j=0;j<5;j++)
    {
        judge[j]=user->programs[j]; //将用户预约的项目信息赋值给judge数组。
    }    
    
    for(temp=0;temp<5;temp++)
    {
        if(judge[temp]==1) //找到第一个预约项目。
        {
            position[search]=temp; //记录该预约项目的位置。
            search++;
        }
    } 

    p1=position[0];
    p2=position[1];
    p3=position[2];
    p4=position[3];
    p5=position[4]; //记录每个预约项目的位置。
    
    while(1)
    {
        newmouse(&MouseX, &MouseY, &press);

        if(program)
        {
            if(MouseX>=300&&MouseX<=328&&MouseY>=270&&MouseY<=270+28*program) //取消预约按钮的坐标范围。
            {                    
                MouseS=1;
                if(mouse_press(300, 270, 328, 270+28)==1) //如果用户点击了取消按钮的坐标范围。
                {           
                    cancel_booking(user, p1); //调用取消预约函数。

                    break;
                }
                else if(mouse_press(300, 270+28, 328, 270+28*2)==1)
                {
                    cancel_booking(user, p2); //调用取消预约函数。

                    break;
                }
                else if(mouse_press(300, 270+28*2, 328, 270+28*3)==1) //如果用户点击了取消按钮的坐标范围。                    
                {                        
                    cancel_booking(user, p3); //调用取消预约函数。

                    break;
                }
                else if(mouse_press(300, 270+28*3, 328, 270+28*4)==1) //如果用户点击了取消按钮的坐标范围。
                {
                    cancel_booking(user, p4); //调用取消预约函数。

                    break;
                }
                else if(mouse_press(300, 270+28*4, 328, 270+28*5)==1) //如果用户点击了取消按钮的坐标范围。                    
                {                        
                    cancel_booking(user, p5); //调用取消预约函数。

                    break;
                }         
            }
            else
            {
                MouseS=0; //如果用户没有点击取消按钮，则不执行任何操作。
            }
        }
        
        if(MouseX>=300&&MouseX<=328&&MouseY>=270&&MouseY<=270+28*program)
            MouseS=1;
        else if(MouseX>=5&&MouseX<=55&&MouseY>=5&&MouseY<=55)
        {
            MouseS=1; //如果用户点击了返回按钮的坐标范围。   
            if(mouse_press(5,5,55,55)==1)
            {
                *page=3;
                delay(100);            
                return;
            }         
        }
        else if(MouseX>=5+580&&MouseX<=55+580&&MouseY>=5&&MouseY<=55)
        {
            MouseS=1;   
            if(mouse_press(5+580,5,55+580,55)==1)
            {
                delay(1000); 
                closegraph();           
                exit(1);
            }         
        }
        else
        {
            MouseS=0;
        }
    }
}

void inter_draw(USER *user) //界面绘制函数，用于绘制界面，包括菜单和按钮等元素。
{    
    char adult[5], student[5], child[5];
    int adult_temp, student_temp, child_temp; 
    adult_temp=user->ticket[0][0];
    student_temp=user->ticket[1][0];
    child_temp=user->ticket[2][0]; //获取用户购买的门票数量。

    itoa(adult_temp, adult, 10);
    itoa(student_temp, student, 10);
    itoa(child_temp, child, 10); 
    
    setfillstyle(1, WHITE);
    bar(0, 0, 639, 479); //绘制背景色块，用于填充整个界面。
    draw_background();
    draw_back_logo(BLACK, WHITE, BLACK);
	draw_logo(590, 430, 3);
	settextstyle(2, 0, 4);
	outtextxy(30+530+10, 41+370+8, "Happy");
	outtextxy(40+520+20-1, 63+370-2, "Valley");

    setlinestyle(0, 0, 3);
    setcolor(BLACK); 
    circle(100, 150, 65);
    setfillstyle(1, GREEN);
    floodfill(100, 150, BLACK); //绘制一个圆形，用于表示用户头像。
    circle(100, 125, 20);
    ellipse(100, 150+50, 0, 180, 40, 55); //绘制一个椭圆，用于表示用户身体。
    setfillstyle(1, WHITE);
    floodfill(100, 150+50, BLACK); //填充椭圆，用于表示用户身体。
    floodfill(100, 125, BLACK); //填充圆形，用于表示用户头部。

    puthz(220, 5, "个人中心", 48, 50, LIGHTRED);
    puthz(200, 100, "账号：", 24, 26, BLACK);
    puthz(200, 140, "手机：", 24, 26, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(280, 100, user->username);
    outtextxy(280, 140, user->phone);

    setlinestyle(0, 0, 1);
    setcolor(BROWN);
    rectangle(200, 180, 550, 250);
    puthz(210, 185, "版本号：", 16, 17, BLACK);
    settextstyle(7, 0, 1);
    setcolor(BLACK);
    outtextxy(290, 181, "HUST AIA 1. 02. 10");
    puthz(210, 205, "服务商：", 16, 17, BLACK);
    puthz(290, 205, "武汉华侨城实业发展有限公司", 16, 19, BLACK);
    puthz(210, 225, "作者：", 16, 17, BLACK);
    puthz(290, 225, "黄永康、吴韶寒", 16, 20, BLACK);

    setlinestyle(0, 0, 1);
    setcolor(BLACK);
    rectangle(5+580, 5, 55+580, 55);
    setfillstyle(1, WHITE);
    floodfill(5+ 2+580, 5+ 2, BLACK);
    setcolor(BLACK);
    setfillstyle(1, BLACK);
    bar((5+55)/2-3+580, (4*5+55)/5, (5+55)/2+3+580, (5+4*55)/5+2-5-3);
    line((5+55)/2+580, (4*5+55)/5-5, (5*3+55)/4+580, (5+55)/2-5);
    line((5*3+55)/4+580, (5+55)/2-5, (5*3+55)/4+580, (5+55)/2+5);
    line((5*3+55)/4+580, (5+55)/2+5, (5+55)/2+580, (4*5+55)/5+5);
    line((5+55)/2+580, (4*5+55)/5-5, (5+55*3)/4+580, (5+55)/2-5);
    line((5+55*3)/4+1+580, (5+55)/2-5, (5+55*3)/4+1+580, (5+55)/2+5);
    line((5+55*3)/4+1+580, (5+55)/2+5, (5+55)/2+580, (4*5+55)/5+5);
    floodfill((5+55*3)/4-2+580, (5+55)/2, BLACK);
    floodfill((5*3+55)/4+2+580, (5+55)/2, BLACK);
    floodfill(30+580, (4*5+55)/5-3, BLACK);

    bar((5*3+55)/4+580-8, (5+55)/2-5-3, (5*3+55)/4+580-3-2, (5+4*55)/5+2-3+2);
    bar((5+55*3)/4+580+8, (5+55)/2-5-3, (5+55*3)/4+580+3+2, (5+4*55)/5+2-3+2);
    bar((5*3+55)/4+580-8, (5+55)/2-3+20-2-3+2, (5+55*3)/4+580+8, (5+55)/2-3+25-2-3);

    setfillstyle(1, LIGHTCYAN);
    bar(340, 265, 550, 390);
    setcolor(LIGHTRED);
    rectangle(340, 265, 550, 390); 
    puthz(345, 270, "已购门票", 24, 27, BROWN);
    puthz(355, 300, "成人票", 24, 25, BLACK);
    puthz(355, 330, "学生票", 24, 25, BLACK);
    puthz(355, 360, "儿童票", 24, 25, BLACK);
    puthz(500, 300, "张", 24, 25, BLACK);
    puthz(500, 330, "张", 24, 25, BLACK);
    puthz(500, 360, "张", 24, 25, BLACK);

    settextstyle(1, 0, 4); 
    setcolor(RED);
    outtextxy(460, 300-9, adult); 
    outtextxy(460, 330-9, student);  
    outtextxy(460, 360-9, child);  
}

void booking_editor(int *programs, int *pro)
{
    int i=0, j, temp;
    int h = 28, program=0;

    clrmous(MouseX, MouseY);

    setfillstyle(1, LIGHTCYAN);
    bar(5+10, 265, 300+30, 415);
    setlinestyle(0, 0, 1);
    setcolor(LIGHTRED);
    rectangle(5+10, 265, 300+30, 415);
    line(36+10, 265, 36+10, 415);
    puthz(8+10, 272, "预", 24, 24, BROWN);
    puthz(8+10, 272+38, "约", 24, 24, BROWN);
    puthz(8+10, 272+38*2, "提", 24, 24, BROWN);
    puthz(8+10, 272+38*3, "醒", 24, 24, BROWN);

	settextstyle(1, 0, 4);
	setcolor(BROWN);

    for(j=0;j<5;j++)
    {
        if(programs[j]==1)
        {
            program++;
            switch(j+1)
            {
                case 1:
                {
                    puthz(50+10, 273+i*h, "落樱雅集", 24, 28, LIGHTRED);
                    setcolor(BROWN);
					outtextxy(200, 263+i*h, "15:30");
                    cancel_booking_draw(300, 270+i*h);
                    i++;
                }
                    break;
                case 2:
                {
                    puthz(50+10, 273+i*h, "百戏杂耍", 24, 28, LIGHTRED);
                    setcolor(BROWN);
					outtextxy(200, 263+i*h, "16:20");
                    cancel_booking_draw(300, 270+i*h);
                    i++;
                }
                    break;
                case 3:
                {
                    puthz(50+10, 273+i*h, "打码头", 24, 42, LIGHTRED);
                    setcolor(BROWN);
					outtextxy(200, 263+i*h, "17:30");
                    cancel_booking_draw(300, 270+i*h);
                    i++;
                }
                    break;            
                case 4:
                {
                    puthz(50+10, 273+i*h, "夺宝飞车", 24, 28, LIGHTRED);
                    setcolor(BROWN);
					outtextxy(200, 263+i*h, "19:30");
                    cancel_booking_draw(300, 270+i*h);
                    i++;
                }
                    break;
                case 5:
                {
                    puthz(50+10, 273+i*h, "曲水流觞", 24, 28, LIGHTRED);
                    setcolor(BROWN);
					outtextxy(200, 263+i*h, "20:45");
                    cancel_booking_draw(300, 270+i*h);
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
	    puthz(70+10+14, 315, "暂无预约", 48, 50, LIGHTRED);
	}
    *pro=program; //记录用户预约的项目数量。

    //save_bk_mou(MouseX, MouseY);
    //drawmous(MouseX, MouseY);
}

void cancel_booking_draw(int x, int y) 
{
    setfillstyle(1, RED);
    bar(x, y, x+28, y+28); //绘制一个红色色块，用于表示取消预约按钮。
    setlinestyle(0, 0, 1); 
    setcolor(YELLOW);
    rectangle(x, y, x+28, y+28);
    setlinestyle(0, 0, 3);
    setcolor(YELLOW);
    line(x+5, y+5, x+23, y+23); 
    line(x+23, y+5, x+5, y+23); //绘制一条线段，用于表示取消预约按钮的叉叉。
}

void cancel_booking(USER *user, int program)
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
            uu->programs[program] = 0; //取消预约，将预约项目设置为0。
            fseek(fp, i * sizeof(USER), SEEK_SET);
            fwrite(uu, sizeof(USER), 1, fp);
            for(j=0;j<5;j++)
			{
				user->programs[j]=uu->programs[j];
			}
        }
	}
    free(uu);
    fclose(fp);
}