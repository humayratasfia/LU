// https://vjudge.net/contest/865729#problem/D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int calc = a + b + c;

        if(calc == 180)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}