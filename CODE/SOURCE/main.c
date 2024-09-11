#include "common.h"
#include "main.h"

void main()
{
    int page=0;
    int graphdriver = VGA;
    int graphmode = VGAHI;
    USER *u = (USER *)malloc(sizeof(USER)); //�û���Ϣ
    initgraph(&graphdriver, &graphmode, "C:\\BORLANDC\\BGI");
    mouseinit();
    while(1)
    {
        switch(page)
        {
            case 0: //��¼����
                login(&page,u);
                break;
            case 1: //�����������
                forget_page(&page,u);
                break;
            case 2: //ע�����
                register_page(&page,u);
                break;
            case 3: //������
                main_page(&page,u);
                break;
            case 4://��ͼ����
                map(&page,u);
                break;
            case 5://���ֽ��ǽ���
                hljc_con(&page,1);
                break;
            case 6:
                ygd_con(&page,1); //��⵺����
                break;
            case 7:
                yltt_con(&page,1); //�������ý���
                break;
            case 8:
                jfw_con(&page,1); //쫷������
                break;
            case 9:
                jssj_con(&page,1); //�����������
                break;
            case 10:
                mxdd_con(&page,1); //����������
                break;
            case 11:
                tpwg_con(&page,1); //��Ʒ��������
                break;
            case 12:
                hlhy_con(&page,1); //���ֺ������
                break;
            case 13:
                hlsg_con(&page,1); //����ʱ�����
                break;
            case 14:
                route(&page,u); //·���Ƽ�����
                break;
            case 15:
                rain_route(&page,u); //����·��
                break;
            case 16:
                night_route(&page,u);
                break; //ҹ��·��
            case 17:
                star_route(&page,u); //����·��
                break;
            case 18:
                family_route(&page,u);//��ͥ·��
                break;
            case 19:
                propose(&page);
                break; 
            case 20:
                booking(&page,u); //Ԥ������
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