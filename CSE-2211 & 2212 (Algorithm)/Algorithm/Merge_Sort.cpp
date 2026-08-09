#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    
    // Sorted Array 1:
    cout << "Size of Array 1: ";
    cin >> m;
    int a[m];
    cout << "Insert Sorted Array 1: ";
    for(int l=0;l<m;l++)
    {
        cin >> a[l];
    }
    // Sorted Array 2:
    cout << "Size of Array 2: ";
    cin >> n;
    int b[n];
    cout << "Insert Sorted Array 2: ";
    for(int l=0;l<n;l++)
    {
        cin >> b[l];
    }

    int c[m+n];

    // Merge Sort Algorithm:
    int i=0, j=0, k=0;
    while(i<m && j<n){
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else{
            c[k] = b[j];
            j++;
            k++;
        }
    }
    for(;i<m;i++){
        c[k] = a[i];
        k++;
    }
    for(; j<n;j++)
    {
        c[k] = b[j];
        k++;
    }

    // Prints the Merged Array:
    cout << "Array after Merge Sort: ";
    for(int l=0;l<m+n;l++)
    {
        cout << c[l] << " ";
    }
    cout << endl;

    return 0;
}