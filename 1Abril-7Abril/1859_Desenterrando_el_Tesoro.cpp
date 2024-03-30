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

    /*
        Por qué basta con contar los ceros?
        Porque sólo te marcan un camino, entonces sabes que si hay un cero,
        tienes que pasar por ahí. Cierto, puede que si hubiera más ceros 
        el código fallara, pero el problema te dice que sólo te dan un camino
        precisamente para que sea más fácil de responder.
        Además no tienes que decidir por diferentes caminos entonces facilón
    */

int main() { _

    int n, m;
    cin >> n >> m;

    int cntZeroes = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int num; cin >> num;
            if (num == 0) cntZeroes++;
        }
    }

    int ans = m + (cntZeroes-1);
    cout << ans << endl;

	return 0;
}