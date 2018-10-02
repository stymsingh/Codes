#include<bits/stdc++.h>
using namespace std;
#define nodeptr node*
struct Node
{
    int data;
    struct Node* next;
};

/* Function to delete the entire linked list */
void deleteList(struct Node** head_ref)
{
   struct Node* current = *head_ref;
   struct Node* next;

   while (current != NULL)
   {
       next = current->next;
       free(current);
       current = next;
   }

   *head_ref = NULL;
}

// function to push node in a link list
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

    /* 1->12->1->4->1  */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    printf("\n Deleting linked list");
    deleteList(&head);

    printf("\n Linked list deleted");
}
