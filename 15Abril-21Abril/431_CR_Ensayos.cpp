#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() { _

    string s;
    getline(cin, s);

    // Aquí voy a guardar si cierta letra debería ser mayúscula o no
    vector<bool> isMay(s.size());

    isMay[0] = 1; // La primera siempre es mayúscula

    // No checamos la última porque va a ser un punto y 
    // ya sabemos que no viene nada después
    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == '.') {
            isMay[i+2] = 1;
        }

        if (s[i] == '!') {
            isMay[i+2] = 1;
        }

        if (s[i] == '?') {
            isMay[i+2] = 1;
        }   
    }

    for (int i = 0; i < s.size(); i++) {
        // Si no es una letra, imprímela y vete a la siguiente
        if (!isalpha(s[i])) {
            cout << s[i];
            continue;
        }

        if (isMay[i]) {
            cout << char(toupper(s[i]));
        } else {
            cout << char(tolower(s[i]));
        }
    }

	return 0;
}