#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*

/*********************************************/
//Program to merge two sorted link list
/*********************************************/
 struct Node
 {
     int data;
     nodeptr next;
 };

 /*********************************************/
nodeptr newNode(int data)
{
    nodeptr nptr = new Node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

/*********************************************/
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

/*********************************************/
void push(nodeptr *head, int data)
{
    if(head == NULL) return;
    nodeptr temp = newNode(data);
    temp->next =(*head);
    (*head) = temp;
}

/*********************************************/
void reverse(nodeptr *head)
{

    // Base Case
    if(*head == NULL) return;

    nodeptr cur = *head;
    nodeptr prev = NULL;
    nodeptr next = NULL;
    while(cur!=NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *head = prev;

}

/*********************************************/
nodeptr SortedMerge(nodeptr p, nodeptr q, nodeptr sort)
{
    nodeptr newHead = NULL;
    if(p==NULL) return q;
    if(q==NULL) return p;
    if(p && q)
    {
        if(p->data <= q->data)
        {
            sort = p;
            p = sort->next;
        }
        else
        {
            sort = q;
            q = sort->next;
        }
    }
    newHead = sort;

    while(p!=NULL && q!=NULL)
    {
        if(p->data <= q->data)
        {
            sort->next = p;
            sort= p;
            p = sort->next;
        }
        else
        {
            sort->next = q;
            sort= q;
            q = sort->next;
        }
    }

    //if any of the two list is consumed first
    if(p == NULL) sort->next = q;
    if(q == NULL) sort->next = p;


    return newHead;
}

/*********************************************************/
int main()
{
    /* Start with the empty list */
    struct Node* res = NULL;
    struct Node* a = NULL;
    struct Node* b = NULL;

    /* Created lists, a: 5->10->15,  b: 2->3->20 */
    push(&a, 15);
    push(&a, 10);
    push(&a, 5);

    push(&b, 20);
    push(&b, 3);
    push(&b, 2);

    /* merge 2 sorted linked list */
    res = SortedMerge(a, b, res);

    std::cout << "Merged Linked List is: " << '\n';
    printList(res);

    std::cout << "Merged Linked List in reverse is: " << '\n';
    reverse(&res);
    printList(res);

    return 0;
}
