#include <bits/stdc++.h>
using namespace std;

int stksize, top = -1;

// Push value in top of the stack.
void push(int item, int stk[])
{
    if(top == stksize-1)
    {
        cout << "Overflow" << endl;
        return;
    }
    top++;
    stk[top] = item;
}

// Pop value from top of the stack.
void pop(int stk[])
{
    if(top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    int item = stk[top]; // why?
    top--;
}

void display(int stk[])
{
    for(int i=0; i<=top; i++)
    {
        cout << stk[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Insert size of the stack.
    cout << "Enter the size of the stack: " ;
    cin >> stksize;

    int stk[stksize];

    int x, item;
    while(1)
    {
        cout << "1 for push \n2 for pop \n3 for display\n";
        cin >> x;

        if(x == 1)
        {
            cout << "Item: ";
            cin >> item;
            push(item, stk);
        }
        else if(x == 2)
        {
            pop(stk);
        }
        else if(x == 3)
        {
            display(stk);
        }
        else if(x == 0)
        {
            break;
        }
        
    }
    return 0;
}