// https://serious-oj.com/contests/01a1a706-924e-7e8c-a8ed-67d3d18ebfc9/problems/01a1ad7f-07b4-7fcb-be77-eed70dfcd55e

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;
    int sz = s.size();

    long long counti = 0, counte = 0;

    for(int i=0;i<sz;i++)
    {
        if(s[i] == 'I')
            counti++;
        if(s[i] == 'E')
            counte++;
    }

    int e = 0;

    if(counte >= 3)
    {
        e = counte / 3;
    }

    if( e >= counti && counte != 0 && e != 0)
        cout << counti << endl;
    else if(counti >= e && counte != 0 && e != 0)
        cout << e << endl;
    else
        cout << 0 << endl;

    return 0;
}


