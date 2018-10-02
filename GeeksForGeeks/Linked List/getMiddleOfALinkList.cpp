#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct node
{
    int data;
    nodeptr next;
};

//auxiliary function
int size(nodeptr head)
{
    if(head == NULL) return 0;
    else
        return(1+size(head->next));
}

// function to get the middle node of a Link List
int getMiddleNode(nodeptr head)
{
    if(head == NULL) return 0;
    int x = size(head);
    //cout<<"\n"<<x;
    nodeptr slow_ptr = head;
    nodeptr fast_ptr = head;
    if(x%2 != 0)
    {
        while (slow_ptr && fast_ptr && fast_ptr->next != NULL)
        {
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;

        }
        std::cout <<"\n"<< slow_ptr->data << '\n';
    }
    else
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;

        }
        nodeptr p = slow_ptr->next;
        int mid = (p->data + slow_ptr->data)/2;
        std::cout <<"mid is: "<< mid << '\n';
    }
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
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head,3);
    push(&head, 2);
    push(&head, 1);

    // Before function call
    printf("\nLinked list before calling swapNodes() ");
    printList(head);


    //calling the function
     getMiddleNode(head);



}
