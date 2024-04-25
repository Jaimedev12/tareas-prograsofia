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

int sumaDeDigitos(int num) {
    int sum = 0;
    while (num) { // No sea igual a 0
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main() { _

    int num; 
    cin >> num;
    int curSum = sumaDeDigitos(num);
    int personas = 0;

    while (curSum != 21) {
        num++;
        num %= 10000000; // Para ver cuando de la vuelta
        personas++;
        curSum = sumaDeDigitos(num);
    }
    
    string nuevoBoleto = "0000000";

    for (int i = 6; i >= 0; i--){
        nuevoBoleto[i] = num%10 + '0';
        num /= 10;
    }

    cout << personas << " " << nuevoBoleto << endl;
 
	return 0;
}