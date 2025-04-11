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

lli n, m, k;
lli qi, qj;
vector<vector<lli>> rataQueso(1000, vector<lli>(1000));
vector<vector<lli>> quesoFin(1000, vector<lli>(1000));

lli MOD = 1000000007;
lli multMod(lli a, lli b) {
    return (((a%MOD) * (b%MOD))%MOD);
}

lli sumMod(lli a, lli b) {
    return (((a%MOD) + (b%MOD))%MOD);
}

lli fastPowMod(lli base, lli pow) {
    lli res = 1;
    base %= MOD;
    while (pow > 0) {
        if (pow % 2 != 0) {
            res = multMod(res, base);
        }

        pow = pow >> 1;
        base = multMod(base, base);
    }
    return res;
}

int main() { _
    
    cin >> n >> m >> k >> qi >> qj;

    fore(i, 0, n) rataQueso[i][0] = 1;
    fore(j, 0, m) rataQueso[0][j] = 1;

    fore(i, qi-1, n) quesoFin[i][qj-1] = 1;
    fore(j, qj-1, m) quesoFin[qi-1][j] = 1;

    fore(i, 1, n) {
        fore(j, 1, m) {
            rataQueso[i][j] = sumMod(rataQueso[i-1][j], rataQueso[i][j-1]);
        }
    }

    fore(i, qi, n) {
        fore(j, qj, m) {
            quesoFin[i][j] = sumMod(quesoFin[i-1][j], quesoFin[i][j-1]);
        }
    }

    lli ans = fastPowMod(multMod(rataQueso[qi-1][qj-1], quesoFin[n-1][m-1]), k);
    cout << ans << endl;
	return 0;
}