#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int n;      cin >> n; 
    int trailingZeros = 0; 

    while( n / 5 ) {
        trailingZeros += (n / 5);
        n /= 5;
    }

    cout << trailingZeros << endl;

    return 0;
}

/*
    For a trailing zero, the number must contain a factor of 10.
        { 10 = 2 × 5 } : So each pair (2, 5) produces one trailing zero.

    In factorials, multiples of 2 : (every even number has a factor of 2).
    
    -> So the number of 5s actually limits how many (2,5) pairs we can make.
    -> Therefore, we only count multiples of 5.

    #   5 → contributes one 5 → forms 1 pair (2×5) → 1 trailing zero
    #   25 = 5² → contributes two 5s → forms 2 pairs → 2 trailing zeros
    
    So higher powers of 5 contribute extra trailing zeros.
*/