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

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int cntB = 0;
    int cntN = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            cntB++;
        } else {
            cntN++;
        }
    }

    if (cntN == 0) {
        cout << "Bold" << endl;
    } else if (cntB == 0) {
        cout << "Non bold" << endl;
    } else {
        cout << "Some bold" << endl;
    }
}

int main() { _

    int t; cin >> t;
    while (t--) {
        solve();
    }

	return 0;
}