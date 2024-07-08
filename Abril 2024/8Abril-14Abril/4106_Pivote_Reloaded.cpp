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
    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int pivot; cin >> pivot;
    for(int i = 0; i < n; i++) { // imprimir los menores
        if (nums[i] < pivot) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;

    for(int i = 0; i < n; i++) { // imprimir los mayores
        if (nums[i] > pivot) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;

	return 0;
}