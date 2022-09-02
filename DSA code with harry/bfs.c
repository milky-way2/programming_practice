// #include <stdio.h>
// #include <stdlib.h>
// struct queue
// {
//     int size;
//     int front;
//     int rear;
//     int *arr;
// };
// struct queue *enq(struct queue *p, int data)
// {
//     if (p->rear == (p->size) - 1)
//     {
//         printf("Overflow....\n");
//     }
//     else
//     {
//         if (p->rear == -1 && p->front == -1)
//         {
//             p->rear = 0;
//             p->front = 0;
//             p->arr[p->rear] = data;
//         }
//         else
//         {
//             p->rear++;
//             p->arr[p->rear] = data;
//         }
//     }
//     return p;
// }
// int deq(struct queue *p)
// {
//     int a;
//     if ((p->rear == -1 && p->front == -1) || p->front > p->rear)
//     {
//         printf("Underflow.......\n");
//     }
//     else
//     {
//         if (p->rear == p->front)
//         {
//             a = p->arr[p->front];
//             p->rear = -1;
//             p->front = -1;
//         }
//         else
//         {
//             p->front++;
//             a = p->arr[p->front];
//         }
//     }
//     return a;
// }
// int isempty(struct queue *p)
// {
//     if ((p->rear == -1 && p->front == -1) || p->front > p->rear)
//     {
//         return 1;
//     }
//     else
//         return 0;
// }
// // void display(struct queue *p)
// // {
// //     if ((p->rear == -1 && p->front == -1) || p->front > p->rear)
// //     {
// //         printf("Empty.......\n");
// //     }
// //     else
// //     {
// //         while (p->rear >= p->front)
// //         {
// //             printf("%d\t", p->arr[p->front]);
// //             p->front++;
// //         }
// //     }
// // }
// int main()
// {
//     // printf("Enter no of node : 11");
//     // int s;
//     // printf("Enter size of the queue : ");
//     // scanf("%d",&s);

//     int s = 100;
//     // printf("Enter no of node : 12");
//     struct queue* p;
//     p->size = s;
//     p->rear = -1;
//     p->front = -1;
//     p->arr = (int *)malloc(p->size * sizeof(int));
//     // p=enq(p,5);
//     // p=enq(p,15);
//     // p=enq(p,10);
//     // p=enq(p,16);
//     // p=enq(p,50);
//     // p=enq(p,100);
//     // display(p);
//     // printf("Enter no of node : 13");
//     /// BFS

//     int u;
//     int i, n;
//     // printf("Enter no of node : 14");
//     scanf("%d", &n);
//     // n = 7;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = 0;
//     }
//     // printf("Enter no of node : 15");
//     int graph[7][7] = {
//         {0, 1, 1, 1, 0, 0, 0},
//         {1, 0, 1, 0, 0, 0, 0},
//         {1, 1, 0, 1, 1, 0, 0},
//         {1, 0, 1, 0, 1, 0, 0},
//         {0, 0, 1, 1, 0, 1, 1},
//         {0, 0, 0, 0, 1, 0, 0},
//         {0, 0, 0, 0, 1, 0, 0}};
//     // printf("Enter no of node : 16");
//     // int* graph[2]={
//     //     {0,1},
//     //     {1,0}
//     // };
//     // int graph[n][n];
//     // printf("Enter element of graph '0' for not-connect  and '1' for connect : ");
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         scanf("%d", &graph[i][j]);
//     //     }
//     // }

//     printf("Enter Source Node : ");
//     scanf("%d", &i);
//     printf("%d\t", i);
//     arr[i] = 1;
//     p = enq(p, i);

//     while (!isempty(p))
//     {
//         u = deq(p);
//         for (int j = 0; j < n; j++)
//         {
//             if (graph[u][j] == 1 && arr[j] == 0)
//             {
//                 printf("%d\t", j);
//                 arr[j] = 1;
//                 p = enq(p, j);
//             }
//         }
//     }

//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>
struct Queue{
 int size;
 int *arr;
 int front;
 int rear;
};
int isEmpty(struct Queue *p)
{
    if(p->front==p->rear)
    {
       return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Queue *p)
{
    if(p->rear==p->size-1)
    {
        return 1;    
    }
    else{
        return 0;
    }
}

void enqueue(struct Queue *p,int value)
{
  if(isFull(p))
  {
      printf("Queue is overflow\n");
  }
  else{
      p->rear++;
      p->arr[p->rear]=value;
      printf("Enqueue element :%d\n",value);
  }
}
int dequeue(struct Queue *p)
{
    int a=-1;
    if(isEmpty(p))
    {
        printf("Queue is underflow\n");
    }
    else{
        p->front++;
        a=p->arr[p->front];
        return a;
    }
}
int main()
{
    struct Queue q;
    q.size=400;
    q.front=q.rear=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    //BFS implimentatoion
    int node;
    int i=1;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,1,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };
    printf("%d ",i);
    visited[i]=1;
    enqueue(&q,i);//equeue i for exploration
    while(!isEmpty(&q))
    {
        int node=dequeue(&q);
        for(int j=0;j<7;j++)
        {
            if(a[node][j]==1 && visited[j]==0)
            {
                printf("%d ",j);
                visited[j]=1;
                enqueue(&q,j);
            }
        }
    }


    return 0;
}