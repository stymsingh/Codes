#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
vector<int> preorder(nodeptr root)
{
    stack<nodeptr>st;
    vector<int>v;
    nodeptr temp = root;
    st.push(root);
    while(!st.empty())
    {
        nodeptr p = st.top();
        st.pop();
        v.push_back(p->data);
        if(p->right)
            st.push(p->right);
        if(p->left)
            st.push(p->left);
    }return v;
}

int add(nodeptr root)
{
    int sum =  0;
    std::vector<int> v = preorder(root);
    for (auto& n : v)
        sum += n;
    return sum;

}


struct node* newNode (int data)
{
    struct node *temp = new struct node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

/* Driver function to test above functions */
int main()
{
    struct node *root = NULL;

    root = newNode(10);
    root->left = newNode(-2);
    root->right = newNode(7);
    root->left->left = newNode(8);
    root->left->right = newNode(-4);

    printf ("Following are is the sum of all nodes of the binary tree\n");
    int sum = add(root);
    printf ("\nSum of the nodes is %d ", sum);

    getchar();
    return 0;
}
