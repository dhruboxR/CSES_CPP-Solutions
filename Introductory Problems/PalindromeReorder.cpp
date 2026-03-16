#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str;     cin >> str;   map<char, int> cfreq;

    for(char cherr : str) cfreq[ cherr ]++;
    // only one character makes the whole string 
    if(cfreq.size() == 1) { cout << str << endl;    return;}

    int odd = 0;       char ocherr;         // at max one odd freq character is valid 

    for(auto [ch, freq] : cfreq) {
        if(freq & 1) {
            odd++;      ocherr = ch;
            if(odd > 1) {cout << "NO SOLUTION" << endl; return;}
        }
    }

    string temp = "";
    for(auto [ch, freq] : cfreq) {      // construct the palindromic string 
        if(freq&1) continue;

        string curr(freq/2, ch);    temp += curr;
    }
    string rtemp = temp;    reverse( temp.begin(), temp.end());     // front + back 

    if(odd == 1) {
        string oc(cfreq[ ocherr ], ocherr);
        cout << temp << oc << rtemp << endl;
    }
    else cout << temp << rtemp << endl; // all even characters 
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}