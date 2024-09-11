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
    puthz(62+30+33, 65, "飞跃长江", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "海马骑士", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "飞跃长江", 24, 26, RED);
    puthz(270, 132, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140, 1, RED, RED);
    draw_star(355+18, 140, 1, RED, RED);
    draw_star(355+18*2, 140, 1, RED, RED);
    draw_star(355+18*3, 140, 1, RED, RED);
    draw_star(355+18*4, 140, 1, RED, RED);
    puthz(270, 162, "项目特点：高空、提升", 16, 17, BLACK);
    puthz(250-5, 187, "华中首个", 24, 25, RED);
    settextstyle(1, 0, 3);
    setcolor(RED);
    outtextxy(353-5, 183, "7D");
    puthz(387-5, 187, "球幕飞行影院", 24, 25, RED);
    puthz(80, 230, "飞越亚洲第一长河——长江，在俯仰摇摆中感受极速飞翔的视", 16, 17, BLACK);
    puthz(80, 250, "觉快感，领略万里长江壮丽山河，感受凌空俯瞰的气势磅礴！", 16, 17, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(80, 265, "7D");
    puthz(105, 270, "球幕影院带你身临其境，体验集听觉、视觉、嗅觉、触觉、", 16, 17, BLACK);
    puthz(80, 290, "味觉、感觉、互动于一体的逼真特效，感受超震撼视觉冲击！", 16, 17, BLACK);


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
                skipmap(page,1);//跳转地图中显示
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
                puthz(55, 390, "“欢乐海洋”打造一站式狂欢，各大亲子互动设备让游客体验加倍！", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "飞跃长江", 24, 30, BLACK);
                puthz(307+30+33, 65, "海马骑士", 24, 30, BLACK);
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
    puthz(62+30+33, 65, "飞跃长江", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "海马骑士", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "海马骑士", 24, 26, RED);
    puthz(270, 132, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140, 1, RED, RED);
    draw_star(355+18, 140, 1, RED, RED);
    draw_star(355+18*2, 140, 1, RED, RED);
    draw_star(355+18*3, 140, 1, RED, RED);
    draw_star(355+18*4, 140, 1, RED, RED);
    puthz(270, 162, "项目特点：忽上忽下、圆周运动", 16, 17, BLACK);
    puthz(250+10, 187, "超奇妙微型失重跳楼机", 24, 25, RED);
    puthz(80, 230, "伴随着优美的音乐坐上可爱海马，他们上下跳动，忽高忽低，", 16, 17, BLACK);
    puthz(80, 250, "仿佛和海马一起翱翔大海，带来些许失重和眩晕感。", 16, 17, BLACK);

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
                skipmap(page,1);//跳转地图中显示
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
                puthz(55, 390, "“欢乐海洋”打造一站式狂欢，各大亲子互动设备让游客体验加倍！", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "飞跃长江", 24, 30, BLACK);
                puthz(307+30+33, 65, "海马骑士", 24, 30, BLACK);
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
    puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "梦幻糖果", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "靴子警局", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "蛋糕皇宫", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：", 16, 17, BLACK);
    puthz(270+90+40, 162+15, "度全景", 16, 17, BLACK);
    puthz(270+90+40+55+30, 162+15, "体验馆", 16, 17, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(270+90, 162+15-4, "360");
    outtextxy(270+90+40+55, 162+15-4, "VR");
    
    outtextxy(80, 230-4, "360");
    puthz(80+36, 230, "度全景动画和超逼真视觉特效让你恍若置身动漫世界，体", 16, 17, BLACK);
    puthz(80, 250, "感游戏实时交互，精彩场景令人目不暇接。", 16, 17, BLACK);

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
                skipmap(page,2);//跳转地图中显示
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
                puthz(55, 390, "“甜品王国”以热门", 16, 17, YELLOW);
                settextstyle(1, 0, 2);
                setcolor(YELLOW);
                outtextxy(210, 390-5, "IP");
                puthz(227, 390, "“饼干警长”为主题，突出亲和友爱的氛围。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, BLACK);
                puthz(225+20+12, 65, "梦幻糖果", 24, 26, BLACK);
                puthz(388+20+12, 65, "靴子警局", 24, 26, BLACK);
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
    puthz(225+20+12, 65, "梦幻糖果", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "靴子警局", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "梦幻糖果", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：甜蜜激战天空飞船", 16, 17, BLACK);
        
    puthz(80, 230, "梦幻棒棒糖旋转飞舞营造浪漫气氛，波动弹跳，不断起伏，", 16, 17, BLACK);
    puthz(80, 250, "最后飞向天空饱览甜品王国风光。", 16, 17, BLACK);

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
                skipmap(page,2);//跳转地图中显示
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
                puthz(55, 390, "“甜品王国”以热门", 16, 17, YELLOW);
                settextstyle(1, 0, 2);
                setcolor(YELLOW);
                outtextxy(210, 390-5, "IP");
                puthz(227, 390, "“饼干警长”为主题，突出亲和友爱的氛围。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, BLACK);
                puthz(225+20+12, 65, "梦幻糖果", 24, 26, BLACK);
                puthz(388+20+12, 65, "靴子警局", 24, 26, BLACK);
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
    puthz(388+20+12, 65, "靴子警局", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "梦幻糖果", 24, 26, BLACK);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, BLACK);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "靴子警局", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：大型儿童攀爬馆", 16, 17, BLACK);
    
    puthz(80, 230, "在靴子警局挑战攀爬，来回钻动，从滑梯上俯冲、直下，", 16, 17, BLACK);
    puthz(80, 250, "大型儿童攀爬设施让孩子们尽情打滚。", 16, 17, BLACK);

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
                skipmap(page,2);//跳转地图中显示
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
                puthz(55, 390, "“甜品王国”以热门", 16, 17, YELLOW);
                settextstyle(1, 0, 2);
                setcolor(YELLOW);
                outtextxy(210, 390-5, "IP");
                puthz(227, 390, "“饼干警长”为主题，突出亲和友爱的氛围。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "蛋糕皇宫", 24, 26, BLACK);
                puthz(225+20+12, 65, "梦幻糖果", 24, 26, BLACK);
                puthz(388+20+12, 65, "靴子警局", 24, 26, BLACK);
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
    puthz(62+30+33, 65, "飓风飞椅", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "能量风暴", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "飓风飞椅", 24, 26, RED);
    puthz(270, 132+8, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+8, 1, RED, RED);
    draw_star(355+18, 140+8, 1, RED, RED);
    draw_star(355+18*2, 140+8, 1, RED, RED);
    draw_star(355+18*3, 140+8, 1, RED, RED);
    draw_star(355+18*4, 140+8, 1, RED, RED);
    draw_star(355+18*5, 140+8, 1, RED, RED);
    puthz(270, 162+8, "项目特点：飘荡、翱翔、失重、", 16, 17, BLACK);
    puthz(270, 182+8, "惊险、刺激", 16, 17, BLACK);
    
    puthz(80, 230, "飓风来临，椅子也随着飓风旋转起来了，坐上飞椅感受征服飓", 16, 17, BLACK);
    puthz(80, 250, "风的快感吧！飓风咆哮的声音都被欢声笑语取代啦！", 16, 17, BLACK);

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
                skipmap(page,3);//跳转地图中显示
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
                puthz(55-5, 390, "“欢乐时光”将马戏团与嘉年华相融合，营造出海岸风光、派对风情。", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "飓风飞椅", 24, 30, BLACK);
                puthz(307+30+33, 65, "能量风暴", 24, 30, BLACK);
                
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
    puthz(62+30+33, 65, "飓风飞椅", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "能量风暴", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "能量风暴", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    draw_star(355+18*5, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：飞转、失重、惊险、刺激", 16, 17, BLACK);
    
    puthz(80, 230, "外型酷似八爪鱼的“能量风暴”，能在急速的旋转带动能量的", 16, 17, BLACK);
    puthz(80, 250, "爆发，难以置信的速度和双重的旋转将为您带来一段无与伦比", 16, 17, BLACK);
    puthz(80, 270, "的记忆！", 16, 17, BLACK);

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
                skipmap(page,3);//跳转地图中显示
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
                puthz(55-5, 390, "“欢乐时光”将马戏团与嘉年华相融合，营造出海岸风光、派对风情。", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "飓风飞椅", 24, 30, BLACK);
                puthz(307+30+33, 65, "能量风暴", 24, 30, BLACK);
                
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
    puthz(62+30+33, 65, "极速飞车", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "太阳神车", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "极速飞车", 24, 26, RED);
    puthz(270, 132+8, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+8, 1, RED, RED);
    draw_star(355+18, 140+8, 1, RED, RED);
    draw_star(355+18*2, 140+8, 1, RED, RED);
    draw_star(355+18*3, 140+8, 1, RED, RED);
    draw_star(355+18*4, 140+8, 1, RED, RED);
    draw_star(355+18*5, 140+8, 1, RED, RED);
    puthz(270, 162+8, "项目特点：急速、战栗、超重、", 16, 17, BLACK);
    puthz(270, 182+8, "失重、惊险、刺激", 16, 17, BLACK);
    puthz(80, 230, "飞车会像导弹一般弹射出去，弹射瞬间的加速度让你摆脱地心", 16, 17, BLACK);
    puthz(80, 250, "引力，每一个仰角急弯、每一次倒翻、每一下俯冲都让你纵情", 16, 17, BLACK);
    puthz(80, 270, "咆哮，飞驰电掣间满足你对速度的所有激情与渴望！", 16, 17, BLACK);


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
                skipmap(page,4);//跳转地图中显示
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
                puthz(55, 390, "“极速世界”引入未来科技感设计，六大项目打造全感官沉浸游玩体验！", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "极速飞车", 24, 30, BLACK);
                puthz(307+30+33, 65, "太阳神车", 24, 30, BLACK);

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
    puthz(62+30+33, 65, "极速飞车", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "太阳神车", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "太阳神车", 24, 26, RED);
    puthz(270, 132+8, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+8, 1, RED, RED);
    draw_star(355+18, 140+8, 1, RED, RED);
    draw_star(355+18*2, 140+8, 1, RED, RED);
    draw_star(355+18*3, 140+8, 1, RED, RED);
    draw_star(355+18*4, 140+8, 1, RED, RED);
    puthz(270, 162+8, "项目特点：摇摆、旋转、超重、", 16, 17, BLACK);
    puthz(270, 182+8, "失重、惊险、刺激", 16, 17, BLACK);
    puthz(80, 230, "这一台如大摆锤一般的庞大巨物，将带着你超越失重状态和", 16, 17, BLACK);
    puthz(80, 250, "加载状态的极限！随着圆盘的大幅摇摆，眼前的世界也颠倒", 16, 17, BLACK);
    puthz(80, 270, "成另一幅模样！", 16, 17, BLACK);

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
                skipmap(page,4);//跳转地图中显示
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
                puthz(55, 390, "“极速世界”引入未来科技感设计，六大项目打造全感官沉浸游玩体验！", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "极速飞车", 24, 30, BLACK);
                puthz(307+30+33, 65, "太阳神车", 24, 30, BLACK);

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
    puthz(62+30+33, 65, "丛林迷旋", 24, 30, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "浪花跳跳", 24, 30, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "丛林迷旋", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：坐立不安", 16, 17, BLACK);
    puthz(80, 230, "和家人朋友围坐在这个神奇的转盘上，伴随着富有节奏的音", 16, 17, BLACK);
    puthz(80, 250, "乐，身体随着圆盘运动。如大海波涛颠簸，又如太空飞碟起", 16, 17, BLACK);
    puthz(80, 270, "伏，时快时慢，变化无穷。我们宛如一个个跳动的音符，共", 16, 17, BLACK);
    puthz(80, 290, "同演奏出一段欢乐的乐章。", 16, 17, BLACK);


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
                skipmap(page,5);//跳转地图中显示
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
                puthz(55-20, 390, "“羽落天堂”是延续水杉林湿地资源的生态园，强调人与自然的和谐关系。", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "丛林迷旋", 24, 30, BLACK);
                puthz(307+30+33, 65, "浪花跳跳", 24, 30, BLACK);
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
    puthz(62+30+33, 65, "丛林迷旋", 24, 30, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33, 65, "浪花跳跳", 24, 30, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "浪花跳跳", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：旋转、上升、下降", 16, 17, BLACK);
    puthz(80, 230, "伴随音乐，自主操控座椅旋转，像浪花一样此起彼伏地舞动，", 16, 17, BLACK);
    puthz(80, 250, "有节奏地上升和下降。", 16, 17, BLACK);

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
                skipmap(page,5);//跳转地图中显示
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
                puthz(55-20, 390, "“羽落天堂”是延续水杉林湿地资源的生态园，强调人与自然的和谐关系。", 16, 17, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33, 65, "丛林迷旋", 24, 30, BLACK);
                puthz(307+30+33, 65, "浪花跳跳", 24, 30, BLACK);
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
    puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33+10, 65, "东湖塔", 24, 36, BLACK);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120-20, 170-5, "野人谷漂流", 24, 25, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：野性、漂流", 16, 17, BLACK);
    puthz(80, 230, "渔光漂流可谓惊心动魄，飞流而下时四溅的水花，峰回路转", 16, 17, BLACK);
    puthz(80, 250, "时期待的心情，缓缓前行时沿途的风景都将让你的心砰砰乱", 16, 17, BLACK);
    puthz(80, 270, "跳，回味良久。", 16, 17, BLACK);

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
                skipmap(page,6);//跳转地图中显示
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
                puthz(55-25, 390, "“渔光岛”是生态体验区和远眺东湖的制高点，分为主题娱乐区与休闲体验区。", 16, 16, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, BLACK);
                puthz(307+30+33+10, 65, "东湖塔", 24, 36, BLACK);
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
    puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, BLACK);
    setcolor(BROWN);
    line(307+30, 92, 552-30, 92);
    puthz(307+30+33+10, 65, "东湖塔", 24, 36, RED);
    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "东湖塔", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：至高、风光", 16, 17, BLACK);
    settextstyle(1, 0, 1);
    setcolor(BLACK);
    outtextxy(80, 225, "120");
    puthz(116, 230, "米的至尊高度决定了俯览天下胜景的博大胸怀，直插云霄", 16, 17, BLACK);
    puthz(80, 250, "的塔身连接天地灵气，让天上的神仙也忍不住登塔展望令人流", 16, 17, BLACK);
    puthz(80, 270, "连的人间美景！", 16, 17, BLACK);

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
                skipmap(page,6);//跳转地图中显示
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
                puthz(55-25, 390, "“渔光岛”是生态体验区和远眺东湖的制高点，分为主题娱乐区与休闲体验区。", 16, 16, YELLOW);
                setfillstyle(1, WHITE);
                bar(62, 60, 552, 382);
                setlinestyle(0, 0, 1);
                setcolor(BROWN);
                rectangle(62, 60, 552, 382);
    
                setlinestyle(0, 0, 3);
                setcolor(LIGHTGRAY);
                line(62+30, 92, 307-30, 92);
                line(307+30, 92, 552-30, 92);
                puthz(62+30+33-5, 65, "野人谷漂流", 24, 26, BLACK);
                puthz(307+30+33+10, 65, "东湖塔", 24, 36, BLACK);
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
    puthz(62+20+12, 65, "激流勇进", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "完美风暴", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "魂断血域", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "激流勇进", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    draw_star(355+18*5, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：娱水、滑翔、失重、", 16, 17, BLACK);
    puthz(270, 182+15, "惊险、刺激", 16, 17, BLACK);
    
    puthz(80, 230, "怀揣梦想，水手们将开始最惊险的海上之旅！船只一会儿", 16, 17, BLACK);
    puthz(80, 250, "被巨浪卷起，一会儿又坠入深不见底的深渊，只有经过激", 16, 17, BLACK);
    puthz(80, 270, "流勇进的考验，才是一名真正的水手！", 16, 17, BLACK);

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
                skipmap(page,7);//跳转地图中显示
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
                puthz(55-15, 390, "“飓风湾”是水上项目区，以美洲海域风情为背景融入沙滩、海浪元素。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "激流勇进", 24, 26, BLACK);
                puthz(225+20+12, 65, "完美风暴", 24, 26, BLACK);
                puthz(388+20+12, 65, "魂断血域", 24, 26, BLACK);
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
    puthz(225+20+12, 65, "完美风暴", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "激流勇进", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "魂断血域", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "完美风暴", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    draw_star(355+18*5, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：圆周翻转、失重、惊险刺激", 16, 17, BLACK);
        
    puthz(80, 230, "随着风暴掀起一波又一波巨浪回转颠簸，海洋之心的秘密已", 16, 17, BLACK);
    puthz(80, 250, "不再遥远。在漩涡中和翻转中挑战自我，你就已经通过了大", 16, 17, BLACK);
    puthz(80, 270, "自然的考验！", 16, 17, BLACK);

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
                skipmap(page,7);//跳转地图中显示
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
                puthz(55-15, 390, "“飓风湾”是水上项目区，以美洲海域风情为背景融入沙滩、海浪元素。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "激流勇进", 24, 26, BLACK);
                puthz(225+20+12, 65, "完美风暴", 24, 26, BLACK);
                puthz(388+20+12, 65, "魂断血域", 24, 26, BLACK);
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
    puthz(388+20+12, 65, "魂断血域", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "完美风暴", 24, 26, BLACK);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "激流勇进", 24, 26, BLACK);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "魂断血域", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：灵异、惊悚", 16, 17, BLACK);
    
    puthz(80, 230, "阴森、恐怖又奇特的空间内隐藏着千年古尸、狼面人、双", 16, 17, BLACK);
    puthz(80, 250, "角饿狼和各种鬼魂……无论你害怕与否，都能在惊声尖叫中", 16, 17, BLACK);
    puthz(80, 270, "感受挑战的快乐！", 16, 17, BLACK);

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
                skipmap(page,7);//跳转地图中显示
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
                puthz(55-15, 390, "“飓风湾”是水上项目区，以美洲海域风情为背景融入沙滩、海浪元素。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "激流勇进", 24, 26, BLACK);
                puthz(225+20+12, 65, "完美风暴", 24, 26, BLACK);
                puthz(388+20+12, 65, "魂断血域", 24, 26, BLACK);
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
    puthz(62+20+12, 65, "木翼双龙", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "打码头", 24, 39, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "凤舞九天", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "木翼双龙", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    draw_star(355+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：恢弘、刺激", 16, 17, BLACK);
    
    puthz(80, 230, "特别的木质轨道带来更加惊险刺激的体验，有两部列车同", 16, 17, BLACK);
    puthz(80, 250, "时运行，如同两只战船一起共同战斗！或缓慢爬高、或快", 16, 17, BLACK);
    puthz(80, 270, "速俯冲、或快速穿行，如腾空巨龙威风凛凛！", 16, 17, BLACK);

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
                skipmap(page,8);//跳转地图中显示
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
                puthz(55-15, 390, "“欢乐江城”以荆楚人文为背景，分为水寨集市、水岸江城两大版块。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "木翼双龙", 24, 26, BLACK);
                puthz(225+20+12, 65, "打码头", 24, 39, BLACK);
                puthz(388+20+12, 65, "凤舞九天", 24, 26, BLACK);
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
    puthz(225+20+12, 65, "打码头", 24, 39, RED);
    setcolor(LIGHTGRAY);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "木翼双龙", 24, 26, BLACK);
    line(388+15, 92, 552-15, 92);
    puthz(388+20+12, 65, "凤舞九天", 24, 26, BLACK);

    
    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "打码头", 24, 39, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(355+18*3, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：情景再现", 16, 17, BLACK);
        
    puthz(80, 230, "在水岸边搭台兴建的剧场内，码头边的风云变幻的传奇故事", 16, 17, BLACK);
    puthz(80, 250, "正精彩上映，当年的场景完美再现，让你对故事中的曾经如", 16, 17, BLACK);
    puthz(80, 270, "痴如醉。", 16, 17, BLACK);

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
                skipmap(page,8);//跳转地图中显示
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
                puthz(55-15, 390, "“欢乐江城”以荆楚人文为背景，分为水寨集市、水岸江城两大版块。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "木翼双龙", 24, 26, BLACK);
                puthz(225+20+12, 65, "打码头", 24, 39, BLACK);
                puthz(388+20+12, 65, "凤舞九天", 24, 26, BLACK);
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
    puthz(388+20+12, 65, "凤舞九天", 24, 26, RED);
    setcolor(LIGHTGRAY);
    line(225+15, 92, 388-15, 92);
    puthz(225+20+12, 65, "打码头", 24, 39, BLACK);
    line(62+15, 92, 225-15, 92);                
    puthz(62+20+12, 65, "木翼双龙", 24, 26, BLACK);

    draw_navigation(593, 320, 10, CYAN);
    puthz(560, 360, "地图查看", 16, 19, RED);

    draw_traffic_circle();
    puthz(120, 170, "凤舞九天", 24, 26, RED);
    puthz(270, 132+15, "欢乐指数", 16, 17, BLACK);
    draw_star(355, 140+15, 1, RED, RED);
    draw_star(355+18, 140+15, 1, RED, RED);
    draw_star(355+18*2, 140+15, 1, RED, RED);
    draw_star(335+18*3, 140+15, 1, RED, RED);
    draw_star(335+18*4, 140+15, 1, RED, RED);
    puthz(270, 162+15, "项目特点：扭转、失重、飞扬、", 16, 17, BLACK);
    puthz(270, 182+15, "惊险、刺激", 16, 17, BLACK);

    puthz(80, 230, "风中扭转的环形轨迹如同飞龙盘旋的身影，无数次的上升", 16, 17, BLACK);
    puthz(80, 250, "和盘旋带来一波又一波的速度冲击，让你在凌空的冲刺和", 16, 17, BLACK);
    puthz(80, 270, "旋转中感受飞龙在天的绝美姿态！", 16, 17, BLACK);

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
                skipmap(page,8);//跳转地图中显示
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
                puthz(55-15, 390, "“欢乐江城”以荆楚人文为背景，分为水寨集市、水岸江城两大版块。", 16, 17, YELLOW);
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
                puthz(62+20+12, 65, "木翼双龙", 24, 26, BLACK);
                puthz(225+20+12, 65, "打码头", 24, 39, BLACK);
                puthz(388+20+12, 65, "凤舞九天", 24, 26, BLACK);
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
