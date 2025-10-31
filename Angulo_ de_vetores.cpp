#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

double angulo_vetores(const vector<int>& A, const vector<int>& B) {
    if (A.size() != B.size()) {
        cout << "Os vetores devem ter o mesmo tamanho!" << endl;
        return -1;
    }

    // Produto escalar
    double produto_escalar = 0;
    for (size_t i = 0; i < A.size(); i++) {
        produto_escalar += A[i] * B[i];
    }

    // Módulos dos vetores
    double modA = 0, modB = 0;
    for (size_t i = 0; i < A.size(); i++) {
        modA += pow(A[i], 2);
        modB += pow(B[i], 2);
    }
    modA = sqrt(modA);
    modB = sqrt(modB);

    // Cálculo do cosseno do ângulo
    double cos_theta = produto_escalar / (modA * modB);

    // Corrigir possíveis erros numéricos (mantém o valor no intervalo [-1,1])
    if (cos_theta > 1.0) cos_theta = 1.0;
    if (cos_theta < -1.0) cos_theta = -1.0;

    // Ângulo em radianos
    double angulo_rad = acos(cos_theta);

    // Converte para graus
    double angulo_graus = angulo_rad * 180.0 / M_PI;

    cout << fixed << setprecision(2);
    cout << "Produto escalar: " << produto_escalar << endl;
    cout << "Modulo de A: " << modA << endl;
    cout << "Modulo de B: " << modB << endl;
    cout << "Cosseno do angulo: " << cos_theta << endl;
    cout << "Angulo entre os vetores: " << angulo_graus << " graus" << endl;

    return angulo_graus;
}

int main() {
    vector<int> A = {1, 2, 3};
    vector<int> B = {4, 5, 6};

    angulo_vetores(A, B);

    return 0;
}
