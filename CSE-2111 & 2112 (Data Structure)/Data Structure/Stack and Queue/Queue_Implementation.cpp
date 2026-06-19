#include <bits/stdc++.h>
using namespace std;

int qsize, front = -1, back = -1;

// Push value in back of the queue.
void push(int item, int q[])
{
    if(back == qsize-1) 
    {
        cout << "Overflow" << endl;
        return;
    }
    if(front == -1 && back == -1)
    {
        front++;
        back++;
    }
    else{
        back++;
    }
    q[back] = item;
}

// Pop value from front of the queue.
void pop(int q[])
{
    if(front == -1 && back == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    if(front == back)
    {
        front = -1;
        back = -1;
        return;
    }
    front++;
}

void display(int q[])
{
    if(front == -1 && back == -1) // Corner case
    {
        cout << "The queue is empty!" << endl;
        return;
    }

    for(int i=front; i<=back; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Insert size of the queue.
    cout << "Enter the size of the queue: " ;
    cin >> qsize;

    int q[qsize];

    int x, item;
    while(1)
    {
        cout << "1 for push \n2 for pop \n3 for display\n";
        cin >> x;
        
        if(x == 1)
        {
            cout << "Item: ";
            cin >> item;
            push(item, q);
        }
        else if(x == 2)
        {
            pop(q);
        }
        else if(x == 3)
        {
            display(q);
        }
        else if(x == 0)
        {
            break;
        }
        
    }
    return 0;
}