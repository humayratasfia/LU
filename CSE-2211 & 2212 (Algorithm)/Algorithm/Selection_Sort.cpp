// Selection Sort Implementation:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;

    int a[n];
    cout << "Insert Array: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    // Selection Sort:
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
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