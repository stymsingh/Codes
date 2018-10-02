#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr next;
};

nodeptr swap(nodeptr head, int k1, int k2)
{
    nodeptr cur1 = head;
    nodeptr cur2 = head;
    nodeptr temp = NULL;
    nodeptr temp2 = NULL;
    while(cur1!=NULL)
    {
        if(cur1->data == k1){
            temp = cur1;
        }
        cur1 = cur1->next;
    }
    while(cur2!=NULL){
        if(cur2->data == k2){
            temp2 = cur2;
        }
        cur2 = cur2->next;
    }
    int swap;
    swap = temp->data;
    temp->data = temp2->data;
    temp2->data = swap;
    return head;
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
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    // Before function call
    printf("\n Linked list before calling swapNodes() ");
    printList(head);


    //calling the function
    swap(head, 4, 3);

    // After calling the function
    printf("\n Linked list after calling swapNodes() ");
    printList(head);


}
