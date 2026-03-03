#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    int a[n];
    cout << "Inserted Array: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int item;
    cout << "Item you are looking for: ";
    cin >> item;

    int l = 0; // Lower Bound
    int h = n-1; // Higher Bound
    int mid = (l + h) / 2; // Mid value.

    while(l<=h) // Binary Search
    {
        if(item == a[mid])
        {
            cout << "Item has been found at index " << mid << "." << endl;
            return 0;
        }
        else if(item > a[mid])
        {
            l = mid + 1; // If item is greater than mid, updates lower bound.
            mid = (l + h) / 2;
        }
        else if(item < a[mid])
        {
            h = mid - 1; // If item is lesser than mid, updates higher bound.
            mid = (l + h) / 2;
        }
    }

    cout << "Item has not been found." << endl;

    return 0;
}