#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *left,*right;
int ht;
}node;
 
node *insert(node *,int);
int height( node *);
node *rotateright(node *);
node *rotateleft(node *);
node *RR(node *);
node *LL(node *);
node *LR(node *);
node *RL(node *);
int BF(node *);


int main()
{
node *root=NULL;
int x,n,i,choice;
while(choice!=5)
{
printf("\n1)Create:\n2)Insert:\n3)Delete:\n4)Print:\n5)Quit:");
printf("\n\nEnter Your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 2: 
printf("\nEnter a data: ");
scanf("%d",&x);
root=insert(root,x);
break;
default:
printf("\nWrong choice......\nTry again....\n");
}
};
return 0;
}

node * insert(node *T,int x)
{
if(T==NULL)
{
T=(node*)malloc(sizeof(node));
T->data=x;
T->left=NULL;
T->right=NULL;
}
else
if(x > T->data) // insert in right subtree
{
T->right=insert(T->right,x);
if(BF(T)==-2)
if(x>T->right->data)
T=RR(T);
else
T=RL(T);
}
else
if(x<T->data)
{
T->left=insert(T->left,x);
if(BF(T)==2)
if(x < T->left->data)
T=LL(T);
else
T=LR(T);
}
T->ht=height(T);
return(T);
}
 

 int height(node *T)
{
int lh,rh;
if(T==NULL)
return(0);
if(T->left==NULL)
lh=0;
else
lh=1+T->left->ht;
if(T->right==NULL)
rh=0;
else
rh=1+T->right->ht;
if(lh>rh)
return(lh);
return(rh);
}



