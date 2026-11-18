// https://serious-oj.com/contests/01a1a706-924e-7e8c-a8ed-67d3d18ebfc9/problems/01a1b104-7089-7d14-bc48-3489744155d2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    cin >> n >> r;

    int flag = 0;
    long long a[n];
    for(int i=0;i<n;i++)
    {

        cin >> a[i];
        if(a[i] < r)
            flag++;
    }

    long long o_r = r - flag;

    cout << o_r << endl;
    return 0;
}


