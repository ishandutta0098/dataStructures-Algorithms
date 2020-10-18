// C++ implementation of the approach
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Function to return the integer X such that
// (A xor X) + (B ^ X) is minimized
int findX(int A, int B)
{
    int j = 0, x = 0;

    // While either A or B is non-zero
    while (A || B) {

        // Position at which both A and B
        // have a set bit
        if ((A & 1) && (B & 1)) {

            // Inserting a set bit in x
            x += (1 << j);
        }

        // Left shifting both numbers to
        // traverse all the bits
        A >>= 1;
        B >>= 1;
        j += 1;
    }
    return x;
}

// Driver code
int main()
{
    int t, a, b;

    cin>>t;

    while(t>0){

    cin>>a>>b;

    int x = findX(a, b);

    cout << (a ^ x) + (b ^ x) << endl;

    t--;

    }
    return 0;
}
