#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() { _

    int m; cin >> m;
    int cnt = 0;

    while (m > 0) {
        int fruto; cin >> fruto;
        cnt++;
        m += fruto;
    }

    cout << cnt << endl;
    cout << m << endl; 

	return 0;
}