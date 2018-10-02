#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr left;
    nodeptr right;
};

nodeptr newNode(int data)
{
    nodeptr nptr = new node;
    nptr->data = data;
    nptr->left = NULL;
    nptr->right = NULL;
    return nptr;
}

int isSame(struct node* a, struct node* b)
{
    /*1. both empty */
    if (a==NULL && b==NULL)
        return 1;

    /* 2. both non-empty -> compare them */
    if (a!=NULL && b!=NULL)
    {
        return
        (
            a->data == b->data &&
            isSame(a->left, b->left) &&
            isSame(a->right, b->right)
        );
    }

    /* 3. one empty, one not -> false */
    return 0;
}

int main()
{
    struct node *root1 = newNode(1);
    struct node *root2 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5);

    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);

    if(isSame(root1, root2))
        printf("Both tree are identical.");
    else
        printf("Trees are not identical.");

    getchar();
  return 0;
}
