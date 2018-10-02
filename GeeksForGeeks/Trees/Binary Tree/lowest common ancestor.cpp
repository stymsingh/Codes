#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node *
struct Node
{
    struct Node *left, *right;
    int key;
};

Node* newNode(int key)
{
    Node *temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}
nodeptr findLCA(nodeptr root,int n1, int n2)
{
    // base Case
    if(root == NULL) return NULL;
    if(root->key == n1 || root->key == n2) return root;
    nodeptr left = findLCA(root->left, n1,n2);
    nodeptr right = findLCA(root->right, n1, n2);
    //if both left and right of a node exist return node
    if(left && right) return root;
    //if only one of the two nodes exist(either left or right), return one that's not NULL
    return(left!=NULL)?left:right;


}

int main()
{
    // Let us create binary tree given in the above example
    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->key;
    cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6)->key;
    cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4)->key;
    cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4)->key;
    return 0;
}
