#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*
struct Node
{
    int data;
    nodeptr next;
};
/*############################################*/
/*
             APPROACH -1
// fucntion to detect loop in a link list using hash map
bool detectLoop(nodeptr h)
{
    unordered_set<nodeptr> s;
    while (h != NULL)
    {
        //if the node is already present
        if (s.find(h) != s.end())
            return true;

        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(h);

        h = h->next;
    }

    return false;
}
*/

/*############################################*/

//                APPROACH -2
// fucntion to detect loop in a link list using 2 pointers
bool detectLoop(nodeptr head)
{
    nodeptr slow_ptr = head;
    nodeptr fast_ptr = head;
    while (slow_ptr && fast_ptr  && fast_ptr->next != NULL)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        //if the are equal anytime it means there is a loop
        if( slow_ptr == fast_ptr) return true;

    }return false;
}

/*############################################*/

// function to push a node in a Link List
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
     new_node->data  = new_data;
     new_node->next = (*head_ref);
     (*head_ref)    = new_node;
}

/*############################################*/

//function to print the link List
void printList(nodeptr head)
{
    if(head == NULL) return;
    nodeptr cur = head;
    while(cur!=NULL)
    {
        std::cout << cur->data << "->";
        cur = cur->next;
    }
    std::cout << "NULL";
}

/*############################################*/

// Main() function
int main()
{
    struct Node* head = NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    /* Create a loop for testing */
    head->next->next->next->next = head;

    // calling the fucntion
    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";

    return 0;
}
