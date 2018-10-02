//to delete a tree first delete its childrens and then delete the root of the tree.

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
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

void _deleteTree(struct node*root)
{
    if(root == NULL)
        return;

    _deleteTree(root->left);
    _deleteTree(root->right);

    std::cout << "deleting node : " << root->data <<'\n';

    free(root);
}

/* Deletes a tree and sets the root as NULL */
void deleteTree(struct node** node_ref)
{
  _deleteTree(*node_ref);
  *node_ref = NULL;
}

int main()
{
    struct node *root = newNode(1);
    root->left            = newNode(2);
    root->right          = newNode(3);
    root->left->left     = newNode(4);
    root->left->right   = newNode(5);

    deleteTree(&root);
    root = NULL;

    printf("\n Tree deleted ");

    getchar();
    return 0;
}
