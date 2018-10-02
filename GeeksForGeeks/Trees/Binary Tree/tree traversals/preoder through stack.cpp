#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*
struct Node
{
	int data;
	struct Node* left, *right;
};

void iterativePreorder(nodeptr root)
{
    // Base Case
    if (root == NULL)
       return;

	stack<nodeptr> st;
    st.push(root);

    while(!st.empty())
    {
        nodeptr node = st.top();
        st.pop();
        std::cout <<node->data << " ";
        if(node->right)
            st.push(node->right);
        if(node->left)
            st.push(node->left);
    }
}

struct nodeptr newNode(int data)
{
  struct nodeptr tode = new Node;
  tode->data = data;
  tode->left = NULL;
  tode->right = NULL;

  return(tode);
}

int main()
{
    /* Constructed binary tree is
            10
          /   \
        8      2
      /  \    /
    3     5  2
  */
  struct Node *root = newNode(10);
  root->left        = newNode(8);
  root->right       = newNode(2);
  root->left->left  = newNode(3);
  root->left->right = newNode(5);
  root->right->left = newNode(2);
  iterativePreorder(root);
  return 0;
}
