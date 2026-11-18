// https://serious-oj.com/contests/01a1a706-924e-7e8c-a8ed-67d3d18ebfc9/problems/01a1b11c-86b8-7068-93d2-383152761be3
// Unchecked

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, S;
    cin >> n >> S;

    vector <long long> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }

    long long flag=0, flag2=0, r=S;
    sort(v.begin(), v.end());

    for(int i=0;i<n;i++)
    {
        if(r<=0)
            break;

        r = r - v[i];
        flag++;
        if(r < 0)
            flag2 = 1;
    }

    if(flag > 0 && flag2 == 1)
        cout <<  flag - 1 << endl;
    else if(flag > 0 && flag2 == 0)
        cout << flag << endl;
    else
        cout << 0 << endl;


    return 0;
}