#include <iostream>
#include <vector>
#include <cstdlib>  


using namespace std;

void Produto_misto(vector<int> A, vector<int> B, vector<int> C){
    const int tamanho = 3;
    vector<int> resultado(tamanho);
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = A[i] * B[i] + C[i];
    }
    cout << "Resultado do produto misto: ";
    for (int i = 0; i < tamanho; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;
}

int main(){
    const int tamanho = 3;
    std::vector<int> B{1, 2, 3};
    std::vector<int> A{4, 5, 6};   
    std::vector<int> C{1, 1, 1};

    Produto_misto(A, B, C);
    
    return 0;
}
