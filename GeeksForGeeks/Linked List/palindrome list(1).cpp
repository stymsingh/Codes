#include<bits/stdc++.h>
using namespace std;
#define nodeptr Node*

/*********************************************************/
//Program to check if a link list is palindrome
/*********************************************************/
 struct Node
 {
     char data;
     nodeptr next;
 };

 /*********************************************************/
nodeptr newNode(int data)
{
    nodeptr nptr = new Node;
    nptr->data = data;
    nptr->next = NULL;
    return nptr;
}

/*********************************************************/
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

/*********************************************************/
void push(nodeptr *head, char data)
{
    if(head == NULL) return;
    nodeptr temp = newNode(data);
    temp->next =(*head);
    (*head) = temp;
}

/*********************************************************/
                    /*Length of LInk List*/
/*********************************************************/
int getCount(nodeptr head)
{
    if (head == NULL)
        return 0;

    // count is 1 + count of remaining list
    return 1 + getCount(head->next);
}

/*********************************************************/
                    /* Middle of Link List */
/*********************************************************/
nodeptr printMiddle(nodeptr head)
{
    nodeptr slow_ptr = head;
    nodeptr fast_ptr = head;

    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        return(slow_ptr);
    }
}

/*********************************************************/
                      /* METHOD 2*/
/*********************************************************/
nodeptr reverse(nodeptr head)
{
    nodeptr prev= NULL;
    nodeptr next = NULL;
    nodeptr cur = (head);
    while (cur!=NULL) {
        next = cur->next;
        cur->next = prev;
        prev= cur;
        cur = next;
    }
    (head) = prev;
}
/*********************************************************/
                      /* METHOD 2*/
/*********************************************************/
bool palindromeList(nodeptr head)
{
    int size = getCount(head);
    std::cout << "\nsize of the link list is: " << size;
    nodeptr mid = printMiddle(head);
    std::cout << "\nthe middle of the link list is: " << mid->data;
    nodeptr cur = head;
    nodeptr temp = mid->next;
    nodeptr t = reverse(temp);
    while(t!=NULL)
    {
        if(cur->data != t->data) return false;
        else
            cur = cur->next;
            t = t->next;
    } return true;

}
/*********************************************************/
int main()
{
    struct nodeptr head = NULL;
    char str[] = "wasitacatisaw";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
       push(&head, str[i]);
       printList(head);
       //palindromeList(head);
    }

    if(palindromeList(head))
        std::cout << "Is a Palindrome" << '\n';
    else
        std::cout << "Not a Palindrome" << '\n';
    return 0;
}
