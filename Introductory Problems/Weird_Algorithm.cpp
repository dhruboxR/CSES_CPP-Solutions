#include <bits/stdc++.h>
#define int long long int
#define ull unsigned long long
#define ld long double
using namespace std;
 
void solve() {
    int x;  cin >> x; 
    cout << x << " ";
    if(x == 1) return;
    
    while(true) {
        int val = (x%2 == 0 ? x/2 : (x*3)+1);
        x = val;
 
        cout << val << " "; 
        if(val == 1) return;
    } cout << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}