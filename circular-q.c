#include <stdio.h> 
#include <stdlib.h>
#include<conio.h> 
  
# define max 5  
int queue[max]; 
int front=-1;  
int rear=-1;   
int element;
void dequeue();
void enqueue();
void display();

void main()  
{  
    int choice;     
      
    while(1)  
    {  
    printf("\nPress 1: Insert an element");  
    printf("\nPress 2: Delete an element");  
    printf("\nPress 3: Display the element"); 
    printf("\nPress 4.Exit"); 
    printf("\nEnter your choice :  ");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:
        enqueue();  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display(); 
        break; 
        case 4: 
        exit(1);
        break;
        default:
        printf("\nWrong choice.....Try again\n");
  
    }
    }  
      
} 


void enqueue()  
{   
    
    if((rear+1)%max==front)
    {  
        printf("Queue is Full...");  
        return;
    }
    else
    {
         printf("Enter the element which is to be inserted :  ");  
        scanf("%d", &element); 
     if(front==-1 && rear==-1) 
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else  
    {  
        rear=(rear+1)%max;        
        queue[rear]=element;      
    }  
    printf("%d inserted",element);
    }
} 


void dequeue()  
{  
    if((front==-1) && (rear==-1)) 
    {  
        printf("\nQueue is empty...");
        return;  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d", queue[front]);
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%max;  
}  
}  


void display()  
{  
    int i,j; 
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty.."); 
        return; 
    } 
    if(front>rear)
    {
        for(i=0;i<=rear;i++)
        printf("\t%d",queue[i]);
        for(j=front;j<=max-1;j++)
        printf("\t%d",queue[j]);
        printf("\nRear is at %d \n",queue[rear]);
        printf("\nFront is at %d \n",queue[front]);
    } 
    else  
   {   
         for(i=front;i<=rear;i++)
         {
            printf("%d\t",queue[i]);
         }
         printf("\nRear is at %d\n",queue[rear]);
         printf("\nFront is at %d\n",queue[front]);

     
    } 
}  