#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* ib(struct Node* head)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    if(head==NULL)
    {

    head=ptr;
    head->data=550;
    head->prev=NULL;
    head->next=NULL;
    }
    return head;
}
void traversal(struct Node * head)
{
    struct Node* ptr=head;
    while(ptr !=NULL)
    {
        printf("The element is %d",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct Node* head=NULL;
    // struct Node* second;
    // struct Node* third;
    // struct Node* fourth;
head=ib(head);
traversal(head);

    return 0;
}
