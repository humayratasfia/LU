// https://vjudge.net/contest/865729#problem/I
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int sz = s.size();

        int a[sz];

        for(int i=0;i<sz;i++)
        {
            a[i] = s[i] - 48;
        }

        for(int i=0;i<sz-1;i++)
        {
            for(int j=0; j<sz - i -1; j++)
            {
                if(a[j] < a[j+1])
                {
                    swap(a[j], a[j+1]);
                }
            }
        }

        for(int i=0;i<sz;i++)
        {
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}