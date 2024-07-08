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
    int minNum = INT_MAX;
    int cnt = 0;

    int l = 1;
    int r = 1;
    int suma = 1;

    while (l <= n) {
        if (suma == n) {
            minNum = min(minNum, l);
            cnt++;
            r++;
            suma += r;
            continue;
        }

        if (suma < n) {
            r++;
            suma += r;
            continue;
        }

        if (suma > n) {
            suma -= l;
            l++;
        }
    }

    cout << cnt << " " << minNum << endl;

	return 0;
}