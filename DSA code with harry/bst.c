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
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t", root->data);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d\t", root->data);
        inOrder(root->right);
    }
}

struct node *search(struct node *root, int s)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == s)
    {
        return root;
    }
    else if (s < root->data)
    {
        return search(root->left, s);
    }
    else
    {
        return search(root->right, s);
    }
}

struct node *searchITR(struct node *root, int s)
{
    while (root != NULL)
    {
        if (root->data == s)
        {
            return root;
        }
        else if (s < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

int isbst(struct node *root)
{
    static struct node *prev = NULL;

    if (root != NULL)
    {
        if (!isbst(root->left))
        {
            return 0;
        }
        if (prev != NULL && prev->data >= root->data)
        {
            return 0;
        }
        prev = root;
        return isbst(root->right);
    }
    else
    {
        return 1;
    }
}
void insert(struct node *root, int key)
{
    struct node *prev;
    while (root != NULL)//continue untill root node found
    {
        prev = root;
        if (key == root->data)
        {
            // printf("\n%d not inserted agin . it is already present in the bst..\n",key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct node *new = create(key);
    if (new->data < prev->data)
    {
        prev->left = new;
        // printf("\n%d is inserted \n",key);
    }
    else
    {
        prev->right = new;
        // printf("\n%d is inserted \n",key);
    }
}

// delete leaf node

// struct node* dln(struct node* root,int key)
// {
//     struct node* prev=NULL;
//     struct node* p=root;

//     int flag;
//     while(key !=p->data)
//     {
//         prev=p;
//         if(key<p->data)
//         {
//             p=p->left;
//             flag=0;
//         }
//         else
//         {
//             p=p->right;
//             flag=1;
//         }
//     }
// free(p);
//     if(flag==0)
//     {
//     prev->left=NULL;

//     }
//     else
//     {
//         prev->right=NULL;
//     }
//     return root;
// }

// ipre

struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deleteNode(struct node *root, int value)
{

    struct node *iPre;
    if (root == NULL)
    {
        return NULL;
    }
    // searching for the node to be deleted
    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    // deletion strategy when the node is found
    // node with only one child or no child
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            iPre = inOrderPredecessor(root);
            root->data = iPre->data;
            root->left = deleteNode(root->left, iPre->data);
        }
    }
    return root;
}

int main()
{
    /*
            10
           / \
          7   12
         / \    \
        2   9   14

    */

    struct node *root = create(10);
    struct node *n1 = create(7);
    struct node *n2 = create(12);
    struct node *n3 = create(2);
    struct node *n4 = create(9);
    struct node *n6 = create(14);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->right = n6;
    // NULL already linked in the create function
    //  n2->left = NULL;
    //
    //  n3->left = NULL;
    //  n3->right = NULL;
    //
    //  n4->left = NULL;
    //  n4->right = NULL;
    //
    //  n6->left = NULL;
    //  n6->right = NULL;

    // traversing

    printf("\nPreOrder : \n");
    preOrder(root);
    printf("\nPostOrder : \n");
    postOrder(root);
    printf("\nInOrder : \n");
    inOrder(root);
    insert(root, 13);
    // // printf("%d\n",root->right->right->left->data);
    insert(root, 6);
    insert(root, 1);
    insert(root, 11);
    insert(root, 15);
    insert(root, 15); // duplicate element is not allowed in  any bst.....
    insert(root, 3);
    insert(root, 4);
    insert(root, 5);
    insert(root, 8);

    // //after insert

    // /*
    //                 10
    //              /    \
//             7      12
    //          /    \    /  \
//         1      9  11   14
    //        / \    /        / \
//       1   3  8        13  15
    //            \
//             4
    //              \  
//               5
    //                \
//                 6
    //     */

    printf("\nInOrder : \n");
    inOrder(root);

    // Delete leaf node

    // root=dln(root,2);
    /*

                 10
               /    \
              7      12
           /    \    /  \
          2      9  11   14
         / \    /        / \
        1   3  8        13  15
             \
              4
               \
                5
                 \
                  6

      */
    deleteNode(root, 12);
    deleteNode(root, 11);
    deleteNode(root, 8);
    deleteNode(root, 80);
    printf("\nInOrder : \n");
    inOrder(root);

    // is bst checking

    if (isbst(root))
    {
        printf("\nYes BST\n");

        // search

        struct node *s = search(root, 19);
        struct node *s1 = search(root, 9);
        if (s != NULL)
        {
            printf("\nFound: %d\n", s->data);
        }
        else
        {
            printf("\nElement not found\n");
        }

        // search iterative

        if (s1 != NULL)
        {
            printf("Found: %d", s1->data);
        }
        else
        {
            printf("\nElement not found\n");
        }
    }

    else
    {
        printf("\nNo BST\n");
    }

    return 0;
}
