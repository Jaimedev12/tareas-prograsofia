#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() { _

    int n; cin >> n;
    vector<int> cnts(2);
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        cnts[num]++;
    }

    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int num; cin >> num;
        cnts[num]++;
    }

    cout << cnts[0] << endl;
    cout << cnts[1] << endl;

	return 0;
}