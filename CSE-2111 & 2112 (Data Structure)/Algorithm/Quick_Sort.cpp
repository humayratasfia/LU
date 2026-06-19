#include <bits/stdc++.h>
using namespace std;

// Function Declaration.
int Partition(int a[], int l, int h);

// Quick Sort Implementation.
void Quick_Sort(int a[], int l, int h)
{
    if(l < h)
    {
        int j = Partition(a, l, h);

        Quick_Sort(a, l, j-1);
        Quick_Sort(a, j+1, h);
    }
}

int Partition(int a[], int l, int h)
{
    int pivot = a[l];

    int i = l, j = h;

    while(i<j)
    {
        while(a[i] <= pivot)
        {
            i++;
        }
        while(a[j] > pivot)
        {
            j--;
        }
        if(i < j)
        {
            swap(a[i], a[j]);
        }
    }

    swap(a[l], a[j]);

    return j;
}

int main()
{
    int n;
    cout << "Size of the Array: ";
    cin >> n;

    int a[n];
    cout << "Insert Array: ";
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int l = 0, h = n-1;

    Quick_Sort(a, l, h); // Calling a function to implement Quick Sort.

    cout << "Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}