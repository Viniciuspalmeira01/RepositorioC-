#include <iostream>
#include <vector>

using namespace std;

// Função que calcula o determinante de uma matriz pelo Teorema de Laplace
double determinante(const vector<vector<double>>& matriz) {
    int n = matriz.size(); // ordem da matriz

    // Caso base: matriz 1x1
    if (n == 1)
        return matriz[0][0];

    // Caso base: matriz 2x2
    if (n == 2)
        return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];

    double det = 0.0;

    // Expansão pela primeira linha (linha 0)
    for (int j = 0; j < n; j++) {
        // Criar a matriz menor (removendo linha 0 e coluna j)
        vector<vector<double>> menor(n - 1, vector<double>(n - 1));
        for (int i = 1; i < n; i++) {
            int col_menor = 0;
            for (int k = 0; k < n; k++) {
                if (k == j) continue; // pula a coluna j
                menor[i - 1][col_menor] = matriz[i][k];
                col_menor++;
            }
        }

        // Cálculo do cofator
        double cofator = ((j % 2 == 0) ? 1 : -1) * matriz[0][j];

        // Soma com o determinante da matriz menor
        det += cofator * determinante(menor);
    }

    return det;
}

int main() {
    int n;
    cout << "Digite a ordem da matriz quadrada: ";
    cin >> n;

    vector<vector<double>> matriz(n, vector<double>(n));

    cout << "Digite os elementos da matriz (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    double resultado = determinante(matriz);
    cout << "\nDeterminante da matriz = " << resultado << endl;

    return 0;
}
