#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr next;
};

// iterative function to count the length
int length(nodeptr head)
{
    if(head == NULL) return 0;
    int count=0;
    while(head!=NULL)
    {
        count+=1;
        head = head->next;
    }return count;
}

/*//recursive function to count the length
int getCount(struct Node* head)
{
    if (head == NULL)
        return 0;

    // count is 1 + count of remaining list
    return 1 + getCount(head->next);
}*/


nodeptr print(nodeptr head)
{
    nodeptr cur = head;
    while(cur!=NULL)
    {
        std::cout << cur->data << " -> ";
        cur = cur->next;
    }
    cout<<"NULL";
}

// function to create a node
nodeptr newNode(int data)
{
    nodeptr nptr  = new node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

int main()
{
    nodeptr head = NULL;
    head = newNode(1);
    head->next = newNode(3);
    head->next->next = newNode(1);
    head->next->next->next = newNode(2);
    head->next->next->next->next = newNode(1);
    std::cout << "\n";
    print(head);
    std::cout <<"\n" << length(head);
}
