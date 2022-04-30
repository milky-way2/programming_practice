#include <stdio.h>
#include <malloc.h>
struct node
{
    struct node *left;
    struct node *right;
    int data;
    int height;
};
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int getHeight(struct node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    return p->height;
}
int balanceFactor(struct node *p)
{
    if (p == NULL)
    {
        return 0;
    }
    return (getHeight(p->left) - getHeight(p->right));
}
struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    struct node *T2 = y->left;
    x->right = T2;
    y->left = x;
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    return y; // present root
}
struct node *rightRotate(struct node *y)
{
    struct node *x = y->left;
    struct node *T2 = x->right;
    x->right = y;
    y->left = T2;
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    return x; // present root
}
struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;
    return n;
}
struct node *insert(struct node *root, int key)
{
    if (root == NULL)
    {
        return createNode(key);
    }
    
    if (key < root->data)
    {
        root->left = insert(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = insert(root->right, key);
    }
    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
    int bf = balanceFactor(root);
    // Left Left Case
    // Right rotate once with respect to the first imbalance node.
    if (bf > 1 && key < root->left->data)
    {
        return rightRotate(root);
    }
    // Right Right Case
    // Left rotate once with respect to the first imbalance node.
    if (bf < (-1) && key > root->right->data)
    {
        return leftRotate(root);
    }
    // Left Right Case
    // Left rotate once(wrt first imbalance[fib] node's child in the path of inserted node) and then Right rotate once(wrt fib).
    if (bf > 1 && key > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    // Right Left Case
    // right rotate once(wrt first imbalance[fib] node's child in the path of inserted node) and then left rotate once(wrt fib).
    if (bf < (-1) && key < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}
// traversal
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preOrder(root->left);
        preOrder(root->right);
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

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t", root->data);
    }
}

int main()
{
    struct node *root = NULL;

    root = insert(root, -1);
    root = insert(root, 1);
    root = insert(root, 10);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, -2);
    printf("\nPREORDER\n");
    preOrder(root);
    printf("\nPOSTORDER\n");
    postOrder(root);
    printf("\nINORDER\n");
    inOrder(root);

    return 0;
}
