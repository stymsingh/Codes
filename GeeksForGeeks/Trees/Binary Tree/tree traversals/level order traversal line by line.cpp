#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
	int data;
	struct node* left, *right;
};

struct node* newNode(int data);
void printLevelOrder(struct node* root)
{
	if(root == NULL)
        return;

    //creating a queue
    queue<pair<nodeptr, int> >q;
	int preLevel = 0;
	int curLevel = 0;
	nodeptr temp = root;
	q.push({root,curLevel});
	while(!q.empty())
	{
		pair<nodeptr, int>pii= q.front();
		int num = pii.first->data;
		int curLevel=pii.second;
		q.pop();
		if(curLevel==preLevel)
			std::cout << num<<"--> ";
		else
		{
			preLevel = curLevel;
			std::cout << "\n";
			std::cout << num <<"--> ";
		}

		if(pii.first->left)
			q.push({pii.first->left,curLevel+1});
		if(pii.first->right)
			q.push({pii.first->right, curLevel+1});


	}
}


struct node* newNode(int data)
{
	struct node* node = (struct node*)
						malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return(node);
}

int main()
{
	struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);

	return 0;
}
