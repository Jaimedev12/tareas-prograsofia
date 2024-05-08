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

    int curHeight, minHeight, maxHeight, n, crece, dism;
    cin >> curHeight >> minHeight >> maxHeight >> n >> crece >> dism;

    int minPasteles = 1000; // Número grande arbitrario (mayor que 300)
    int minPociones = 1000;

    // Por cada uno de los pasteles, probamos cada una de las pociones
    // Ejemplo:
    // Con 1 pastel, probamos 1, 2, 3, 4.. pociones
    // Con 2 pasteles, probamos 1, 2, 3, 4.. pociones
    // y así
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {

            int newHeight = curHeight + (i*crece) - (j*dism);
            if (newHeight >= minHeight && newHeight <= maxHeight) {
                if (i+j < minPasteles+minPociones) {
                    minPasteles = i;
                    minPociones = j;
                }
            }

        }
    }

    if (minPasteles == 1000) {
        cout << -1 << endl;
        return 0;
    }

    cout << minPasteles << " " << minPociones << endl;

	return 0;
}