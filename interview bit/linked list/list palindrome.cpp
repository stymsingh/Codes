#include<bits/stdc++.h>
using namespace std;
struct node
{
    string data;
    node* next;
};
bool isPalindromeUtil(string str)
{
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
            return false;
        return true;
    }
}

bool isPalindrome(struct node*root)
{
    string str ="";
    while(root!=NULL)
    {
        str.append(root->data);
        root = root->next;
    }
    isPalindromeUtil(str);
}

void printList(node *node)
{
    while (node != NULL)
    {
        cout << node->data << " -> ";
        node = node->next;
    }
    printf("NULL\n");
}

/* Function to create a new node with given data */
node *newnode(const char *str)
{
    node *new_node = new node;
    new_node->data = str;
    new_node->next = NULL;
    return new_node;
}

/* Driver program to test above function*/
int main()
{
    node *head = newnode("a");
    head->next = newnode("bc");
    head->next->next = newnode("d");
    head->next->next->next = newnode("dcb");
    head->next->next->next->next = newnode("a");

    isPalindrome(head)? printf("true\n"):
                        printf("false\n");

    return 0;
}
