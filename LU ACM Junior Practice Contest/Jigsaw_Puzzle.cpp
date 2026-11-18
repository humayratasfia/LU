// https://vjudge.net/contest/865729#problem/K
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int hh, mm;
    char colon;
    cin >> hh >> colon >> mm;

    int min;
    cin >> min;

    int nh = min / 60;
    int nm = min % 60;

    int n_h, n_m;
    int flag = 0;
    if((mm + nm) >= 60)
    {
        n_m = (mm + nm) % 60;
        flag = (mm + nm) / 60;
    }
    else
        n_m = mm + nm;

    n_h = hh + nh + flag;

    if((n_h < 11) || (n_h == 11 && n_m <= 15))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}