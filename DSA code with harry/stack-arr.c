#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#define max 5
int stack_arr[max];
void push();
void pop();
void display();
int item;
int top=-1;
int main()
{
    
    int choice;
    while(1)
    {
         printf("### Mainu ###");
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter choice :  ");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4: exit(1);
        break;
        default: printf("\nWrong choice try again\n");
        

    }
    }
}
void push()
{
    if(top==(max-1))
    {
        printf("\nStack is full !\n");
        return;
    }
    else
    {
        top++;
        printf("\nEnter element :  ");
        scanf("%d",&item);
        stack_arr[top]=item;
        printf("\n%d Inserted\n",item);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nThe stack is empty ! \n");
        return;
    }
    else
    {
        item=stack_arr[top];
        printf("\n%d Deleted\n",item); 
         top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("\nThe stack is empty\n");
    }
    else 
    {
        printf("\n The stack is : \n");
  
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack_arr[i]);

                  }
    }
}