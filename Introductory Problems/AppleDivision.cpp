#include <bits/stdc++.h>
using namespace std;

#define int long long int 

// All possible combination of groups through RECURSION

void recurrSol(vector<int> &weights, int &diff, int idx, int goneSum, int gtwoSum) {
    if(idx == weights.size()) {
        diff = min(diff, abs(goneSum - gtwoSum));
        return;
    }
    
    // pick current element for group 1
    recurrSol(weights, diff, idx+1, goneSum+weights[ idx ], gtwoSum);
    
    // pick current element for group 2
    recurrSol(weights, diff, idx+1, goneSum, gtwoSum+weights[ idx ]);
}

int32_t main() {
    int length;     cin >> length; 
    vector<int> weights(length);        for(auto &val : weights) cin >> val; 

    int diff = INT_MAX;
    recurrSol(weights, diff, 0, 0, 0);

    cout << diff << "\n";

    return 0;
}