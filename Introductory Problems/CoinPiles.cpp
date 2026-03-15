#include <bits/stdc++.h>
using namespace std;

void solve() {
    int left, right;    cin >> left >> right;
    if(right < left) swap(left, right);     // left is the minimum

    if((left+right) % 3 == 0 && right <= left*2) cout << "YES" << endl; 
    else cout << "NO" << endl; 
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