typedef struct node
{
    int n;
    struct node *left;
    struct node *right;
}
node;

bool search(int n, node *tree)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (n < tree->n)
    {
        return search(n, tree->left);
    }
    else if (n > tree->n)
    {
        return search(n, tree->right);
    }
    else {
        return true;
    }
}
