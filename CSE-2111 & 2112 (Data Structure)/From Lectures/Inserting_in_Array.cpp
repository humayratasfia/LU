#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Size: "; // Asks for size of the array.
    int y;
    cin >> y;
    int a[y+1];

    cout << "Array Input: "; // Takes array input.
    for(int i=0;i<y;i++)
    {
        cin >> a[i];
    }

    cout << "Search for: "; // Input the value you are searching for.
    int n;
    cin >> n;

    cout << "Found at Index: "; // If found then prints the index no.
    int j = 0;
    while(a[j] != n) // Keeps track of index.
    {
        j++;
    }
    cout << j << endl;

    // Shift the values.
    for(int i=y-1; i>=j; i--)
    {
        a[i+1] = a[i];
    }

    cout << "Insert: "; // Asks for the value that the user wants to insert.
    int new_val;
    cin >> new_val;
    a[j] = new_val;

    cout << "New Array: "; // Prints the new array.
    for(int i=0;i<=y;i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}