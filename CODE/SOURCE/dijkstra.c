#include "common.h"
#include "dijkstr.h"

void InitializeTable(int start,TABLE T[])
{
    int i;
    for(i=0; i<Max; i++)
    {
        T[i]=(Node*)malloc(sizeof(Node));
        T[i]->visited=0;
        T[i]->path=Nopath;
        T[i]->distance=X;
        T[i]->name=i+65;
    }
    T[start]->distance=0;
}

QUEUE InitializeQueue(int capacity)
{
    int i;
    QUEUE Q;
    Q=(Queue *)malloc(sizeof(Queue));
    Q->capacity=capacity;
    Q->size=0;

    for(i=1;i<Max;i++)
    {
        Q->element[i]=NULL;
    }
    Q->element[0]=(Node *)malloc(sizeof(Node));
    Q->element[0]->distance=0;

    return Q;
}

void enqueue(QUEUE Q,TABLE K)
{
    int i,hole;
    if(K->path==Nopath)
    {
        Q->size++;
        hole=Q->size;
    }
    else
    {
        i=1;
        while(K->name!=Q->element[i]->name && Q->element[i]!=NULL)
        {
            i++;
        } 
        hole=i;
    }
    i=hole/2;

    while(K->distance<Q->element[i]->distance)
    {
        Q->element[hole]=Q->element[i];
        hole=i;
        i=i/2;
    }
    Q->element[hole]=K;
}

int dequeue(QUEUE Q)
{
    TABLE OUT;
    int hole=1,child=2,last=Q->size;
    OUT=Q->element[1];
    Q->size--;
    while(child<=Q->size && Q->element[child]->distance < Q->element[last]->distance)
    {
        if(Q->element[child]->distance > Q->element[child+1]->distance)
            child++;
        Q->element[hole]=Q->element[child];
        hole=child;
        child=hole*2;
    }

    Q->element[hole]=Q->element[last];
    Q->element[last]=NULL;

    return OUT->name-65;
}

void dijkstra(int const(*vec)[Max],int start,int end,TABLE T[])
{
	 
	int current;
    int EdgeLength;
    int i;
    QUEUE Q;
	InitializeTable(start,T);
	
	Q=InitializeQueue(Max);
	enqueue(Q,T[start]);
	while(Q->size!=0)
	{
		current=dequeue(Q);
	
		for(i=0;i<Max;i++)
		{
			EdgeLength = vec[current][i];
			
			if(EdgeLength!=0 && EdgeLength!=X && T[i]->visited==0)
			{
				if(T[i]->distance > EdgeLength + T[current]->distance)
				{
					T[i]->distance = EdgeLength + T[current]->distance;
					enqueue(Q,T[i]);
					T[i]->path=current;
				}	
			}
		}
		T[current]->visited=1;
	}
    for(i=0;i<Max;i++)
    {
        free(Q->element[i]);
    }
    free(Q);
    ShowTable(T,end);
}

void ShowTable(TABLE T[],int end)
{
	int path_array[10];
	int i;
    int j=0;
	int path_length=0;
	i = end;
	while (i != Nopath)
	{
		path_array[path_length] = i;
		path_length++;
		i = T[i]->path;
	}
    for(i=path_length-1;i>=0;i--)
    {
        if(j<4)
        {
            drawsite(59+150*j,314,path_array[i]);
        }
        else if(j>=4)
        {
            drawsite(59+150*(j-4),376,path_array[i]);
        }
        j++;
    }
    setlinestyle(0,0,3);
    setcolor(RED);
    switch(j-1)
    {
        case 0:
            line(59,356,59+120,356);
            line(59+120,356,59+120-11,356+9);
            line(59+120,356,59+120-11,356-9);
            break;
        case 1:
            line(59,356,59+120+150,356);
            line(59+120+150,356,59+120+150-11,356+9);
            line(59+120+150,356,59+120+150-11,356-9);
            break;
        case 2:
            line(59,356,59+120+150+150,356);
            line(59+120+150+150,356,59+120+150+150-11,356+9);
            line(59+120+150+150,356,59+120+150+150-11,356-9);
            break;
        case 3:
            line(59,356,59+120+150+150+150,356);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356+9);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356-9);
            break;
        case 4:
            line(59,356,59+120+150+150+150,356);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356+9);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356-9);
            line(59,420,59+120,420);
            line(59+120,420,59+120-11,420+9);
            line(59+120,420,59+120-11,420-9);
            break;
        case 5:
            line(59,356,59+120+150+150+150,356);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356+9);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356-9);
            line(59,420,59+120+150,420);
            line(59+120+150,420,59+120+150-11,420+9);
            line(59+120+150,420,59+120+150-11,420-9);
            break;
        case 6:
            line(59,356,59+120+150+150+150,356);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356+9);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356-9);
            line(59,420,59+120+150+150,420);
            line(59+120+150+150,420,59+120+150+150-11,420+9);
            line(59+120+150+150,420,59+120+150+150-11,420-9);
            break;
        case 7:
            line(59,356,59+120+150+150+150,356);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356+9);
            line(59+120+150+150+150,356,59+120+150+150+150-11,356-9);
            line(59,420,59+120+150+150+150,420);
            line(59+120+150+150+150,420,59+120+150+150+150-11,420+9);
            line(59+120+150+150+150,420,59+120+150+150+150-11,420-9);
            break;
        default:
            break;
    }
    for(i=0;i<Max;i++)
    {
        free(T[i]);
    }


}

void drawsite(int x,int y,int flag)
{
    draw_navigation(x,y,10,LIGHTCYAN);
    switch(flag)
    {
        case 0:
            puthz(x+15,y-2,"羽落天堂",24,24,RED);
            break;
        case 1:
            puthz(x+15,y-2,"渔光岛",24,24,RED);
            break;
        case 2:
            puthz(x+15,y-2,"欢乐江城",24,24,RED);
            break;
        case 3:
            puthz(x+15,y-2,"飓风湾",24,24,RED);
            break;
        case 4:
            puthz(x+15,y-2,"欢乐时光",24,24,RED);
            break;
        case 5:
            puthz(x+15,y-2,"甜品王国",24,24,RED);
            break;
        case 6:
            puthz(x+15,y-2,"欢乐海洋",24,24,RED);
            break;
        case 7:
            puthz(x+15,y-2,"梦想大道",24,24,RED);
            break;
        case 8:
            puthz(x+15,y-2,"极速世界",24,24,RED);
            break;
        default:
            break;
    }
}