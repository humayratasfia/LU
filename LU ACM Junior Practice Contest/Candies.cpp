// https://vjudge.net/contest/865729#problem/L
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    vector <long long> c(n);
    for(int i=0;i<n;i++)
    {
        cin >> c[i];
    }

    sort(c.begin(), c.end(), greater<int>());

    long long bag = 0;
    long long candy = 0;

    for(int i=0;i<n;i++)
    {
        if(candy >= k)
            break;
        
        candy = c[i] + candy;
        bag++;
    }

    if(candy >= k)
        cout << bag << endl;
    else
        cout << "-1" << endl;

    return 0;
}