#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 5
int cq[max];
int item;
int front=-1;
int rear=-1;
void enq();
void dq();
void display();

void main()
{
    int choice;
    while(1)
    {
        printf("\n### Main menu ###");
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        printf("\nEnter your choice :  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enq();
            break;
            case 2: dq();
            break;
            case 3: display();
            break;
            case 4: exit(1);
            default: printf("\nWrong choice .... Try again");


        }

        
    }
}

void enq()
{
    
  if((rear+1)%max==front)
  {
      printf("Queue is full...");
  }
    else
    {
        printf("\nEnter element :  ");
    scanf("%d",&item);
        if(rear==-1 && front==-1)
        {
            rear=0;
            front=0;
            cq[rear]=item;
        }
        else
        {
            rear=(rear+1)%max;
            cq[rear]=item;
        }
        printf("%d inserted",item);
    }
}

void dq()
{
    if(front==-1 && rear==-1)
    {
        printf("\nThe queue is empty ... ");
        return;
    }
    else if(front==rear)
        {
            printf("%d deleted \n",cq[front]);
            rear=-1;
            front=-1;
        }
        else
        {
            printf("%d deleted \n",cq[front]);
            front=(front+1)%max;
        }
        
    
}


void display()
{
    if(front==-1 && rear==-1)
    {
        printf("The queue is empty...\n");
        return;
    }
    else if(front>rear)
    {
        int i,j;
        printf("\nThe queue is :  \n");
        for(i=0;i<=rear;i++)
            printf("\t%d",cq[i]);
        for(j=front;j<=(max-1);j++)
        {
             printf("\t%d",cq[j]);
         }

          printf("\nRear is at %d \n",cq[rear]);
        printf("\nFront is at %d \n",cq[front]);
    }
    else 
    {
        int i;
        printf("\nThe queue is :  \n");
        for(i=front;i<=rear;i++)
        {
              printf("\t%d",cq[i]);
                
        }
     printf("\nRear is at %d \n",cq[rear]);
        printf("\nFront is at %d \n",cq[front]);
        }
}