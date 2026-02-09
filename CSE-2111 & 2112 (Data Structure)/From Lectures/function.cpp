#include <iostream>
using namespace std;

int sum(int &a, int &b);

int main()
{
    int a, b;
    cin >> a >> b; // 3 4
    int result = sum(a, b);
    cout << "Result: " << result << endl; // Result: 3
    cout << "a: " << a << endl; // a: 4
    return 0;
}

int sum(int &a, int &b)
{
    return a++; 
    /* 
    First it returns then it updates 
    and returns the updated value.
    */
}