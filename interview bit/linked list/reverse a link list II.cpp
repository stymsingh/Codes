#include<bits/stdc++.h>
#define nodeptr Node*
using namespace std;
struct Node{
    int data;
    struct nodeptr next;
};
nodeptr reverseLL(nodeptr head){
    struct nodeptr current = head;
    struct nodeptr next = NULL;
    struct nodeptr prev = NULL;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

nodeptr reverseSection(nodeptr head,int m, int n){

    nodeptr prv=NULL;
    nodeptr cur=head;
    if(!head)
        return NULL;
    if(m == n)
        return head;

    for(int i=1;i<m;i++){
        if(cur){
            prv=cur;
            cur=cur->next;
        }
    }

    if(cur==NULL)return head;

    nodeptr prv2=prv;
    nodeptr cur2=cur;
    for(int i=m;i<=n;i++){
        if(cur2){
            prv2=cur2;
            cur2=cur2->next;
        }
    }

    if(prv2)prv2->next=NULL;
    nodeptr reversedHead = reverseLL(cur);

    if(prv)prv->next = reversedHead;
    cur =reversedHead;
    while(cur->next){
        cur=cur->next;
    }
    cur->next = cur2;
    return head;
    if(m>1)return head;

}

void push(struct Node** head_ref, int new_data)
{
    struct nodeptr new_node = (struct nodeptr) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
}

int main(void)
{
     struct nodeptr head = NULL;
     push(&head, 5);
     push(&head, 4);
     push(&head, 3);
     push(&head, 2);
     push(&head, 1);

     //printList(head);
     //head = reverseLL(head);
     //printList(head);
     //return 0;
     int m,n;
     m = 2;
     n = 4;
     printf("\nGiven linked list \n");
     printList(head);
     head = reverseSection(head, m , n);

     printf("\nReversed Linked list \n");
     printList(head);

     return(0);
}

/***************************************************************/
