#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Size: ";
    int n;
    cin >> n;

    int a[n];

    cout << "Inserted Array: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    cout << "Bubble Sort: " << endl;
    for(int i=0;i<n-1;i++) // Bubble Sort Optimized - T.C: O(N^2)
    {
        int swapped = 0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                swapped++;
            }
        }

        cout << "Pass " << i+1 << ": ";
        for(int j=0;j<n;j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;

        if(swapped == 0) // In a pass if no swap happens then the loop breaks.
        {
            break;
        }
    }

    cout << "Updated Array: ";
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}