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

bool isValley(vector<vector<int>> mat, int i, int j) {

    if (mat[i-1][j] &&  // Arriba
        mat[i+1][j] &&  // Abajo
        mat[i][j-1] &&  // Izquierda
        mat[i][j+1]     // Derecha
        ) {

        return true;
    }
    
    return false;
}


int main() { _
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n+2, vector<int>(m+2, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> mat[i][j];
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if (isValley(mat, i, j)) {
                ans++;
            }
        }
    }

    cout << ans << endl;

	return 0;
}