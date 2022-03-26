#include <stdio.h>
#include <stdlib.h>
// Node creation
struct Node
{
    int data;
    struct Node *next; // self refferential structure
};
//Insert at begining
struct Node* ib(struct Node* head,int val)
{
    // struct Node* ptr;
    // ptr=(struct Node*)malloc(sizeof(struct Node));
    // ptr->data=val;
    // ptr->next=head;
    // head=ptr;
    // return head;
        struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = val;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}
// insert at any index 
 struct Node * ibt(struct Node*head,int index)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    int i=0;
    struct Node *p=head;
    if(index==0)
    {
        head=ib(head,559);
    }
    else{
        
    while(i !=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    ptr->data=559;
    p->next=ptr;
    }
    return head;
}
//insert at the end
struct Node* ie(struct Node* head)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    // int i=0;
    struct Node *p=head;
    while(p->next !=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->data=779;
    ptr->next=head;
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
    struct Node*q=head;
    while(p->next !=head)
    {
        p=p->next;
    }
    p->next=head->next;
    head=q->next;
    free(q);
    q=NULL;
    return head;
}
//delete any node by index
struct Node* di(struct Node*head,int index)
{
    struct Node*p=head;
    struct Node*q=head->next;
    int i=0,j=0;
   
    while(i !=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
     if(q==head)
    {
        head=dh(head);
    }
    else{
    p->next=q->next;
    free(q);
    q=NULL;
    }
    return head;
}
//delete a node from end
struct Node* de(struct Node* head)
{
    struct Node* p=head;
    struct Node* q=head->next;
    while(p->next->next !=head)
    {
        p=p->next;
         q=q->next;
    }
    p->next=q->next;
    free(q);
    q=NULL;
    return head;
}
//delete after a node
struct Node*dan(struct Node* head,struct Node* p)
{
    struct Node* q;
    q=p->next;
if(p->next==head)
{
    p->next=q->next;
    head=p->next;
}
else{

    p->next=p->next->next;
}
    free(q);
    q=NULL;
        // printf("Out of range.......NO delete occured\n");
    return head;
}
//delete by a value 
struct Node* dv(struct Node* head,int val)
{
    struct Node* p=head;
    struct Node* q=head->next;

    while(q->data !=val)
    {
        p=p->next;
        q=q->next;
    }
    if(p->next==head)
    {
        p->next=q->next;
        head=p->next;
    }
    else{
    p->next=q->next;
    }
    free(q);
    q=NULL;
    return head;
}
// Travrsal of linkedlist
void traversal(struct Node *head)
{
    int i = 1;
    struct Node*ptr=head;
    do{
        printf("%d) Element is %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }while (ptr !=head);
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
    head->data = 4;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = head; // terminating the linked list
    // traversal function calling :print the linked list:
     printf("print the linked list:\n");
    traversal(head);
    // printf("Linked list after insert a node\n");
    // head=ib(head,158);
    //  traversal(head);
    // head=ibt(head,4);
    // traversal(head);
    // head=ie(head);
    // traversal(head);
    // head=ian(head,second);
    // traversal(head);
     printf("Linked list after delete a node\n");
    // head=dh(head);
    // traversal(head);
    // head=di(head,4);
    // traversal(head);
    // head=de(head);
    // traversal(head);
    // head=dan(head,second);
    // traversal(head);
//     head=dv(head,4);
// traversal(head);
}