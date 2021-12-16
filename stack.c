#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
void push();
void pop();
void display();
int stack_array[MAX];
int top =-1;
int item;
void  main()
 {
int choice;
while (1)
{
    printf("\n\n   1. Push element to stack \n");
    printf("   2. Pop element from stack \n");
    printf("   3. Display all elements of stack \n");
    printf("   4. Quit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(1);
        default:
        printf("!!!Wrong choce!!!  \n Try again  \n");


    }

}
}
void push()
{
    int item;
    if(top==MAX-1)
    {
        printf("\n The stack is full \n");

    }
    else
    {
printf("\nEnter the element : ");
scanf("%d",&item);
top++;
stack_array[top]=item;
  printf("\nThe value'%d' has been inserted",item); 
   }
      
}
void pop()
{
    if(top==-1)
    {
        printf("\nThe stack is empty\n");

    }
    else
    {
 item=stack_array[top];
printf("\n The deleted element is %d",stack_array[top]);
top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nThe stack is empty\n");
    }
    else
    {
      printf("\n The Stack is  : \n");
      for(i=top;i>=0;i--)
      {
          printf("%d\n",stack_array[i]);
      }
    }
}