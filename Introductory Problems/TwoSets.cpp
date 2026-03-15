#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define ull unsigned long long
#define ld long double
#define whole(vect) (vect).begin(), (vect).end()
#define rwhole(vect) (vect).rbegin(), (vect).rend()
#define print_yes (cout << "YES" << endl)
#define print_no (cout << "NO" << endl)
#define print_zero (cout << "0" << endl)
#define negative (cout << "-1" << endl)

void solve() {
    // division is possible if sum till n is even
    int n;      cin >> n; 
    int wholeSum = (n * (n + 1)) / 2;

    if(wholeSum & 1) print_no;
    else {
        print_yes;
        // each partition will get half of the wholeSum 
        int target = wholeSum / 2;

        set<int> first, second;     int firstSum = 0, secondSum = 0, temp = n;

        while( firstSum < target ) {                     // constructing the first set
            int rem = target - firstSum; 
            if(rem < temp) {
                first.insert( rem );     break;
            }
            first.insert( temp );      firstSum += temp;
            temp--;
        }
        // constructing the second set
        for(int i = 1; i <= n && secondSum < target; i++) {
            if( first.count( i ) ) continue; 

            second.insert( i );     secondSum += i;
        }

        cout << first.size() << endl;           for(auto &val : first) cout << val << " ";
        cout << endl << second.size() << endl;  for(auto &val : second) cout << val << " ";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}