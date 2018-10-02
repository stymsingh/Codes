#include<bits/stdc++.h>
using namespace std;
#define nodeptr tNode*
struct tNode
{
	int data;
	struct tNode* left, *right;
};

void inOrder(nodeptr root)
{
	//bool done =0;
	stack<nodeptr> st;
	nodeptr cur = root;

	while(cur or !st.empty())
	{
		while(cur){
			st.push(cur);
			cur=cur->left;
		}
		nodeptr tp = st.top();
		st.pop();
		cout<<tp->data<<" ";
		cur=tp->right;
	}
}

struct nodeptr newtNode(int data)
{
  struct nodeptr tode = new tNode;
  tode->data = data;
  tode->left = NULL;
  tode->right = NULL;

  return(tode);
}

int main()
{

  /* Constructed binary tree is
            1
          /   \
        2      3
      /  \
    4     5
  */
  struct nodeptr root = newtNode(1);
  root->left        = newtNode(2);
  root->right       = newtNode(3);
  root->left->left  = newtNode(4);
  root->left->right = newtNode(5);

  inOrder(root);

  getchar();
  return 0;
}
