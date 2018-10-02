/** Adobe , Microsoft, Snapdeal, Paytm **/

#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*

/****************************************************************/
struct node
{
    int data;
    nodeptr next;
};

/****************************************************************/
nodeptr newNode(int data)
{
    nodeptr nptr  = new node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

/****************************************************************/
void push(nodeptr *head_ref, int new_data)
{
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));

    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

/****************************************************************/
void printList(nodeptr head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

/****************************************************************/
nodeptr reverse(nodeptr head)
{

    // Base Case
    if(head == NULL) return 0;

    nodeptr cur = head;
    nodeptr prev = NULL;
    nodeptr next = NULL;
    while(cur!=NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
}

/****************************************************************/
    /* Reverse Link List in size of K*/
/****************************************************************/
nodeptr ReverseK(nodeptr head, int key)
{
    nodeptr cur = head;
    nodeptr next = NULL;
    nodeptr prev = NULL;
    int count = 0;
    while(cur!=NULL && count<key)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
        count ++;
    }
    if(next!=NULL){
        head->next = ReverseK(next, key);
    }

    return prev; // prev is the new head of the input list
}

/****************************************************************/
int main(void)
{
    nodeptr head = NULL;

     /* Created Linked list is 1->2->3->4->5->6->7->8->9 */
     push(&head, 9);
     push(&head, 8);
     push(&head, 7);
     push(&head, 6);
     push(&head, 5);
     push(&head, 4);
     push(&head, 3);
     push(&head, 2);
     push(&head, 1);

     printf("\nGiven linked list \n");
     printList(head);
     head = ReverseK(head, 3);

     printf("\nReversed Linked list \n");
     printList(head);

     return(0);
}
