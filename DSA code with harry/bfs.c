#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int* arr;
};
 struct queue *enq(struct queue *p, int data)
{
    if (p->rear == (p->size) - 1)
    {
        printf("Overflow....\n");
    }
    else
    {
        if (p->rear == -1 && p->front == -1)
        {
            p->rear = 0;
            p->front = 0;
            p->arr[p->rear] = data;
        }
        else
        {
            p->rear++;
            p->arr[p->rear] = data;
        }
    }
    return p;
}
int deq(struct queue *p)
{
    int a;
    if ((p->rear == -1 && p->front == -1) || p->front > p->rear)
    {
        printf("Underflow.......\n");
    }
    else
    {
        if (p->rear == p->front)
        {
            p->rear = -1;
            p->front = -1;
        }
        else
        {
            p->front++;
            a=p->arr[p->front];
        }
    }
    return a;
}
// void display(struct queue *p)
// {
//     if ((p->rear == -1 && p->front == -1) || p->front > p->rear)
//     {
//         printf("Empty.......\n");
//     }
//     else
//     {
//         while (p->rear >= p->front)
//         {
//             printf("%d\t", p->arr[p->front]);
//             p->front++;
//         }
//     }
// }
int main()
{
    int s;
    printf("Enter size of the queue : ");
    scanf("%d",&s);
    struct queue* p;
    p->arr=(int*)malloc(sizeof(struct queue));
    p->size=s;
    p->rear=-1;
    p->front=-1;
    // p=enq(p,5);
    // p=enq(p,15);
    // p=enq(p,10);
    // p=enq(p,16);
    // p=enq(p,50);
    // p=enq(p,100);
    // display(p);
/// BFS 
int u;
int i=0;
printf("%d\t",i);




    return 0;
}
