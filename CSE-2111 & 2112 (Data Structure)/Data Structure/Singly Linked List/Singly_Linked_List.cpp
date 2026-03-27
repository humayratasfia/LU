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

    display(head); // Calls a function that displays the values of a Singly Linked List.

    return 0;
}

// HW: Insert at the beginning, 
// Insert at the end and 
// Insert in the middle.