#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int* arr;
};

//is empty 

int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

//is full

int isfull(struct stack*ptr)
{
    if(ptr->top==((ptr->size)-1))
    {
        return 1;
    }
    else{
        return 0;
    }
}

//push 


void push(struct stack* ptr)
{
    int e;
       if(isfull(ptr))
    {
        printf("\nStack OVERFLOW...");

    }
    else{

        printf("\nEnter element : ");
        scanf("%d",&e);
        ptr->top++;
        ptr->arr[ptr->top]=e;
    }
}
//
// pop 
void pop(struct stack *ptr)
{
        if(isempty(ptr))
    {
        printf("\nStack UNDERFLOW.....");
        ptr->top=-1;


    }
    else{
        printf("\nDeleted element is %d.",ptr->arr[ptr->top]);
        ptr->top--;
    }
}
// peak
void peak(struct stack *ptr)
{
    int index;
    printf("\nEnter index to see element : ");
    scanf("%d",&index);
    if(index>ptr->top  || index<0)
    {
        printf("\nOut of range.....");
    }
    else{
        printf("\nElement at index %d is %d",index,ptr->arr[index]);
    }
}
void peaktop(struct stack *ptr)
{ 
         if(isempty(ptr))
    {
        printf("\nStack UNDERFLOW.....");

    }
    else{
        printf("\nElement at top index is %d",ptr->arr[ptr->top]);
    }
}
void peakbottom(struct stack *ptr)
{ 
         if(isempty(ptr))
    {
        printf("\nStack UNDERFLOW.....");

    }
    else{
        printf("\nElement at bottom index is %d",ptr->arr[0]);
    }
}
//display
void display(struct stack* ptr)
{
    if(isempty(ptr))
    {
        printf("\nStack is empty");
    }
    else{

    if(isfull(ptr))
    {
        printf("\nStack is full......\nThe current stack is : ");
        for(int i=ptr->top;i>=0;i--){
        printf("\n%d",ptr->arr[i]);
        }

    }
    else{

        printf("\nStack is not full.....\nThe current stack is :  ");
         for(int i=ptr->top;i>=0;i--){
        printf("\n%d",ptr->arr[i]);
        }
    }
    }

}
int main()
{
    struct stack* s;
    s->top=-1;
    s->size=10;
    s->arr=(int*)malloc(s->size*sizeof(int));
    // s->arr[0]=5;
    // s->top++;
    // push(s);
    // push(s);
    // push(s);
    // push(s);
    // push(s);
    // push(s);
    // push(s);
    // push(s);
    // push(s);
    // push(s);
    // display(s);
    // push(s);
    // push(s);
    // push(s);
    // display(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    display(s);
    // peak(s);
    // peakbottom(s);
    // peaktop(s);


    return 0;
}
