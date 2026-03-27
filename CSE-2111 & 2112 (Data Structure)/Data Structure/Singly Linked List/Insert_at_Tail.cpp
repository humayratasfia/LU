#include <bits/stdc++.h>
using namespace std;

// Structure for Singly Linked List.
struct Node{
    int data;
    Node* next;
};

// Insert at Tail of a Singly Linked List.
void insert_at_tail(Node* &head, int val)
{
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL) // Corner case
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp is at the tail.
    temp->next = newNode;
}

// Display the Linked List.
void display(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node* head = NULL; 

    insert_at_tail(head, 10);
    insert_at_tail(head, 20);

    display(head); // Calls a function that displays the values of a Singly Linked List.

    return 0;
}
