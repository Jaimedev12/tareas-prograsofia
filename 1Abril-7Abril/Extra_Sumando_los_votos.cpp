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
    // 5 municipios y 4 partidos pero +1 porque empezamos en 0
    vector<vector<int>> conteo(6, vector<int>(5, 0));

    for(int i = 0; i < n; i++) {
        int mun; cin >> mun; // De municipio
        for (int j = 0; j < 4; j++) { // 4 pares de números
            int a, b;
            cin >> a >> b;
            conteo[mun][a] += b;
        }
    }

    // Este código es para imprimir la matriz
    // Descoméntalo con Ctrl + K + U
    // fore(i, 1, 6) {
    //     fore(j, 1, 5) {
    //         cout << conteo[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i <= 5; i++) {
        int ganador = 0;
        int maxVotos = 0;
        for (int j = 1; j <= 4; j++) {
            if (conteo[i][j] > maxVotos) {
                ganador = j;
                maxVotos = conteo[i][j];
            }
        }
        cout << i << " " << ganador << " " << maxVotos << endl;
    }

	return 0;
}