// https://vjudge.net/contest/865729#problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;

    int r[s];
    for(int i=0; i<s; i++)
    {
        cin >> r[i];
    }

    int count = 0;

    for(int i=0; i<s; i++)
    {
        if(r[i] >= 80)
            count++;
    }

    cout << count << endl;
    return 0;
}