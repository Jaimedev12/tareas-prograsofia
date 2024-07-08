#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// Esta matriz es global, entonces se puede acceder a ella desde
// cualquiera de las funciones del archivo
vector<vector<bool>> mat(10, vector<bool>(10)); 

void placeInColumn(int c) {

    // Checamos cuál es la fila más abajo en la que podemos
    // poner el cuadrado
    int rowToFill = 0;

    // Checamos las filas de abajo pa arriba
    for (int i = 0; i < 10; i++) {
        // Si ya está llena, no sigas bajando
        if (mat[i][c] || mat[i][c+1]) break;

        rowToFill = i;
    }

    mat[rowToFill][c] = 1;
    mat[rowToFill][c+1] = 1;
    mat[rowToFill-1][c] = 1;
    mat[rowToFill-1][c+1] = 1;
}

int main() { _
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int col; cin >> col;
        placeInColumn(col);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (mat[i][j]) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }

	return 0;
}