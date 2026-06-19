#include <bits/stdc++.h>
using namespace std;

/*
 * CIRCULAR QUEUE
 * --------------
 * A circular queue reuses empty slots at the front that were freed by pop().
 * Instead of moving forward endlessly like a linear queue, it wraps around
 * using the formula: (index + 1) % qsize
 *
 * Empty state : front == -1 && back == -1
 * Full state  : (back + 1) % qsize == front
 *
 * Visual (qsize = 4):
 *   Index:  0    1    2    3
 *          [50] [60] [__] [30]
 *                ↑         ↑
 *               back      front   ← back has wrapped around!
 */

int qsize;
int front = -1;   // Points to the first (oldest) element
int back  = -1;   // Points to the last (newest) element


// ─────────────────────────────────────────────
//  PUSH — Insert an element at the back
// ─────────────────────────────────────────────
void push(int item, int q[])
{
    // OVERFLOW CHECK
    // If the next position of back (with wrap) reaches front, the queue is full.
    // Example (qsize=4): back=3, front=0 → (3+1)%4 = 0 = front → FULL
    if((back + 1) % qsize == front)
    {
        cout << "Overflow! Queue is full." << endl;
        return;
    }

    // FIRST ELEMENT CASE
    // Both front and back start at -1 (empty state).
    // On the very first push, move both to index 0.
    if(front == -1 && back == -1)
    {
        front = 0;
        back  = 0;
    }
    else
    {
        // NORMAL CASE — Move back one step forward.
        // % qsize makes it wrap: if back was at last index (qsize-1),
        // (back+1) % qsize = 0, so it goes back to the beginning.
        back = (back + 1) % qsize;
    }

    // Place the item at the new back position
    q[back] = item;
}


// ─────────────────────────────────────────────
//  POP — Remove the element from the front
// ─────────────────────────────────────────────
void pop(int q[])
{
    // UNDERFLOW CHECK
    // front == -1 && back == -1 means the queue is empty.
    if(front == -1 && back == -1)
    {
        cout << "Underflow! Queue is empty." << endl;
        return;
    }

    // LAST ELEMENT CASE
    // If front and back point to the same index, there is only 1 element left.
    // After removing it, reset both to -1 (empty state).
    if(front == back)
    {
        front = -1;
        back  = -1;
        return;
    }

    // NORMAL CASE — Move front one step forward.
    // We don't actually delete the data — we just move front past it.
    // That slot will be overwritten the next time push() uses it.
    // % qsize makes it wrap: if front was at the last index,
    // it wraps back to 0.
    front = (front + 1) % qsize;
}


// ─────────────────────────────────────────────
//  DISPLAY — Print all elements front to back
// ─────────────────────────────────────────────
void display(int q[])
{
    // If queue is empty, nothing to display
    if(front == -1 && back == -1)
    {
        cout << "The queue is empty!" << endl;
        return;
    }

    // WHY while loop instead of for loop?
    // When the queue has wrapped around, front > back.
    // Example: front=3, back=1 → a simple for(i=front; i<=back; i++)
    // would immediately fail. The while loop handles both cases correctly.

    int i = front;
    while(1)
    {
        cout << q[i] << " ";

        if(i == back) break;          // We just printed the last element, stop.

        i = (i + 1) % qsize;         // Move to next index, wrap if needed.
    }
    cout << endl;
}


// ─────────────────────────────────────────────
//  MAIN
// ─────────────────────────────────────────────
int main()
{
    cout << "Enter the size of the queue: ";
    cin >> qsize;
    int q[qsize];   // Array that holds the queue elements

    int x, item;
    while(1)
    {
        cout << "\n1 for push\n2 for pop\n3 for display\n0 to exit\n";
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