#include <bits/stdc++.h>
using namespace std;

// Structure for Singly Linked List.
struct Node{
    int data;
    Node* next;
};

// Insert at Head of a Singly Linked List.
void insert_at_head(Node* &head, int val)
{
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL) // Corner case
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

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

// Insert at Any Position.
void insert_at_any_pos(Node* &head, int val, int index)
{
    if(index == 0) // Corner case: Index = 0 -> Insert at Head
    {
        insert_at_head(head, val);
        return;
    }
    
    Node* temp = head;
    for(int i=0;i<index-1;i++)
    {
        temp = temp->next;
    }
    // temp stops at (index-1)

    if(temp == NULL) // Corner case: the desired index doesn't exist.
    {
        return;
    }
    
    if(temp->next == NULL) // Corner case: If (index-1) is the tail.
    {
        insert_at_tail(head, val);
        return;
    }

    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    newNode->next = temp->next;
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

    insert_at_tail(head, 20); // Insert at tail.
    insert_at_tail(head, 30);

    insert_at_head(head, 10); // Insert at head.

    insert_at_any_pos(head, 40, 3); // Insert at any position.

    display(head); // Calls a function that displays the values of a Singly Linked List.

    return 0;
}
