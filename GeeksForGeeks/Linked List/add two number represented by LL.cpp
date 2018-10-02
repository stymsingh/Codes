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
        cout<< head->data <<" ";
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
    /* Add two numbers represented by Link List */
/****************************************************************/
nodeptr addTwoLists(nodeptr first, nodeptr second)
{
    int carry = 0;
    int sum;
    nodeptr res = NULL;
    nodeptr temp = NULL;
    nodeptr prev = NULL;
    while (first!=NULL || second!=NULL) {
        sum = carry +  (first? first->data:0) + (second? second->data: 0);
        carry = (sum>=10)?1:0;
        sum = sum % 10;
        temp = newNode(sum);
        if(res == NULL)
            res = temp;
        else
            prev->next = temp;

        prev = temp;
        if (first) first = first->next;
        if (second) second = second->next;
    }
    if(carry > 0)
        temp->next = newNode(carry);

    return res;
}

/****************************************************************/
int main(void)
{
    nodeptr res = NULL;
    nodeptr first = NULL;
    nodeptr second = NULL;

    // create first list 7->5->9->4->6
    push(&first, 6);
    push(&first, 4);
    push(&first, 9);
    push(&first, 5);
    push(&first, 7);
    printf("\nFirst List is: ");
    printList(first);

    // create second list 8->4
    push(&second, 4);
    push(&second, 8);
    printf("\nSecond List is: ");
    printList(second);

    // Add the two lists and see result
    res = addTwoLists(first, second);
    printf("\nResultant list is: ");
    printList(res);

   return 0;
}
