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

string s;

bool isPalindrome(int a, int b) {
    while (a < b) {
        if (s[a] != s[b]) return false;
        a++;
        b--;
    }

    return true;
}

int main() { _

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (isPalindrome(0, i) && isPalindrome(i+1, s.size()-1)) {

            string pal1 = s.substr(0, i+1);
            string pal2 = s.substr(i+1, s.size()-1);

            cout << pal2 << endl;
            cout << pal1 << endl;
        }
    }
    
	return 0;
}