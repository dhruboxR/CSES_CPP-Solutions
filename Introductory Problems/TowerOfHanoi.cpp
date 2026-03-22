#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int numBlocks, int sourceRod, int destinationRod, int helpingRod) {
    if( numBlocks == 0 ) {
        return;       // no blocks
    }

    towerOfHanoi(numBlocks - 1, sourceRod, helpingRod, destinationRod);         // source -> help
    cout << sourceRod << " " << destinationRod << endl;
    towerOfHanoi(numBlocks - 1, helpingRod, destinationRod, sourceRod);        // help -> destination
}

void solve() {
    int numBlocks;      cin >> numBlocks;
    // minimum move 2^n - 1
    cout << (1 << numBlocks) - 1 << endl;
    towerOfHanoi(numBlocks, 1, 3, 2);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}