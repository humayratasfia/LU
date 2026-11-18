// https://vjudge.net/contest/865729#problem/F
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int j=1; j<=t; j++)
    {
        int n;
        cin >> n;

        double a[n];

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        double sum = 0;
        for(int i=0; i<n; i++)
        {
            sum = a[i] + sum;
        }
        double calc = sum / (float) n;

        cout << "Case " << j << ": " << fixed << setprecision(3) << calc <<endl; 
    }
    return 0;
}