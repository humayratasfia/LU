// https://serious-oj.com/contests/01a1a706-924e-7e8c-a8ed-67d3d18ebfc9/problems/01a1a802-b085-7e2b-a9db-c6bb55c10419

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector <long long> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];

    vector <long long> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];

    long long tp=0, fp=0, fn=0, tn=0;

    for(int i=0;i<n;i++)
    {
        if(v[i] == 1 && a[i] == 1)
            tp++;
        else if(v[i] == 0 && a[i] == 1)
            fp++;
        else if(v[i] == 1 && a[i] == 0)
            fn++;
        else if(v[i] == 0 && a[i] == 0)
            tn++;
    }

    cout << tp << " " << fp << " " << fn << " " << tn << " " << endl;

    return 0;
}


