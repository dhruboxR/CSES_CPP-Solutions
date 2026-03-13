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

        // if( i > 2) res -= 
        cout << res << endl;
    }

    return 0;
}