#include <bits/stdc++.h>
#define int long long int
#define ull unsigned long long
#define ld long double
using namespace std;
 
void solve() {
    int len;    cin >> len;
    vector<int> source(len); 
    for(auto &data : source) cin >> data; 
 
    int cnt = 0;
    for(int i = 1; i < len; i++) {
        if(source[ i ] < source[ i-1 ]) {
            cnt += (source[ i-1] - source[ i ]);
            source[ i ] = source[ i-1 ];
        }
    }
    cout << cnt << endl; 
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}