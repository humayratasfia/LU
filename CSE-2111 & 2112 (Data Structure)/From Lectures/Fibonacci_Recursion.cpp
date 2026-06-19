#include <bits/stdc++.h>
using namespace std;

// Procedure 6.10: FIBONACCI(FIB, N)
void fibonacci(int &fib, int n) {
    // 1. If N = 0 or N = 1, then: Set FIB := N, and Return.
    if (n == 0 || n == 1) {
        fib = n;
        return;
    }

    int fiba, fibb;

    // 2. Call FIBONACCI(FIBA, N - 2).
    fibonacci(fiba, n - 2);

    // 3. Call FIBONACCI(FIBB, N - 1).
    fibonacci(fibb, n - 1);

    // 4. Set FIB := FIBA + FIBB.
    fib = fiba + fibb;

    // 5. Return.
    return;
}

int main() {
    int n = 7; // Example input
    int result;
    
    fibonacci(result, n);
    
    cout << "The Fibonacci number at position " << n << " is: " << result << endl;
    
    return 0;
}