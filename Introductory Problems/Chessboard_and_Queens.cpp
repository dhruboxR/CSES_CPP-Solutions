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

vector<string> chessBoard(8);   
int totalPlacements = 0;

bool is_safe(int r, int c) {
    // Check for Queens in the same column 
    for(int i = 0; i < r; i++) {
        if( chessBoard[ i ][ c ] == 'Q' ) return false;
    }
    
    // Upper-left Diagonal
    for(int i = r, j = c; i >= 0 && j >= 0; i--, j--) {
        if( chessBoard[ i ][ j ] == 'Q') return false;
    }

    // Upper-right Diagonal
    for(int i = r, j = c; i >= 0 && j < 8; i--, j++) {
        if( chessBoard[ i ][ j ] == 'Q') return false;
    }

    return true;
}

void count_Placements(int row) {

    // All 8 queens are placed 
    if( row == 8 ) {++totalPlacements;  return;}

    for(int col = 0; col < 8; col++) {
        if(chessBoard[ row ][ col ] == '*') continue;       // BLOCKED CELL 

        if( is_safe(row, col) ) {
            chessBoard[ row ][ col ] = 'Q';     // place a queen here 

            count_Placements( row + 1 );        // Try next row 

            chessBoard[ row ][ col ] = '.';     // Undo the choice & try another option [ backtrack ]
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for(auto &rowState : chessBoard) cin >> rowState;
    
    // start from the first row, place 1 Queen per row 
    count_Placements(0);
    
    cout << totalPlacements << endl;
    
    return 0;
}