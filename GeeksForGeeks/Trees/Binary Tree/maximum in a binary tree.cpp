#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*

struct node
{
    int data;
    struct node* left, *right;
};

struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return(node);
}

int findMax(nodeptr root)
{
    if(root ==NULL) return INT_MIN;
    findMax(root-)
}
