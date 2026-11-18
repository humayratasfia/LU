// Merged Sort using Recursion:

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int h)
{
    int i=l, j = mid + 1, k=0;

    int temp[h-l+1];

    while(i<=mid && j<=h)
    {
        if(a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
            k++;
        }
        else{
            temp[k] = a[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while(j<=h)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for(int i=l; i<=h; i++)
    {
        a[i] = temp[i-l];
    }
}

void Merge_Sort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid = (l+h) / 2;
    
        Merge_Sort(a, l, mid);

        Merge_Sort(a, mid+1, h);

        merge(a, l, mid, h);
    }
}

int main()
{
    int m;
    cout << "Array Size: ";
    cin >> m;

    int a[m];
    cout << "Insert the Array: ";
    for(int i=0;i<m;i++)
    {
        cin >> a[i];
    }
    int l = 0, h = m-1;
    Merge_Sort(a, l, h);

    cout << "Merged Array";
    for(int i=0; i<m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}