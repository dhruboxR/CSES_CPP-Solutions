#include <bits/stdc++.h>
#define int long long int
#define ull unsigned long long
#define ld long double
using namespace std;
 
void solve() {
    int x;  cin >> x; 
    set<int> s;
    for(int i = 1; i < x; i++) {
        int val;    cin >> val;
        s.insert(val);
    }
 
    for(int i = 1; i <= x; i++) {
        if( !s.count(i) ) {
            cout << i << endl;  return;
        }
    }
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}