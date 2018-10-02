#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*

/***************************************************/
//Program to insert a node in a sorted link list
/***************************************************/
 struct Node
 {
     int data;
     nodeptr next;
 };

 /**************************************************/
nodeptr newNode(int data)
{
    nodeptr nptr = new Node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

/****************************************************/
void printList(nodeptr head)
{
    nodeptr cur = head;
    while(cur!=NULL)
    {
        std::cout << cur->data <<" -> " ;
        cur= cur->next;
    }
    std::cout << "NULL" << '\n';
}

/****************************************************/
void push(nodeptr *head, int data)
{
    if(head == NULL) return;
    nodeptr temp = newNode(data);
    temp->next =(*head);
    (*head) = temp;
}

/****************************************************/
nodeptr sorted_insert(nodeptr head, int key)
{
    nodeptr prev = NULL;
    nodeptr cur = (head);
    while(cur->data < key)
    {
        prev = cur;
        cur = cur->next;
    }
    nodeptr temp = newNode(key);
    prev->next = temp;
    temp->next = cur;
    return head;
}

/*******************************************************/
int main()
{
    /* Start with the empty list */
    nodeptr head = NULL;
    head = newNode(2);
    head->next = newNode(5);
    head->next->next = newNode(7);
    head->next->next->next = newNode(10);
    head->next->next->next->next = newNode(15);

    /* Link List before function call*/
    printList(head);

    /* defining the key to be inserted*/
    int key = 9;

    /* calling the function*/
    nodeptr res = sorted_insert(head, key);

    /* Link List after function call*/
    printList(res);

    return 0;
}
