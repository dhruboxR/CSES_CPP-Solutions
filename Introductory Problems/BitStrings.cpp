// For every position 2 options : Put a 1 / Put a 0 
// For n positions we get 2^n strings in total

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define ull unsigned long long
#define ld long double
#define whole(vect) (vect).begin(), (vect).end()
#define rwhole(vect) (vect).rbegin(), (vect).rend()
#define print_yes (cout << "YES" << endl)
#define print_no (cout << "NO" << endl)
#define print_zero (cout << "0" << endl)
#define negative (cout << "-1" << endl)

// nCr = n! / r! * (n-r)!

const int mod = 1000000007;

int power_cal(int base, int exponent) {
    int result = 1;
    while (exponent) {
        if (exponent & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent >>= 1;
    }
    return result;
}


void solve() {
    int n;      cin >> n; 
    cout << power_cal(2, n) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}