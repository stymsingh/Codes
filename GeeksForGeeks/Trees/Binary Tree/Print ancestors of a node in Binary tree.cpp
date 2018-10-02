#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
   int data;
   struct node* left;
   struct node* right;
};

bool printAncestors(nodeptr root, int target)
{
    //Base Case
    if(root == NULL) return false;
    if(root->data== target) return true;
    /* If target is present in either left or right subtree of this node,
     then print this node */
    if(printAncestors(root->left, target)||
    printAncestors(root->right, target))
    {
        std::cout << root->data<<" maxium ";
        return true;
    }
    return false;

}
struct node* newnode(int data)
{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}

int main()
{

  /* Construct the following binary tree
              1
            /   \
          2      3
        /  \
      4     5
     /
    7
  */
  struct node *root = newnode(1);
  root->left        = newnode(2);
  root->right       = newnode(3);
  root->left->left  = newnode(4);
  root->left->right = newnode(5);
  root->left->left->left  = newnode(7);

  printAncestors(root, 7);

  getchar();
  return 0;
}
