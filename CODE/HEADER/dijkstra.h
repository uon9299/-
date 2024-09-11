#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#define X 9999
#define Max 9
#define Nopath -1


typedef struct node
{
    int path;
    int visited;
    int distance;
    char name;
}Node;

typedef Node* TABLE;

void IntializeTable(int start,TABLE T[]);

typedef struct PriorityQueue
{
    int size;
    int capacity;
    TABLE element[Max];
}Queue;
typedef Queue *QUEUE;

QUEUE IntializeQueue(int capacity);

void enqueue(QUEUE Q,TABLE K);
int dequeue(QUEUE Q);
void dijkstra(int const(*path)[Max],int start,int end,TABLE T[]);
void ShowTable(TABLE T[],int end);
void drawsite(int x,int y,int flag);


#endif // DIJKSTRA_H