#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int isLeaf(nodeptr node)
{
    if(node ==NULL) return 0;
    if(node->left == NULL && node->right == NULL) return 1;
    return 0;
}

/* returns 1 if SumTree property holds for the given
    tree */
int isSumTree(struct node* node)
{
    int ls;
    int rs;

    if(node == NULL || isLeaf(node))
        return 1;

    if( isSumTree(node->left) && isSumTree(node->right))
    {
        // Get the sum of nodes in left subtree
        if(node->left == NULL)
            ls = 0;
        else if(isLeaf(node->left))
            ls = node->left->data;
        else
            ls = 2*(node->left->data);

        // Get the sum of nodes in right subtree
        if(node->right == NULL)
            rs = 0;
        else if(isLeaf(node->right))
            rs = node->right->data;
        else
            rs = 2*(node->right->data);

        return(node->data == ls + rs);
    }

    return 0;
}

struct node* newNode(int data)
{
    struct node* node =
        (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main()
{
    struct node *root  = newNode(26);
    root->left         = newNode(10);
    root->right        = newNode(3);
    root->left->left   = newNode(4);
    root->left->right  = newNode(6);
    root->right->right = newNode(3);
    if(isSumTree(root))
        printf("The given tree is a SumTree ");
    else
        printf("The given tree is not a SumTree ");

    getchar();
    return 0;
}
