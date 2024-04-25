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

    int n, m; 
    cin >> n >> m;

    vector<bool> prendidas(n+1);
    int lucesPrendidas = 0;

    int numLuces, luz; 
    for (int i = 0; i < m; i++) {
        cin >> numLuces;

        for (int j = 0; j < numLuces; j++) {
            cin >> luz;
            if (!prendidas[luz]) lucesPrendidas++;
            prendidas[luz] = true;
        }

        if (lucesPrendidas == n) break;
    }

    // for (int i = 1; i <= n; i++) {
    //     lucesPrendidas += prendidas[i];
    // }

    cout << n - lucesPrendidas << endl;

	return 0;
}