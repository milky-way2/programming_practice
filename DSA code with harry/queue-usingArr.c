#include <stdio.h>
#include <stdlib.h>
struct array
{
    int size;
    int front;
    int rear;
    int* arr;

};
struct array* enque(struct array* p,int d)
{
    if(p->rear==p->size-1)
    {
        printf("\nOverflow");
    }
    else{
        if(p->rear==-1&&p->front==-1)
        {
            p->rear=0;
            p->front=0;
            p->arr[p->rear]=d;
            printf("\n%d inserted",d);

        }
        else{
            p->rear++;
            p->arr[p->rear]=d;
            printf("\n%d inserted",d);
        }
    }
    return p;
}
struct array* deque(struct array* p)
{
    if(p->rear==-1&&p->front==-1)
    {
        printf("\nUnderflow");
    }
   else if(p->front>p->rear)
    {
        printf("\nUnderflow");
    }
    else{
        if(p->rear==p->front)
        {
            int item=p->arr[p->front];
            p->rear=-1;
            p->front=-1;
            printf("\n%d Deleted",item);

        }
        else{
            int item =p->arr[p->front];
            p->front +=1;
            printf("\n%d DEleted",item);

        }
    }
    return p;
}
void peak(struct array* p)
{
   if(p->rear==-1&&p->front==-1)
    {
        printf("\nUnderflow");
    }
   else if(p->front>p->rear)
    {
        printf("\nUnderflow");
    }
    else{
        printf("\nThe element at front is %d",p->arr[p->front]);
    }
}
void display(struct array* p)
{
    if(p->rear==-1&&p->front==-1)
    {
        printf("\nUnderflow");
    }
   else if(p->front>p->rear)
    {
        printf("\nUnderflow");
    }
    else{
        printf("\nThe Queue is \n");
        for(int i=p->front;i<=p->rear;i++)
        {
            printf("%d\t",p->arr[i]);
        }
    }
}
int main()
{
  struct array* s;
  s->front=-1;
  s->rear=-1;
  s->size=10;
  s->arr=(int*)malloc(s->size*sizeof(int));
  s=enque(s,55);
  display(s);
  s=enque(s,56);
  s=enque(s,57);
  s=enque(s,58);
  s=enque(s,59);
  s=enque(s,60);
  s=enque(s,61);
   display(s);
//   s=enque(s,55);
//   s=enque(s,55);
//   s=enque(s,55);
//   s=enque(s,55);
//   s=enque(s,55);
s=deque(s);
//  display(s);
s=deque(s);
s=deque(s);
s=deque(s);
// s=deque(s);
// s=deque(s);
// s=deque(s);
// s=deque(s);
 display(s);
 peak(s);
    return 0;
}

