#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*

/**************************************************************/
//Program to find intresection point of two link list
/**************************************************************/
 struct Node
 {
     int data;
     nodeptr next;
 };

 /*************************************************************/
 nodeptr newNode(int data)
{
    nodeptr nptr = new Node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

/**************************************************************/
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

/**************************************************************/
nodeptr push(nodeptr head, int data)
{
    if(head == NULL) return 0;
    nodeptr temp = newNode(data);
    temp->next = head;
    head = temp;
    return head;
}

/*********************************************************/
                    /*Length of LInk List*/
/*********************************************************/
int length(nodeptr head)
{
    if (head == NULL)
        return 0;

    // count is 1 + count of remaining list
    return 1 + length(head->next);
}

/**************************************************************/
    /*Intresection of two linked list*/
/**************************************************************/
nodeptr getIntesectionNode(struct nodeptr A, struct nodeptr B) {
    int m = length(A);
    int n = length(B);
    int d = n - m;
    // Corner Case : if m > n
    // In this case we are swapping the two lists, so that
    // B always points to the longer list.
    if(m > n) {
        struct Node* temp = A;
        A = B;
        B = temp;
        d = m - n;
    }
    int i;
    for(i=0;i<d;i++) {
        B = B->next;
    }
    // Now both A and B are equidistant from merging node
    //as now B has traversed the extra distance
    while(A != NULL && B != NULL) {
        if(A == B) {
            return A;
        }
        A = A->next;
        B = B->next;
    }
    // Corner Case 2: no merge point available
    return NULL;
}

/**************************************************************/
int main()
{
  struct Node* newNode;
  struct Node* head1 = new Node;
  head1->data  = 10;

  struct Node* head2 = new Node;
  head2->data  = 3;

  newNode = new Node;
  newNode->data = 6;
  head2->next = newNode;

  newNode = new Node;
  newNode->data = 9;
  head2->next->next = newNode;

  newNode = new Node;
  newNode->data = 15;
  head1->next = newNode;
  head2->next->next->next  = newNode;
  head2->next->next->next->next = NULL;

  newNode = new Node;
  newNode->data = 30;
  head1->next->next= newNode;

  head1->next->next->next = NULL;

  nodeptr C = getIntesectionNode(head1, head2);
  printf("\n The node of intersection is %d \n",
          C->data);

    return 0;
}
