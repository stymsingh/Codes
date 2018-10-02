#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*
struct Node{
    Node*left;
    Node*right;
    int data;
};

//program to print the diagnol elements
void diagonalPrint(Node* root)
{
    queue<nodeptr>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        nodeptr p= q.front();
        q.pop();
        if(p==NULL)
        {
            cout<<endl;
            q.push(NULL);
            p = q.front();
            q.pop();
            if(p == NULL) break;
        }
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            if(p->left) q.push(p->left);
            p= p->right;
        }
    }
}

Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
int main()
{
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);

    
    diagonalPrint(root);

    return 0;
}
