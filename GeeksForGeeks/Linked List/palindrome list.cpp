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
                 /* METHOD 1*/
/*********************************************************/

void palindromeList(nodeptr head)
{
    if(head == NULL) return;
    nodeptr cur = head;
    string str;
    string stp;
    stack<char>st;
    queue<char>q;
    while(cur!=NULL)
    {
        st.push(cur->data);
        q.push(cur->data);
        cur = cur->next;
    }

    while(!st.empty())
    {
        char s = st.top();
        st.pop();
        stp+=s;
    }

    while(!q.empty())
    {
        char s = q.front();
        str+=s;
        q.pop();
    }
    if(!str.compare(stp) )
    {
        // str and stp are equal
        std::cout << "Is Palindrome" << '\n';
    }
    else
        std::cout << "Not Palindrome" << '\n';
}

/*********************************************************/
int main()
{
    struct nodeptr head = NULL;
    char str[] = "abacaba";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
       push(&head, str[i]);
       printList(head);
       palindromeList(head);
    }

    return 0;
}
