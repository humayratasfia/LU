// https://serious-oj.com/contests/01a1a706-924e-7e8c-a8ed-67d3d18ebfc9/problems/01a1a71b-603f-739b-81d4-b25ef9279578
// Unchecked

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // fast i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, k;
    cin >> a >> b >> c >> k;

    if(a < c && b < c && ((a + b) > c))
        cout << "0" << endl;
    else if(b < a && c < a && ((b + c) > a))
        cout << "0" << endl;
    else if(a < b && c < b && ((a + c) > b))
        cout << "0" << endl;
    else{
        if(a<c && b<c)
        {
            int req = c - (a+b) + 1;
            int rem = 0;
            if(req % k != 0)
            {
                rem = 1;
            }
            int time = req/k + rem;
            cout << time << endl;
        }
        else if(b<a && c<a)
        {
            int req = a - (b+c) + 1;
            int rem = 0;
            if(req % k != 0)
            {
                rem = 1;
            }
            int time = req/k + rem;
            cout << time << endl;
        }
        else if(c<b && a<b)
        {
            int req = b - (a+c) + 1;
            int rem = 0;
            if(req % k != 0)
            {
                rem = 1;
            }
            int time = req/k + rem;
            cout << time << endl;
        }
    }

    // contest eta ai agdum bagdum ghorardum kore shomoy noshto krsi wthh
    // int time = 0;

    // if(a<c && b<c)
    // {
    //     if((a+b) > c)
    //         cout << "0" << endl;
    //     else{

    //         while((a+b) <= c)
    //         {

    //             a = a + k;
    //             time++;
    //             if((a + b) < c)
    //             {
    //                 b = b + k;
    //                 time++;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //         cout << time << endl;

    //     }
    // }
    // else if(b<a && c<a)
    // {
    //     if((c+b) > a)
    //         cout << "0" << endl;
    //     else{

    //         while((b+c) <= a)
    //         {

    //             b = b + k;
    //             time++;
    //             if((b+c) < a)
    //             {
    //                 c = c + k;
    //                 time++;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //         cout << time << endl;

    //     }
    // }
    // else if(a<b && a<b)
    // {
    //     if((a+c) > b)
    //         cout << "0" << endl;
    //     else{

    //         while((a+c) <= b)
    //         {

    //             a = a + k;
    //             time++;
    //             if((a+c) < b)
    //             {
    //                 c = c + k;
    //                 time++;
    //             }
    //             else
    //             {
    //                 break;
    //             }
    //         }
    //         cout << time << endl;
    //     }
    // }

    return 0;
}



