#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr next;
};

bool search(nodeptr head, int key)
{
    if(head == NULL) return false;
    nodeptr cur = head;
    while(cur!=NULL)
    {
        if(cur->data == key) return true;
        cur = cur->next;
    }
    return false;
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
    head = newNode(10);
    head->next = newNode(30);
    head->next->next = newNode(11);
    head->next->next->next = newNode(21);
    head->next->next->next->next = newNode(14);
    int key = 21;
    search(head, 21)? printf("Yes") : printf("No");
    return 0;
}
