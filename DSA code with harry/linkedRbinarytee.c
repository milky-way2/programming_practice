#include <stdio.h>
// #include<stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->left = NULL;
    n->right = NULL;
    n->data = data;
    return n;
}
void preOrder(struct node* root)
{
    if(root !=NULL)
    {
        printf("%d\t",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node* root)
{
    if(root !=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t",root->data);
    }
}
void inOrder(struct node* root)
{
    if(root !=NULL)
    {
        inOrder(root->left);
        printf("%d\t",root->data);
        inOrder(root->right);
    }
}
int main()
{
    /*
            7
           / \
          11  12
         / \    \
        2   14   19
   
    */    

    struct node *root= create(7);
    struct node *n1 = create(11);
    struct node *n2 = create(12);
    struct node *n3 = create(2);
    struct node *n4 = create(14);
    struct node *n6 = create(19);
    //
    root->left = n1;
    root->right = n2;
    //
    n1->left = n3;
    n1->right = n4;
    //
    n2->left = NULL;
    n2->right = n6;
    //
    n3->left = NULL;
    n3->right = NULL;
    //
    n4->left = NULL;
    n4->right = NULL;
    //
    n6->left = NULL;
    n6->right = NULL;
    printf("\nPreOrder : \n");
    preOrder(root);
    printf("\nPostOrder : \n");
    postOrder(root);
    printf("\nInOrder : \n");
    inOrder(root);
    return 0;
}
