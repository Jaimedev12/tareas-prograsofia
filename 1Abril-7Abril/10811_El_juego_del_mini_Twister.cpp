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

    int n; cin >> n;

    /*
        Esto de acá es un vector que guarda las posiciones de cada uno de los números
        en pares, el par es la posición de fila y luego de columna.

        Chécate el video del README para que entiendas un poco de cómo se usan
        los pares
    */
    vector<pair<int, int>> pos((n*n)+1);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int num; cin >> num;
            pos[num] = make_pair(i, j);
        }
    }

    int curFila = pos[1].first;
    int curCol = pos[1].second;
    int ans = 0;

    for (int i = 2; i <= n*n; i++) {
        int nextFila = pos[i].first;
        int nextCol = pos[i].second;

        ans += abs(curFila - nextFila);
        ans += abs(curCol - nextCol);

        curFila = nextFila;
        curCol = nextCol;
    }

    cout << ans << endl;

	return 0;
}