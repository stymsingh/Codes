#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
	int data;
	struct node* left, *right;
};

/* Function prototypes */
void printGivenLevel(struct node* root, int level);
int height(struct node* node);
struct node* newNode(int data);
void printLevelOrder(struct node* root)
{
	if(root == NULL)
        return;

    //creating a queue
    //queue<pair<nodeptr, int> >q;
	queue<nodeptr>q;
	nodeptr temp = root;
	q.push(root);
	while(!q.empty())
	{
		nodeptr temp= q.front();
		std::cout << temp->data<<" ";
		q.pop();
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
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
