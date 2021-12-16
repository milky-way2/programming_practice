#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void printing_node(struct node *ptr)
{
    int i = 1;
    while (ptr != NULL)
    {

        printf("The elements no %d  : %d \n", i, ptr->data);

        ptr = ptr->next;
        i++;
    }
}

struct node *insertBeginig(struct node *head, int val)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = head;
    return ptr;
};

struct node *insertBw(struct node *head, int index, int val)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p;
    p = head;
    int i = 0;

    while (i != index - 1)
    {

        p = p->next;
        i++;
    };
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = val;

    return head;
}
struct node *insertEnd(struct node *head, int val)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    };
    ptr->data = val;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}

struct node *insertAfternode(struct node *head, struct node *ptr, int val)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = val;
    p->next = ptr->next;
    ptr->next = p;

    return head;
}


struct node* deleteFirst(struct node* head)
{
    struct node* ptr;
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct node* deleteatIndex(struct node* head, int index)
{
    struct node* p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    };
    struct node* q=p->next;
    p->next=q->next;
    free(q);
    return head;

}



struct node* deleteEnd(struct node* head)
{
    struct node* p=head;
    struct node* q=head->next;

    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    };
    free(q);
    p->next=NULL;
    return head;

}
struct node* deleteAfternode(struct node* head,struct node* ptr)
{
    struct node* p=ptr;
    
    struct node* q=ptr->next;
    p->next=q->next;
    free(q);
    return head;
    


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
    printf("\nBefore insertion:   \n");
    printing_node(head);
    //    head= insertBeginig(head,79);
    // insertBw(head,2,100);
    // insertEnd(head,500);
    // head = insertAfternode(head, temp, 1000);
    // head=deleteFirst(head);
    // head=deleteatIndex(head,2);
    // deleteEnd(head);
    // head=deleteAfternode(head,temp);

    printf("\nAfter insertion/deletion:   \n");
    printing_node(head);
    return 0;
}
