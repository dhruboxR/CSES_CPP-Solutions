#include <bits/stdc++.h>
#define int long long int
#define ull unsigned long long
#define ld long double
using namespace std;

void solve() {
    int length;     cin >> length;
    if(length == 1) {cout << 1 << endl; return;}

    if(length == 2 || length == 3) {cout << "NO SOLUTION" << endl;  return;}

    if(length == 4) {cout << "3 1 4 2" << endl; return;}

    for(int i = 1; i <= length; i+=2) cout << i << " ";
    for(int i = 2; i <= length; i+=2) cout << i << " ";
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}