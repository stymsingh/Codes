#include<bits/stdc++.h>
using namespace std;
void mirror(struct node*root)
{
    if(root == NULL)
        return;
    else{
        struct node* temp;
        mirror(root->left);
        mirror(root->right);
        temp = root->left;
        root->left = root->right;
        root->right = temp;

    }
}

void inorder(struct node*root)
{
    if(root == NULL)
        return 0;
    else
        inorder(root->left);
        std::cout << root->data;
        inorder(root->right);
         << '\n';
}
int main()
{
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  printf("\n Inorder traversal of the constructed tree is \n");
  inOrder(root);
  mirror(root);
  printf("\n Inorder traversal of the mirror tree is \n");
  inOrder(root);

  getchar();
  return 0;
}
