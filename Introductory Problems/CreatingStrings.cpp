#include <bits/stdc++.h>
using namespace std;

string str;     vector<string>results;

void solve() {
    cin >> str; 
    sort( str.begin(), str.end() );

    do {
        results.push_back( str );

    } while( next_permutation(str.begin(), str.end()) ); 

    cout << results.size() << endl; 
    for(string &permString : results) cout << permString << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}

/*
    #   while( next_permutation(str.begin(), str.end()) )
    ->  Generates the next permutation if available
*/