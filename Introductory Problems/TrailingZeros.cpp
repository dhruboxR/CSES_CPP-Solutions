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
    For a trailing zero we need to multiply with 10 
        10 -> 2 * 5
        So we need to pair(2, 5) for a trailing zero

        Every even number is a multiple of 2, So we consider only the multiples of 5 

        5 -> contributes one 5 paired with 2 gives -> 10 [ 1 trailing zero ]
        25 -> contributes two 5 paired with 4 gives -> 100 [ 2 trailing zeros ]
*/