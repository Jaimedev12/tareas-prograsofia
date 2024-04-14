#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n; cin >> n;
    int prevNum, num, ans;
    cin >> prevNum;

    for (int i = 0; i < n-1; i++) {
        cin >> num;
        
        if (num != prevNum+1) { // Este es el if de la nota
            ans = i+1; 
        }
        prevNum = num;
    }

    cout << ans << endl;

    /*
        Nota:
        ¿Por qué en ese if no hacemos nadamás "ah, ya encontramos al rey, 
        imprime la posición y salte de la función"?
        Porque tenemos que leer todos los números de la lista  porque si no, si nos
        vamos a la siguiente lista, vamos a empezar a leer de donde nos quedamos de
        la lista anterior y nuestra respuesta va a estar toda mal, entonces por eso
    */
}

int main() { _

    int t; cin >> t;
    while (t--) {
        solve();
    }

	return 0;
}