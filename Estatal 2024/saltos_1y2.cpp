#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long int lli;
#define fore(i, a, b) for(lli i = (a), TT = (b); i < TT; ++i)

/*
 [1]  [1]  [2]  [3]  [5]  [8]
*/

vector<int> dp(1000,-1);

int waysToJump(int pos){
    if(pos == 0)return 1;
    if(pos == 1)return 1;

    if(dp[pos] != -1)return dp[pos];

    dp[pos] = waysToJump(pos-1) + waysToJump(pos-2);
    return dp[pos];
}

int main() { _
    int n; cin >> n;
    cout << waysToJump(n);
	return 0;
}