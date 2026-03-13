#include <bits/stdc++.h>
using namespace std; 

#define int long long int

void solve() {
    int row, col;   cin >> row >> col; 
    if(row <= col) {
        if(col&1) {
            cout << col*col - (row - 1) << endl;
        } else {
            cout << (col-1)*(col-1) + row << endl;
        }
    } else {
        if(row&1) {
            cout << (row-1)*(row-1) + col << endl;
        } else {
            cout << row*row - (col-1) << endl;
        }
    }
}

int32_t main() {
    int test_case;      cin >> test_case; 
    while( test_case-- ) {solve();}

    return 0;
}