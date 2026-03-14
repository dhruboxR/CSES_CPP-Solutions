#include <bits/stdc++.h>
#define int long long int
#define ull unsigned long long
#define ld long double
using namespace std;
 
void solve() {
    // longest repitition in the sequence
    string initial;     cin >> initial;
    int rep = 1;
 
    for(int i = 0; i < initial.size(); i++) {
        char cherr = initial[ i ];  int cherr_count = 1;
 
        int j = i + 1;
        while(initial[ j ] == cherr && j < initial.size()) {
            cherr_count++; j++;
        }
        rep = max(rep, cherr_count);
        j--;    i = j;
    } cout << rep << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
 
    return 0;
}