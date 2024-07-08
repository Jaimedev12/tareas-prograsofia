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

// En este problema se puede usar una matriz de adyacencia, porque no hay tantos nodos,
// en el problema anterior no se podía porque había hasta 10^6 nodos, entonces se usaría
// demasiada memoria, pero en este está bien
vector<vector<bool>> adj(1005, vector<bool>(1005, false));

int main() { _

    int n, m;
    cin >> n >> m;

    fore(i, 0, m) {
        char op;
        int a, b;
        cin >> op;

        if (op == 'A') {
            // Si no había la pone y si sí había la quita
            cin >> a >> b;
            adj[a][b] = !adj[a][b];
            adj[b][a] = !adj[b][a];

        } else {
            cin >> a;
            fore(i, 0, n) {
                adj[a][i] = !adj[a][i];
                adj[i][a] = !adj[i][a];
            }
        }
    }

    fore (i, 0, n) {
        // Dirás tú, porqué hasta i+1?
        // Porque por como manejamos la matriz, guardamos el camino de ida y de venida para cada vértice
        // pero sólo tenemos que imprimir uno, entonces recorriendo la matriz así, nos aseguramos
        // de imprimirlo solamente una vez, dibuja cómo se imprime y lo entenderás
        fore(j, 0, i+1) {
            if (adj[i][j]) {
                cout << i << " " << j << endl;
            }
        }
    }

	return 0;
}