#include <iostream>
using namespace std;

/**
 * Procedure 6.11: TOWER(N, BEG, AUX, END)
 * n   : Number of disks
 * beg : Beginning peg
 * aux : Auxiliary peg
 * end : Target (End) peg
 */
void tower(int n, char beg, char aux, char end) {
    // 1. Base case: If N = 1, move directly from BEG to END
    if (n == 1) {
        cout << beg << " -> " << end << endl;
        return;
    }

    // 2. Move N - 1 disks from BEG to AUX using END as helper
    tower(n - 1, beg, end, aux);

    // 3. Move the remaining largest disk from BEG to END
    cout << beg << " -> " << end << endl;

    // 4. Move N - 1 disks from AUX to END using BEG as helper
    tower(n - 1, aux, beg, end);
}

int main() {
    int n = 3; // Example: solving for 3 disks

    cout << "Steps to solve Towers of Hanoi with " << n << " disks:" << endl;

    tower(n, 'A', 'B', 'C');

    return 0;
}