#include "common.h"
#include "map.h"
#include "skipmap.h"
#include "DrawMap.h"

void skipmap(int *page,int prog)
{
    clrmous(MouseX,MouseY);
    switch(prog)
    {
        case 1:
        {
            draw_map();
            hlhy_con(page,0);
            break;
        }
        case 2:
        {
            draw_map();
            tpwg_con(page,0);
            break;
        }
        case 3:
        {
            draw_map();
            hlsg_con(page,0);
            break;
        }
        case 4:
        {
            draw_map();
            jssj_con(page,0);
            break;
        }
        case 5:
        {
            draw_map();
            yltt_con(page,0);
            break;
        }
        case 6:
        {
            draw_map();
            ygd_con(page,0);
            break;
        }
        case 7:
        {
            draw_map();
            jfw_con(page,0);
            break;
        }
        case 8:
        {
            draw_map();
            hljc_con(page,0);
            break;
        }
        default:
            break;

    }
}