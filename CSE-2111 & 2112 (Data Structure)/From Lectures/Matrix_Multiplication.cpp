#include <iostream>
using namespace std;
int main()
{
    // first matrix's size and value input
    int m, n;
    cin >> m >> n;
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    // second matrix's size and value input
    int p;
    cin >> p;
    int B[n][p]; // n already declared
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }
    // result matrix (dimension m*p)
    int C[m][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // output
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}