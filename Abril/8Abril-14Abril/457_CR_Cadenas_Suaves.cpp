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
    string s;

    while (getline(cin, s)) {
        // Primero hay que ver de qué letra hay más y para eso
        // tenemos que contarlas todas

        // Contamos las letras
        vector<int> cnt(30);
        for(int i = 0; i < s.size(); i++) {
            cnt[s[i]-'a']++;
        }

        // Vemos cuál es la que sale más
        int maxNum = cnt[0];
        for(int i = 1; i < 30; i++) {
            maxNum = max(maxNum, cnt[i]);
        }

        // Ya sabemos que tenemos que cambiar todas las demás,
        // entonces con hacer esta operación basta
        cout << s.size()-maxNum << endl;
    }

	return 0;
}