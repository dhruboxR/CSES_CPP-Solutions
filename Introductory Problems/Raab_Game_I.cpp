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

void solve() {
    int n, a, b;    cin >> n >> a >> b; 
    if(a+b > n) {print_no;  return;}

    if((a == 0 || b == 0) && (a+b != 0)) {print_no; return;}

    print_yes;

    for(int i = 1; i <= n; i++) cout << i << " ";
    cout << endl;
    
    for(int i = a+1; i <= a+b; i++) cout << i << " ";
    for(int i = 1; i <= a; i++) cout << i << " ";
    for(int i = a+b+1; i <= n; i++) cout << i << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case; cin >> test_case;
    while (test_case--) {
        solve();
    }

    return 0;
}