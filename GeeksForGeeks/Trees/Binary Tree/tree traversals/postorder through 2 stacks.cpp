#include<iostream>
#include<stack>
using namespace std;
#define nodeptr Node*
//Tree Node Structure
struct Node
{
    int data;
    struct Node *left, *right;
};


struct Node* newNode(int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

//approach1 : using two stacks;
void postOrderIterative(nodeptr root){
    stack<nodeptr>st1, st2;
    st1.push(root);
    while(!st1.empty())
    {
        nodeptr node = st1.top();
        st1.pop();
        st2.push(node);
        if(node->left) st1.push(node->left);
        if(node->right) st1.push(node->right);
    }
    while(!st2.empty())
    {
        nodeptr node = st2.top();
        std::cout << node->data <<" ";
        st2.pop();
    }
}

//approach 2
/*

#define nodeptr node*
void Print (const vector<int>& v){
  //vector<int> v;
  for (int i=0; i<v.size();i++){
    cout << v[i] << " ";
  }
}
void postOrder(node *root) {
    stack<nodeptr>st;
    vector<int>v;
    st.push(root);
    while(!st.empty())
    {
        nodeptr p = st.top();
        st.pop();
        v.push_back(p->data);
        if(p->left)
            st.push(p->left);
        if(p->right)
            st.push(p->right);
    }
    reverse(v.begin(),v.end());
    Print(v);


}
*/



int main()
{
    // Let us construct the tree shown in above figure
    struct Node* root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    postOrderIterative(root);

    return 0;
}
