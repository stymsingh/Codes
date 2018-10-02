#include <iostream>
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
    nodeptr n = new node;
    n->data = data;
    n->left = n->right = NULL;
    return n;
}
int depth(nodeptr root)
{
    if(root == NULL) return 0;
    return(depth(root->left)+1 +depth(root->right));
}
int main()
{
    int root;
    cout<<"enter root key";
    cin>>root;
    nodeptr r = newNode(root);
    return 0;
}
