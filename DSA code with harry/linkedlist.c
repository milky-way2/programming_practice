#include <stdio.h>
#include <stdlib.h>
// Node creation
struct Node
{
    int data;
    struct Node *next; // self refferential structure
};
//Insert at begining
struct Node* ib(struct Node* head)
{
    struct Node* ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=158;
    ptr->next=head;
    head=ptr;
    return head;
}
// insert at any index 
 struct Node * ibt(struct Node*head,int index)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    int i=0;
    struct Node *p=head;
    while(i !=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    ptr->data=559;
    p->next=ptr;
    return head;
}
//insert at the end
struct Node* ie(struct Node* head)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    // int i=0;
    struct Node *p=head;
    while(p->next !=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=779;
    ptr->next=NULL;
    return head;
}
//insert after a node
struct Node* ian(struct Node* head,struct Node*q)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->next=q->next;
    ptr->data=889;
    q->next=ptr;
    return head;
}
//delete head node
struct Node* dh(struct Node* head)
{
    struct Node*p=head;
    head=head->next;
    free(p);
    p=NULL;
    return head;
}
//delete any node by index
struct Node* di(struct Node*head,int index)
{
    struct Node*p=head;
    struct Node*q=head;
    int i=0,j=0;
    while(i !=index-1)
    {
        p=p->next;
        i++;
    }
      while(j !=index)
    {
        q=q->next;
        j++;
    }
    p->next=q->next;
    free(q);
    q=NULL;
    return head;
}
//delete a node from end
struct Node* de(struct Node* head)
{
    struct Node* p=head;
    struct Node* q=head->next;
    while(p->next->next !=NULL)
    {
        p=p->next;
         q=q->next;
    }
    p->next=NULL;
    free(q);
    q=NULL;
    return head;
}
//delete after a node
struct Node*dan(struct Node* head,struct Node* p)
{
    struct Node* q;
    if(p->next !=NULL){
        q=p->next;
    p->next=p->next->next;
    free(q);
    q=NULL;
    
    }
    else{
        printf("Out of range.......NO delete occured\n");
    }
    return head;
}
//delete by a value 
struct Node* dv(struct Node* head,int val)
{
    struct Node* p=head;
    struct Node* q=head->next;

    while(q->data !=val && q->next !=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    q=NULL;
    return head;
}
// Travrsal of linkedlist
void traversal(struct Node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {
        printf("%d) Element is %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}
int main()
{
    // node decliaration
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // memory allocation to the node in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // linking of  node
    head->data = 147;
    head->next = second;
    second->data = 126;
    second->next = third;
    third->data = 149;
    third->next = fourth;
    fourth->data = 175;
    fourth->next = NULL; // terminating the linked list
    // traversal function calling :print the linked list:
     printf("print the linked list:\n");
    traversal(head);
    // head=ib(head);
    // printf("Linked list after insert a node\n");
    // traversal(head);
    // head=ibt(head,2);
    // traversal(head);
    // head=ie(head);
    // traversal(head);
    // head=ian(head,second);
    // traversal(head);
    //  printf("Linked list after delete a node\n");
    // head=dh(head);
    // traversal(head);
    // head=di(head,2);
    // traversal(head);
    // head=de(head);
    // traversal(head);
    // head=dan(head,third);
    // traversal(head);
    // head=dv(head,149);
// traversal(head);


}