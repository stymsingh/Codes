#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*

/*********************************************************/
//Program to sort a link list
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
void push(nodeptr *head, int data)
{
    if(head == NULL) return;
    nodeptr temp = newNode(data);
    temp->next =(*head);
    (*head) = temp;
}

/*********************************************************/
int size(nodeptr head)
{
    if(head == NULL) return 0;
    else
        return(1+size(head->next));
}

/********************************************************************/
        /* Merge the two linked list into a single LL */
/********************************************************************/
nodeptr merge(nodeptr A, nodeptr B){
    if(A == NULL){
        return B;
    }
    if(B == NULL){
        return A;
    }

    nodeptr head = NULL;

    if(A->data < B->data){
        head = A;
        A = A->next;
    }
    else{
        head = B;
        B = B->next;
    }

    nodeptr temp = head;

    while(A != NULL && B != NULL){
        if(A->data < B->data){
            temp->next = A;
            A = A->next;
        }
        else{
            temp->next = B;
            B = B->next;
        }
        temp = temp->next;
    }

    if(A != NULL){
        temp->next = A;
    }
    else{
        temp->next = B;
    }

    return head;
}

/********************************************************************/
   /* Split the linked list into two subsequent lists */
/********************************************************************/
nodeptr sortList(nodeptr A)
{
    nodeptr head = A;

    if(head == NULL || head->next == NULL){
        return head;
    }

    nodeptr start = A;
    nodeptr end = A->next;

    while(end != NULL && end->next != NULL){
        start = start->next;
        end = (end->next)->next;
    }

    end = start->next;
    start->next = NULL;

    return merge(sortList(head), sortList(end));

}

/********************************************************/
int main()
{
  nodeptr a = NULL;

  /* a: 2->3->20->5->10->15 */
  push(&a, 15);
  push(&a, 10);
  push(&a, 5);
  push(&a, 20);
  push(&a, 3);
  push(&a, 2);

  /* Printing the original Link List*/
  std::cout << "The original Link List is: " << '\n';
  printList(a);
  
  std::cout <<'\n';
  std::cout <<'\n';

  /* Sort the above created Linked List */
  nodeptr res = sortList(a);

  std::cout << "Sorted Linked List is: " <<'\n';
  printList(res);

  getchar();
  return 0;
}
