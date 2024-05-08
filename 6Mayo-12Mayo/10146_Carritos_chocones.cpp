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

struct carro {
    float vel;
    float pos;
};

int main() { _

    int n; cin >> n;
    vector<carro> carros(n);

    for (int i = 0; i < n; i++) {
        carro c;
        cin >> carros[i].pos >> carros[i].vel;
    }

    float primerChoque = INT_MAX; // INT_MAX es un número muy grande que viene ya con c++
    float carroChocado1, carroChocado2;

    /*
        Ojo, esto ahí te va la idea de este código

        No hace falta que calculemos cuándo van a chocar tooodas las parejas de carros,
        eso sería muy lento, pero, imagínate que tenemos 3 carros en posición A B C. 
        En este caso, no hace falta que calculemos cuándo van a chocar A y C, porque antes
        de que eso pase, A chocará con B o B chocará con C, entonces nos podemos ir
        calculando solamente las parejas adyacentes de carros y la complejidad final es O(n)
    */
    for (int i = 0; i < n-1; i++) {

        // El carro de la derecha va más o igual de rápido que el de la izquierda
        // Por lo tanto no van a chocar
        if (carros[i].vel <= carros[i+1].vel) continue;

        // Ojo, si no entiendes esta fórmula, nomás mándame mensaje y te la explico
        float tChoque = (carros[i+1].pos - carros[i].pos) / (carros[i].vel - carros[i+1].vel);

        if (tChoque < primerChoque) {
            primerChoque = tChoque;
            carroChocado1 = i+1;
            carroChocado2 = i+2;
        }
    }

    if (primerChoque == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << primerChoque << " " << carroChocado1 << " " << carroChocado2 << endl;
    }


	return 0;
}