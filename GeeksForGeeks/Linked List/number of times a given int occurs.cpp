#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*
struct Node
{
    int data;
    nodeptr next;
};

// function to return the number of times a given int occurs
int NumOfTimes(nodeptr head, int key)
{
    // Base Case
    if(head == NULL) return 0;
    int count=0;
    nodeptr cur = head;
    while(cur!=NULL)
    {
        if(cur->data == key){
            count++;
        }cur = cur->next;
    }
    if(count>0) return count;
    else return 0;
}

// function to push a node in a Link List
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
     new_node->data  = new_data;
     new_node->next = (*head_ref);
     (*head_ref)    = new_node;
}

int main()
{
    struct Node* head = NULL;

    /* 1->2->1->3->1  */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    // Calling the count function
    int occur  = NumOfTimes(head, 1);
    std::cout << "Count of 1 in the Link List: " << occur;

    return 0;
}
