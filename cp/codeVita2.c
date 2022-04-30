struct node *sITR(struct node *root, int s)
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