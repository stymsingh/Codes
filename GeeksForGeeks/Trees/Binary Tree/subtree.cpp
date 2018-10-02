#include<bits/stdc++.h>
using namespace std;
int subtree(nodeptr tree1, nodeptr tree2)
{
    if(tree2==NULL)
        return 1;
    if(tree1==NULL)
        return 0;
    if(identical(tree1, tree2))
        return 1;
    return(subtree(tree1->left,tree2) || subtree(tree1->right, tree2));
}
int identical(struct node* a, struct node* b)
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
            identical(a->left, b->left) &&
            identical(a->right, b->right)
        );
    }

    /* 3. one empty, one not -> false */
    return 0;
}
