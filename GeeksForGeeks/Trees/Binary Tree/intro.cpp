#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node*create_node(int data)
{
    struct node*temp = new node;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main()
{
  /*create root*/
  struct node *root = create_node(1);
  /* following is the tree after above statement

        1
      /   \
     NULL  NULL
  */


  root->left        = create_node(2);
  root->right       = create_node(3);
  /* 2 and 3 become left and right children of 1
           1
         /   \
        2      3
     /    \    /  \
    NULL NULL NULL NULL
  */


  root->left->left  = create_node(4);
  /* 4 becomes left child of 2
           1
       /       \
      2          3
    /   \       /  \
   4    NULL  NULL  NULL
  /  \
NULL NULL
*/
  getchar();
  return 0;
}
