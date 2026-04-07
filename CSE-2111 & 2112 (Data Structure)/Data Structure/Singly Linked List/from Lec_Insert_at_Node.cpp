#include <bits/stdc++.h>
using namespace std;

// Structure for Singly Linked List.
struct Node{
    int data;
    Node* next;
};

// Creates the node of a Linked List.
Node* create_node(int val, Node* head)
{
    Node* new_node = new Node;
    // If there is no enough storage in PC then the value of new_node will be NULL.

    if(new_node == NULL)
    {
        cout << "Overflow" << endl;
        exit(1);
    }

    new_node->data = val;
    new_node->next = head;

    return new_node;
}

// From Class Lecture - Insert at Head
Node* insert_at_head(int val, Node* head)
{
    return create_node(val, head);
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
    Node* head = NULL; // Pointer to starting starting node.
    Node *first, *second, *third;

    first = create_node(45, head); // Creates the first node.
    head = first;

    second = create_node(30, first->next); // Creates the second node.
    first->next = second;

    third = create_node(200, second->next); // Creates the third node.
    second->next = third;

    head = insert_at_head(10, head);
    head = insert_at_head(20, head);
    head = insert_at_head(30, head);

    display(head); // Calls a function that displays the values of a Singly Linked List.

    head = head->next; // Deleting at head.

    display(head);

    return 0;
}