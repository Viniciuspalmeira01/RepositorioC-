#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


void matrizIdentidade(int matriz[][3], int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(i == j){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}

void Matriz_determinante(int matriz[][3], int tamanho){
    int det = 0;
    if(tamanho == 1){
        det = matriz[0][0];
    } else if(tamanho == 2){
        det = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
    } else if(tamanho == 3){
        det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
              matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
              matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    }
    cout << "Determinante: " << det << endl;
}
int main(){

    int linhas,colunas;
    int matriz[linhas][colunas];
    linhas = colunas =3;

    for (int i = 1; i < linhas; i++){
        for (int j = 1; j < colunas; j++){
            double valor;
            cin >> valor;
            cout << fixed << setprecision(2) << valor << " ";
        }
        cout << endl;
    }

    Matriz_determinante(matriz, linhas);
    Matriz_determinante(matriz, colunas);

    return 0;
}
