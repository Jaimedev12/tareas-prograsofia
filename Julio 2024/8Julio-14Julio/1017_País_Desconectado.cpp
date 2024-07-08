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

vector<bool> visited(100005, false);
vector<vector<int>> adj(100005);

void bfs(int node) { // Breath First Search - Búsqueda por anchura
    queue<int> q;
    q.push(node);

    while (!q.empty()) {
        int num = q.front();
        q.pop();
        visited[num] = true;

        // Agregamos cada una de las adjacencias del nodo
        // a la fila
        fore(i, 0, adj[num].size()) {
            if (visited[adj[num][i]]) continue; // Para no regresarnos por donde ya pasamos
            q.push(adj[num][i]);
        }
    }

}

int main() { _

    int n, m;
    cin >> n >> m;

    fore(i, 0, m) {
        int a, b;
        cin >> a >> b;

        // Este es un grafo no dirigido, lo que significa que 
        // a puede ir hacia b y b puede ir hacia a 
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int numIslands = 0;

    fore(i, 1, n+1) {
        if (visited[i]) continue;
        bfs(i);
        numIslands++;
    }

    cout << numIslands-1 << endl;

	return 0;
}