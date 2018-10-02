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
    nptr->left = nptr->right = NULL;
}

int size(nodeptr root)
{
    if(root == NULL) return 0;
    int lHeight = size(root->left);
    int rHeight = size(root->right);
    return(lHeight + rHeight+1);
}

int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);

  std::cout << "size of the tree is: " << size(root);
  return 0;
}
