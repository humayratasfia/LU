#include <bits/stdc++.h>
using namespace std;

// Procedure 6.9B: FACTORIAL(FACT, N)
void factorial(long long &fact, int n) {
    // 1. If N = 0, then: Set FACT := 1, and Return.
    if (n == 0) {
        fact = 1;
        return;
    }
    
    // 2. Call FACTORIAL(FACT, N - 1).
    factorial(fact, n - 1);
    
    // 3. Set FACT := N * FACT.
    fact = n * fact;
    
    // 4. Return.
}

int main() {
    int n = 5; // Example input
    long long result;
    
    factorial(result, n);
    
    cout << n << "! = " << result << endl;
    
    return 0;
}