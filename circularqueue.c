#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 5
int ch;
void insert();
void delete();
void display();
int q[10];
int front= 0;
int rear= -1;

int item;
void main()
{
while (1)
{
    printf("\n\n  1.insert element to stack \n");
    printf("  2.delete element from stack \n");
    printf("  3.Display all elements of stack \n");
    printf("  4.Quit\n");
     printf("Enter your choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
        insert();
        break;
        case 2:
        delete();
        break;
        case 3:
        display();
        break;
        case 4:
        exit(1);
        default:
        printf("Wrong choce \n Try again \n");


    }

}
}
void insert()
{
    int item;
   
    // if(rear==MAX-1)
    {
        if(front !=0)
        {
             rear=0;
             front=0;
     printf("\nEnter the element : ");
    scanf("%d",&item);
            
        }
        else
        {
            printf("\n The Queue is full \n");
        return; 
        }
       

    }
       
 
    
   
    else
    {
         printf("\nEnter the element : ");
    scanf("%d",&item);
     if(front==-1 && rear ==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear++;
    }
        
    }
    queue_array[rear]=item;
printf("\nThe value'%d' has been inserted",item);   
}
void delete()
{
    
    int item;

    // if(front==-1 || front>rear)    
    if(front==-1 && rear==-1)    

    {
        printf("\nThe queue is empty\n");
       return;
    }
    else
    {
item=queue_array[front];
if(front==rear)
{
    front=-1;
    rear=-1;
}
else 
{
    front++;
}
printf("\n The deleted element is %d",item);
    }
}
void display()
{
    int i;
    if(rear==-1)
    {
        printf("\nThe queue is empty\n");
    }
    else
    {
      printf("\n The queue is : \n");
      if(rear=0)
      {
           for(i=front;i<=rear;i++,rear=MAX-1)
      {
          printf("%d\t",queue_array[i]);
      }
      }
      else
      {
         for(i=front;i<=rear;i++)
      {
          printf("%d\t",queue_array[i]);
      }  
      }
     
    }
}