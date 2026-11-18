// Insertion Sort Implementation:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Take the size of the array from the user.
    int n;
    cout << "Array Size: ";
    cin >> n;

    // Input the Array.
    int a[n];
    cout << "Insert Array: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    // Insertion Sort Algorithm:
    for(int i=1;i<n;i++)
    /* Since the 1st value has no other value before it to compare with
    so 1 loop is less in this specific for loop*/
    {
        int current = a[i];     // element to be inserted
        int j = i-1;            // last index of the sorted part

        // Bounds check (j>=0) comes first to avoid reading a[-1]
        while(j>=0 && a[j]>current)
        {
            a[j+1] = a[j];      // shift larger element to the right
            j--;
        }

        a[j+1] = current;       // insert current at its correct position
    }

    // Prints the Updated Array.
    cout << "Updated Array: ";
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}