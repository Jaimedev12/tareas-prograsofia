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

int countOnes(int num) {
    int suma = 0;
    while (num) {
        int digit = num%10;
        if (digit == 1) {
            suma++;
        }
        num /= 10;
    }
    return suma;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int ans = 0;

    for (int i = a; i <= b; i++) {
        ans += countOnes(i);
    }

    cout << ans << endl;
}

int main() { _

    int t; cin >> t;
    while (t--) {
        solve();
    }
	return 0;
}