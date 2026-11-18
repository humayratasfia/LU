// https://vjudge.net/contest/865729#problem/H
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[3];
    int flag = 0;
    for(int i=0;i<3;i++)
    {
        cin >> a[i];

        int calc = n - a[i];

        if(calc >= 10)
            flag = 1;
    }

    if(flag == 1)
        cout << "Yes :-D" << endl;
    else
        cout << "No :-(" << endl;
        
    return 0;
}