#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*

/*********************************************************/
//Program to remove duplicates from a sorted link list
/*********************************************************/
 struct Node
 {
     int data;
     nodeptr next;
 };

 /*******************************************************/
 nodeptr newNode(int data)
{
    nodeptr nptr = new Node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

/********************************************************/
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

/********************************************************/
nodeptr push(nodeptr *head, int data)
{
    if(*head == NULL) return 0;
    nodeptr temp = newNode(data);
    temp->next = (*head);
    (*head) = temp;
    return (*head);
}

/*********************************************************/
    /*remove duplicates from a sorted link list*/
/*********************************************************/
void remove_duplicates(nodeptr head)
{
    // Base Case
    if(head  == NULL) return;
    nodeptr cur = head;
    nodeptr next;
    while(cur->next!=NULL)
    {
        // in this two corres. nodes have same data
        if(cur->data == cur->next->data)
        {
            next = cur->next->next;
            free(cur->next);
            cur->next = next;
        }
        //else increment current
        cur = cur->next;
    }
}

/*********************************************************/
int main()
{
    nodeptr head = NULL;

    // Created linked list will be 11->11->11->13->13->20 */
    push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);

    printf("\n Linked list before duplicate removal  ");
    printList(head);

    /* Remove duplicates from linked list */
    remove_duplicates(head);

    std::cout << "Linked list after duplicate removal" << '\n';
    printList(head);

    return 0;
}
