#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
};

struct node* newNode(int data)
{
     struct node* node = (struct node*)
                                  malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}

//inorder traversal
void Inorder(struct node*root)
{
    if(root == NULL)
        return;
    Inorder(root->left);
    std::cout << root->data << '\n';
    Inorder(root->right);
}

//preorder traversal
void Preorder(struct node*root)
{
    if(root == NULL)
        return;
    std::cout << root->data << '\n';
    Preorder(root->left);
    Preorder(root->right);
}

//posteorder traversal
void Postorder(struct node*root)
{
    if(root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    std::cout << root->data << '\n';

}
int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5);

     printf("\nPreorder traversal of binary tree is \n");
     Preorder(root);

     printf("\nInorder traversal of binary tree is \n");
     Inorder(root);

     printf("\nPostorder traversal of binary tree is \n");
     Postorder(root);

     getchar();
     return 0;
}
