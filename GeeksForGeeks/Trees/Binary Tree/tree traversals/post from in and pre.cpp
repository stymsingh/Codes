#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

int search(int in[], int l, int r,  int x)
{
    for(int i=l;i<=r;i++)
        if(in[i]==x)
            return i;
    return -1;
}
nodeptr create_node(int data)
{
    nodeptr nptr = new node;
    nptr->data = data;
    nptr->left = nptr->right = NULL;
    return nptr;
}
nodeptr printPostOrder(int in[], int pre[], int &counter,  int l, int r, int n)
{
    if(counter == n) return NULL;
    if(l>r)return NULL;
    int idx =search(in,l, r, pre[counter]);
    if(idx==-1)return NULL;
    nodeptr nptr = create_node(pre[counter]);
    counter++;
    nptr->left = printPostOrder(in,pre,counter,l,idx-1,n);
    nptr->right = printPostOrder(in,pre,counter,idx+1, r,n);
    return nptr;

}

void Postorder(struct node*root)
{
    if(root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    std::cout << root->data<<" ";

}
int main()
{
   int in[] = {4, 2, 5, 1, 3, 6};
   int pre[] =  {1, 2, 4, 5, 3, 6};
   int n = sizeof(in)/sizeof(in[0]);
   int counter = 0;
   int l = 0;
   int r = n-1;
   std::cout << "the tree is: " << '\n';
   nodeptr nptr = printPostOrder(in,pre,counter,l, r,n);
   // cout << "Postorder traversal " << endl;
   Postorder(nptr);
   return 0;
}
