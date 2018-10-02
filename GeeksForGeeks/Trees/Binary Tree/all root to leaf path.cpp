#include<bits/stdc++.h>
using namespace std;

struct node {

    int data;
    struct node *left;
    struct node *right;

};

struct node* newNode( int data ) {

    struct node *node = (struct node *) malloc( sizeof( struct node) );
    node -> data  = data;
    node -> left  = NULL;
    node -> right = NULL;


    return node;
}


void printQ( queue <struct node *> q ) {

    while(!q.empty())
    {
        cout << q.front() -> data << " ";
        q.pop();
    }
    cout << endl;
}

void solve( struct node *root,queue<struct node*> q) {

    if( root == NULL )
        return;

    q.push(root);

    if( root -> left == NULL && root -> right == NULL )
        printQ(q);

    else
    {
    solve( root  -> left  , q);
    solve( root  -> right , q);
    }

}

int main( ) {


    struct node *root    = newNode(1);
    root->left           = newNode(2);
    root->right          = newNode(3);
    root->left->left     = newNode(4);
    root->left->right    = newNode(5);

    queue<struct node*> q;
    solve(root,q);
    return 0;
}
