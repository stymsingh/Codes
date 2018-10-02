#include<stdio.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

int toSumTree(struct node *node)
{
    // Base case
    if(node == NULL)
      return 0;

    // Store the old value
    int old_val = node->data;

    //store the left sum and right sum in lSum and rSum
    int lSum = toSumTree(node->left);
    int rSum = toSumTree(node->right);

    //node's data is the sum of the left and right sum
    node->data = lSum+rSum;

    //return the sum of old value and new value
    return node->data + old_val;
}

void printInorder(struct node* node)
{
     if (node == NULL)
          return;
     printInorder(node->left);
     printf("%d ", node->data);
     printInorder(node->right);
}

struct node* newNode(int data)
{
  struct node *temp = new struct node;
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;

  return temp;
}

int main()
{
  struct node *root = NULL;
  int x;

  root = newNode(10);
  root->left = newNode(-2);
  root->right = newNode(6);
  root->left->left = newNode(8);
  root->left->right = newNode(-4);
  root->right->left = newNode(7);
  root->right->right = newNode(5);

  toSumTree(root);

  printf("Inorder Traversal of the resultant tree is: \n");
  printInorder(root);

  getchar();
  return 0;
}
