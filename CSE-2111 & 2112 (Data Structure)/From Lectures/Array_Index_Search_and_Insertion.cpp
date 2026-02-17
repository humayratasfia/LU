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
    for(int i=0;i<y;i++)
    {
        if(a[i] == n)
        {
            cout << i << endl;
            
            cout << "Insert: "; // Asks for the value that the user wants to insert in that index.
            int new_val;
            cin >> new_val;

            for(int j=y;j>=i;j--)
            {
                if(j==i)
                {
                    a[i] = new_val; // Inserts the new value in that index.
                    break;
                }
                a[j] = a[j-1]; // Shifts the values in the array.
            }

            cout << "New Array: "; // Prints the new array.
            for(int j=0;j<=y;j++)
            {
                cout << a[j] << " ";
            }
            break;
        }
    }
    return 0;
}