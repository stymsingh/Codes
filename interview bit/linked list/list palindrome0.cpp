#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
bool isPalindromeUtil(string str)
{
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
            return false;

    }return true;
}

bool isPalindrome(struct node*root)
{
    string str="";
    while(root!=NULL)
    {
        char c = (char)(root->data+'0');
        str+=c;
        root=root->next;
    }
    return isPalindromeUtil(str);
}

void printList(node *node)
{
    while (node != NULL)
    {
        cout << node->data << " -> ";
        node = node->next;
    }

}

node *newnode(int data)
{
    node *new_node = new node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main()
{
    node *head = newnode(1);
    head->next = newnode(2);
    head->next->next = newnode(1);
    isPalindrome(head)? std::cout << "true": std::cout << "false" ;

    return 0;
}
