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

struct corredor {
    string nombre1;
    string nombre2;
    int id;
};

int main() { _

    int n; cin >> n;
    vector<corredor> datos(n);
    vector<pair<float, int>> lugares(n);

    for(int i = 0; i < n; i++) {
        int id; cin >> id;
        string nombre1; cin >> nombre1;
        string nombre2; cin >> nombre2;
        float tiempo; cin >> tiempo;

        corredor cor;
        cor.id = id;
        cor.nombre1 = nombre1;
        cor.nombre2 = nombre2;

        datos[i] = cor;
        lugares[i] = {tiempo, i};
    }

    // Como se ordenan por el primer elemento del par, se ordenó por tiempo
    // y automáticamente ya también se acomodaron los corredores en donde van
    // apoco no sí está bien padre usar pares?
    sort(lugares.begin(), lugares.end());

    // Esto es nomás para imprimirlo, ta medio raro pero sí tiene sentido
    for(int i = 0; i < 3; i++) {
        int index = lugares[i].second;

        cout << datos[index].id << " ";

        if (datos[index].id < 10) cout << " ";

        cout << datos[index].nombre1 << " ";
        cout << datos[index].nombre2 << " ";
        cout << lugares[i].first << endl;
    }

	return 0;
}