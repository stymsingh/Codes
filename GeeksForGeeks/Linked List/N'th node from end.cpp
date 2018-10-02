#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr next;
};

//auxiliary function to reverse a link list
nodeptr reverse(nodeptr head)
{
    if(head == NULL) return 0;
    nodeptr temp = head;
    nodeptr prev = NULL;
    nodeptr next = NULL;
    while(temp!=NULL)
    {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    head = prev;
}

//recursive function to count the length
int getCount(struct node* head)
{
   if (head == NULL)
       return 0;

   // count is 1 + count of remaining list
   return 1 + getCount(head->next);
}

// function to get the middle node of a Link List
int getNthNodefromEnd(nodeptr head, int key)
{
    int size = getCount(head);
    if(key > size) return 0;
    if(head == NULL) return 0;
    if(key == 0) return (head->data);
    head  = reverse(head);
    nodeptr cur = head;
    int count = 0;
    while(cur!=NULL && count<key)
    {
        count++;
        cur = cur->next;
    }
    //return(cur->data);
    if(cur!=NULL) std::cout << cur->data;
}

// function to create a node
nodeptr newNode(int data)
{
    nodeptr nptr  = new node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

// function to push node in a link list
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));

    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

// function to print a link list
void printList(nodeptr head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main()
{
    nodeptr head = NULL;
    // create linked 35->15->4->20
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);

    // Before function call
    printf("\nLinked list before calling swapNodes() ");
    printList(head);

    // std::cout << "\nthe reversed link list is: " << '\n';
    // nodeptr temp = reverse(head);
    // std::cout << " " << '\n';
    // printList(temp);

    // after getNthNodefromEnd() function call
    printf("\nOutput before calling getNthNodefromEnd() is ");
    getNthNodefromEnd(head,3);
    return 0;
}
