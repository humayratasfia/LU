#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Array Size: ";
    int n; // Taking size of the array.
    cin >> n;
    int a[n]; // Declaring the array.

    cout << "Array: ";
    for(int i=0;i<n;i++) // Input array values
    {
        cin >> a[i];
    }

    cout << "Index you want to delete: ";
    int x; // Taking index value.
    cin >> x;

    for(int i=x;i<n-1;i++) // Shifting the values.
    {
        a[i] = a[i+1];
    }

    a[n-1] = 0; 

    cout << "Updated Array: ";
    for(int i=0;i<n;i++) // Printing the array.
    {
        cout << a[i] << " ";
    }
    return 0;
}