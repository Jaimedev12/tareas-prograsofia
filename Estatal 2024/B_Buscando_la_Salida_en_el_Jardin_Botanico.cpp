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

int n, m, q;
vector<vector<char>> mat;
vector<vector<int>> dp;
vector<vector<bool>> vis;

bool hasExit(int row, int col) {
    vector<vector<bool>> vis(n, vector<bool>(m));

    while (row >= 0 && row < n && col < m && col >= 0) { // Está dentro
        if (vis[row][col]) return false;
        if (mat[row][col] == 'P') return false;

        vis[row][col] = true;
        char dir = mat[row][col];
        if (dir == 'N') {
            row--;
        } else if (dir == 'S') {
            row++;
        } else if (dir == 'E') {
            col++;
        } else {
            col--;
        }
    }

    return true;
}

int hasExitRec(int row, int col) {
    if (row < 0 || row >= n || col >= m || col < 0) return true;
    if (dp[row][col] != -1) return dp[row][col];
    if (vis[row][col]) return false;
    if (mat[row][col] == 'P') return false;

    vis[row][col] = true;
    char dir = mat[row][col];
    if (dir == 'N') {
        dp[row][col] = hasExitRec(row-1, col);
    } else if (dir == 'S') {
        dp[row][col] = hasExitRec(row+1, col);
    } else if (dir == 'E') {
        dp[row][col] = hasExitRec(row, col+1);
    } else {
        dp[row][col] = hasExitRec(row, col-1);
    }

    return dp[row][col];
}

void printDP() {
    fore(i, 0, n) {
        fore(j, 0, m) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() { _

    cin >> n >> m >> q;
    mat = vector<vector<char>>(n, vector<char>(m));
    dp = vector<vector<int>>(n, vector<int>(m, -1));
    vis = vector<vector<bool>>(n, vector<bool>(m));

    fore(i, 0, n) {
        fore(j, 0, m) {
            cin >> mat[i][j];
        }
    }

    printDP();

    while (q--) {
        int row, col;
        cin >> row >> col;
        if (hasExitRec(row-1, col-1)) {
            cout << "Que siga su camino" << endl;
        } else {
            cout << "Envien ayuda!!" << endl;
        }
        vis = vector<vector<bool>>(n, vector<bool>(m));

        printDP();
    }

	return 0;
}