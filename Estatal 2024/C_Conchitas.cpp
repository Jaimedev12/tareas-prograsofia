#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long int lli;
#define fore(i, a, b) for(lli i = (a), TT = (b); i < TT; ++i)

int main() { _

    int n; cin >> n;
    map<string, int> cnt;
    // <key, value>

    // map -> arbol binario -> logn
    // unordered_map -> hashmap -> O(1)

    fore(i, 0, n) {
        string concha; cin >> concha;
        cnt[concha]++;
    }

    string maxConcha;
    int maxCnt = 0;

    for (auto& it : cnt) {
        if (it.second > maxCnt) {
            maxCnt = it.second;
            maxConcha = it.first;
        }
    }

    cout << cnt.size() << endl;
    cout << maxConcha << " " << maxCnt << endl;

	return 0;
}