#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack* next;
};

//underflow check


int isempty(struct stack *top)
{
    if(top==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}

//overflow check


int isfull(struct stack *top)
{
    struct stack * p=(struct stack*)malloc(sizeof(struct stack));
    if(p==NULL)
    {
        return 1;
    }
    else{
        free(p);
        p=NULL;
        return 0;
    }
}


//push


struct stack* push(struct stack* top){
    if(isfull(top))
    {
       printf("\nOverflow......");
       return top;

    }
    else{
        int e;
        struct stack*new=(struct stack*)malloc(sizeof(struct stack));
        printf("\nEnter element : ");
        scanf("%d",&e);
        new->data=e;
        new->next=top;
        top=new;
        return top;
    }
}

//pop

struct stack* pop(struct stack* top)
{
    if(isempty(top))
    {
        printf("\nUnderflow....");
        top=NULL;
        return top;
    }
    else{
            struct stack * p=top;
            printf("\nDeleted element is %d",p->data);
        top=p->next;
        free(p);
        p=NULL;
        return top;
    }
}


//peak

void peak(struct stack* top)
{
    struct stack*p=top;
    int i=0;
    int index;
    printf("\nEnter a index : ");
    scanf("%d",&index);
    while(i<index)
    {
        p=p->next;
        i++;
    }
    printf("\nElement at index %d is %d ",index,p->data);
}
//peak top


void peaktop(struct stack* top)
{
    struct stack*p=top;
    printf("\nTop element is %d ",p->data);
}

//peak bottom

void peakbottom(struct stack* top)
{
    struct stack* p=top;
    while(p->next !=NULL)
    {
        p=p->next;
    }
    printf("\nThe bottom element is %d ",p->data);
}

//display


void display(struct stack* top)
{
    if(isempty(top))
    {
       printf("\nStack is empty......");
    }
    else{
            printf("\nStack is : ");
            struct stack* ptr=top;
            while(ptr !=NULL)
            {
                printf("\n%d",ptr->data);
                ptr=ptr->next;
            }
    }
}
int main()
{
    struct stack* top=NULL;
//     struct stack* p=(struct stack*)malloc(sizeof(struct stack));
//     p->data=5;
//     p->next=top;
//    top=p;
//     struct stack* q=(struct stack*)malloc(sizeof(struct stack));
//     q->data=7;
//     q->next=top;
//    top=q;
top=push(top);
top=push(top);
top=push(top);
top=push(top);
top=push(top);
display(top);
peak(top);
peaktop(top);
peakbottom(top);
// top=pop(top);
// top=pop(top);
// top=pop(top);
// top=pop(top);
// top=pop(top);
// top=pop(top);
// top=pop(top);
// display(top);

    return 0;
}
