#include "common.h"
#include "main.h"

void main()
{
    int page=0;
    int graphdriver = VGA;
    int graphmode = VGAHI;
    USER *u = (USER *)malloc(sizeof(USER)); //用户信息
    initgraph(&graphdriver, &graphmode, "C:\\BORLANDC\\BGI");
    mouseinit();
    while(1)
    {
        switch(page)
        {
            case 0: //登录界面
                login(&page,u);
                break;
            case 1: //忘记密码界面
                forget_page(&page,u);
                break;
            case 2: //注册界面
                register_page(&page,u);
                break;
            case 3: //主界面
                main_page(&page,u);
                break;
            case 4://地图界面
                map(&page,u);
                break;
            case 5://欢乐江城界面
                hljc_con(&page,1);
                break;
            case 6:
                ygd_con(&page,1); //渔光岛界面
                break;
            case 7:
                yltt_con(&page,1); //羽落天堂界面
                break;
            case 8:
                jfw_con(&page,1); //飓风湾界面
                break;
            case 9:
                jssj_con(&page,1); //极速世界界面
                break;
            case 10:
                mxdd_con(&page,1); //梦想大道界面
                break;
            case 11:
                tpwg_con(&page,1); //甜品王国界面
                break;
            case 12:
                hlhy_con(&page,1); //欢乐海洋界面
                break;
            case 13:
                hlsg_con(&page,1); //欢乐时光界面
                break;
            case 14:
                route(&page,u); //路线推荐界面
                break;
            case 15:
                rain_route(&page,u); //雨天路线
                break;
            case 16:
                night_route(&page,u);
                break; //夜间路线
            case 17:
                star_route(&page,u); //网红路线
                break;
            case 18:
                family_route(&page,u);//家庭路线
                break;
            case 19:
                propose(&page);
                break; 
            case 20:
                booking(&page,u); //预定界面
                break;
            case 21:
                notice(&page,u);
                break;
            case 22:
                shortpath1(&page,u);
                break;
            case 23:
                inter(u,&page);
                break;
            default:
                break;
        }
    }
}