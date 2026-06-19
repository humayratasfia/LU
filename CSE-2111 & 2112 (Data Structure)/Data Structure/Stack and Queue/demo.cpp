#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

Node* front = NULL;
Node* back = NULL;

// Push value at back of queue
void push(int item)
{
    Node* newNode = new Node();

    newNode->data = item;
    newNode->next = NULL;

    // If queue is empty
    if(front == NULL && back == NULL)
    {
        front = newNode;
        back = newNode;
    }
    else
    {
        back->next = newNode;
        back = newNode;
    }

    cout << item << " inserted into queue" << endl;
}

// Pop value from front
void pop()
{
    if(front == NULL && back == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }

    int item = front->data;

    // Only one element
    if(front == back)
    {
        delete front;
        front = NULL;
        back = NULL;
    }
    else
    {
        Node* temp = front;
        front = front->next;

        delete temp;
    }

    cout << item << " removed from queue" << endl;
}

// Display queue
void display()
{
    if(front == NULL && back == NULL)
    {
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* temp = front;

    cout << "Queue elements: ";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    int x, item;

    while(1)
    {
        cout << "\n1 for push\n2 for pop\n3 for display\n0 for exit\n";
        cin >> x;

        if(x == 1)
        {
            cout << "Item: ";
            cin >> item;

            push(item);
        }
        else if(x == 2)
        {
            pop();
        }
        else if(x == 3)
        {
            display();
        }
        else if(x == 0)
        {
            break;
        }
        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}