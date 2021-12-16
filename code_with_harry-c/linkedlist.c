#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void printing_node(struct node* ptr)
{
    int i=1;
    while(ptr!=NULL){
        
   printf("The elements no %d  : %d \n",i,ptr->data);

   ptr=ptr->next;
   i++;
    }

}

int main()
{
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    struct node *temp_next;
    struct node *temp_next_next;
    temp = (struct node *)malloc(sizeof(struct node));
    temp_next = (struct node *)malloc(sizeof(struct node));
    temp_next_next = (struct node *)malloc(sizeof(struct node));

    head->data = 11;
    head->next = temp;
    temp->data = 21;
    temp->next = temp_next;
    temp_next->data = 31;
    temp_next->next = temp_next_next;
    temp_next_next->data = 41;
    temp_next_next->next = NULL;
    printing_node(head);
    return 0;
}