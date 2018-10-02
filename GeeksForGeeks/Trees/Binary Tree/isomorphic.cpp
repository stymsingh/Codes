#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr left;
    nodeptr right;
};
bool isIsomorphic(nodeptr root1, nodeptr root2)
{
    if(root1==NULL && root2==NULL) return true;
    if(root1==NULL||root2==NULL)return false;
    if(root1->data!=root2->data) return false;
    return
     (isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right))||
     (isIsomorphic(root1->left,root2->right) && isIsomorphic(root1->right,root2->left));
}

node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return (temp);
}

int main()
{
    struct node *root1 = newNode(1);
    root1->left        = newNode(2);
    root1->right       = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5);
    root1->right->left  = newNode(6);
    root1->left->right->left = newNode(7);
    root1->left->right->right = newNode(8);

    struct node *root2 = newNode(1);
    root2->left         = newNode(3);
    root2->right        = newNode(2);
    root2->right->left   = newNode(4);
    root2->right->right   = newNode(5);
    root2->left->right   = newNode(6);
    root2->right->right->left = newNode(8);
    root2->right->right->right = newNode(7);

    if (isIsomorphic(root1, root2) == true)
       cout << "Yes";
    else
      cout << "No";

    return 0;
}
