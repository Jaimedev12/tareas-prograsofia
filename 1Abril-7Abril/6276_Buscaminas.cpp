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

int getNum(vector<vector<int>> mat, int i, int j) {

    if (mat[i][j] == 1) return 9;

    int ans = 0;

    // Arriba
    ans += mat[i-1][j-1];
    ans += mat[i-1][j];
    ans += mat[i-1][j+1];

    // A los lados
    ans += mat[i][j-1];
    ans += mat[i][j+1];

    // Abajo
    ans += mat[i+1][j-1];
    ans += mat[i+1][j];
    ans += mat[i+1][j+1];

    // Sí, hay formas más bonitas de hacerlo pero la neta no pasa nada
    return ans;
}


int main() { _
    int n, m;
    cin >> n >> m;
    // Matriz llena de puros ceros
    // La hago de +2 para no batallar con las orillas
    vector<vector<int>> mat(n+2, vector<int>(m+2, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> mat[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << getNum(mat, i, j) << " ";
        }
        cout << endl;
    }

	return 0;
}