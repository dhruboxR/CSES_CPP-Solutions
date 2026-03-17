#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;      cin >> n;

    string initial(n, '0');     vector<string> ans;
    ans.push_back( initial );

    int cnt = 1,  lim = (1 << n);
    int bitPos = n-1;

    while( cnt < lim ) {

        for(int i = ans.size()-1; i >= 0; i--) {
            ans.push_back( ans[ i ] );
            ans.back()[ bitPos ] = '1';
            cnt++;
        }
        bitPos--;
    }

    for(auto code : ans) cout << code << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}