// https://vjudge.net/contest/865729#problem/J
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count500 = n / 500;
    n = n % 500;

    int count100 = n / 100;
    n = n % 100;

    int count50 = n / 50;
    n = n % 50;

    int count10 = n / 10;
    n = n % 10;

    int count5 = n / 5;
    n = n % 5;

    int count = n;

    while(count--)
        cout << "1 ";
    while(count5--)
        cout << "5 ";
    while(count10--)
        cout << "10 ";
    while(count50--)
        cout << "50 ";
    while(count100--)
        cout << "100 ";
    while(count500--)
        cout << "500 ";

    return 0;
}