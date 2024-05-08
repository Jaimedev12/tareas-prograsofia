#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long double ld;
typedef long long int lli;
typedef pair<lli, lli> pii;
typedef vector<lli> vi;

#define fi first
#define se second
#define pb push_back
#define sz(s) lli(s.size())
#define all(s) begin(s), end(s)
#define print(s) cout << s << endl
#define fore(i, a, b) for(lli i = (a), TT = (b); i < TT; ++i)

int main() { _

    int left, right, up, down;
    cin >> up >> left >> down >> right;

    vector<vector<char>> mat(21, vector<char>(21, '.'));

    for (int i = left; i <= right; i++) {
        mat[up][i] = 'x'; // Arriba
        mat[down][i] = 'x'; // Abajo
    }

    for (int j = up; j <= down; j++) {
        mat[j][left] = 'x'; // Izquierda
        mat[j][right] = 'x'; // Derecha
    }

    for (int i = 1; i < (right-left); i++) {
        mat[up+i][left+i] = 'x'; // Una diagonal
        mat[down-i][left+i] = 'x'; // Otra diagonal
    }

    for (int i = 1; i <= 20; i++) {
        for (int j = 1; j <= 20; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}