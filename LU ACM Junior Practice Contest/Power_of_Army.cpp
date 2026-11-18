// https://vjudge.net/contest/865729#problem/G
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];

            if(a[i] > mx)
                mx = a[i];
            if(a[i] < mn)
                mn = a[i];
        }

        cout << mx - mn << endl;
    }
    return 0;
}