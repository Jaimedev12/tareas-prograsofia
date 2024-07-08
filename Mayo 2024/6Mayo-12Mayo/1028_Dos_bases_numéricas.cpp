#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

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
#define fore(i, a, b) for (lli i = (a), TT = (b); i < TT; ++i)

int main()
{
    _

        string a,
        b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<long long int> basesA(11, -1);
    vector<long long int> basesB(11, -1);

    for (int base = 2; base <= 10; base++)
    {
        long long int numBase10 = 0;

        bool ableToConvert = true;
        for (int i = 0; i < a.size(); i++)
        {
            int dig = a[i] - '0';
            if (dig >= base)
            {
                ableToConvert = false;
                break;
            }

            numBase10 += dig * pow(base, i);
        }

        if (!ableToConvert)
            continue;
        basesA[base] = numBase10;
    }

    for (int base = 2; base <= 10; base++)
    {
        long long int numBase10 = 0;

        bool ableToConvert = true;
        for (int i = 0; i < b.size(); i++)
        {
            int dig = b[i] - '0';
            if (dig >= base)
            {
                ableToConvert = false;
                break;
            }

            numBase10 += dig * pow(base, i);
        }

        if (!ableToConvert)
            continue;
        basesB[base] = numBase10;
    }

    for (int i = 2; i <= 10; i++)
    {
        if (basesA[i] == -1)
            continue;

        for (int j = 2; j <= 10; j++)
        {
            if (basesA[i] == basesB[j])
            {
                cout << basesA[i] << " " << i << " " << j << endl;
                return 0;
            }
        }
    }

    return 0;
}