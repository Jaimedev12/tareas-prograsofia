#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long int lli;
#define fore(i, a, b) for(lli i = (a), TT = (b); i < TT; ++i)

// Memoria
vector<vector<lli>> dp(1000, vector<lli>(1000, -1));

// Función recursiva
lli calcWays(lli i, lli j) {
    // Caso base - STOP
    if (i == 0) return 1;
    if (j == 0) return 1;

    // Checar memoria
    if (dp[i][j] != -1) return dp[i][j];

    // Calcular valor
    dp[i][j] = calcWays(i, j-1) + calcWays(i-1, j);
    return dp[i][j];
}

int main() { _

    cout << calcWays(200, 400) << endl;

	return 0;
}