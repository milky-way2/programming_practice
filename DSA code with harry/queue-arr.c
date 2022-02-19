#include <stdlib.h>
#include<stdio.h>
#include <conio.h>
#define max 5
int queue_arr[max];
void insert();
void delete();
void display();
int front=-1,rear=-1;
int item;

void main()
{
    int choice;
    while(1)
    {
        printf("### Main menu ###");
        printf("\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);

        switch(choice){
        case 1: insert();
        break;
        case 2: delete();
        break;
        case 3: display();
        break;
        case 4:exit(1);
        break;
        default: printf("!!! Wrong choice !!!\nTry again: ");
        break;    
        }
    }
}
void insert()
{
    if(rear==(max-1))
    {
        printf("\nThe queue is full !\n");
        return;
    }
    else
        {
            printf("\nEnter element :  \n");
            scanf("%d",&item);
            if(rear==-1 && front==-1)
            {
                rear=0;
                front=0;
            }
            else
            {
                rear++;
            }
            queue_arr[rear]=item;
            printf("%d inserted\n",item);
        }
}

void delete()
{
    if(front==-1 || front>rear)
    {
        printf("The queue is empty\n");
        return;
    }
    else
    {
        item=queue_arr[front];
        if(front==rear)
        {
            rear=-1;
            front=-1;
        }
        else
        {
            front ++;

        }
        printf("%d deleted\n",item);

    }
}

void display()
{
    if(rear==-1)
    {
        printf("The queue is empty\n");
        return;
    }
    else 
    {
        printf("The queue is : \n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",queue_arr[i]);
        }
    }
}