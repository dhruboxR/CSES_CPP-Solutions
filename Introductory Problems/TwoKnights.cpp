#include<bits/stdc++.h>
using namespace std; 

#define int long long int

// nCr = nC2 = n*(n-1) / 2

int32_t main() {
    int n;  cin >> n; 

    for(int i = 1; i <= n; i++) {
        if(i == 1) {cout << 0 << endl;  continue;}

        int N = i*i; 
        int res = ((N * (N-1)) / 2 );

        int attackPos = 2 * (i-1) * (i-2);
        attackPos += 2 * (i-1) * (i-2);

        cout << res - attackPos << endl;
    }

    return 0;
}