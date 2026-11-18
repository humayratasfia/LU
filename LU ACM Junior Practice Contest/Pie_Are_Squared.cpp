// https://vjudge.net/contest/865729#problem/N
#include <bits/stdc++.h>
using namespace std;
const double pi = acos(-1);

int main()
{
    int r;
    cin >> r;

    double area = pi * (float) r * (float) r;

    cout << fixed << setprecision(10) << area << endl;
    return 0;
}