
#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    char data;

};
struct node* insert(struct node*head)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    char n;
    // p->data='a';
    printf("Enter element : ");
    scanf("%c",&n);
    getchar();
    while(p->next !=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=n;
    return head;

}
struct node* display(struct node*head)
{
    //  struct node*p=(struct node*)malloc(sizeof(struct node));
   struct node* p=head;
    while(p->next !=NULL)
    {
        printf("%c ",p->next->data);
        p=p->next;
    }
    return head;
}
void check(struct node* head)
{
    struct node*p=head->next;
    
    struct node*q=head->next->next;
    int i=0;
    printf("\nPrinting index :::\n");
    while(p->next !=NULL)
    {
        // printf("Finding.....\n");
        if(p->data=='x' && q->data=='y')
        {
            printf("X found in form of ->(x,y) at index:::: %d\n",i);
        }
        p=p->next;
        q=q->next;
        i++;
    }

}
int main()
{
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    // p=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    // p->next=NULL;
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=insert(head);
    head=display(head);
    check(head);

    return 0;
}
