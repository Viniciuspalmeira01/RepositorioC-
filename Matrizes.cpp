#include <iostream>
#include <iomanip>

// Define as dimensões da matriz como constantes
const int NUM_LINHAS = 3;
const int NUM_COLUNAS = 3;

// Função principal do programa
int main() {
    std::cout << "--- Programa de Exibição de Matriz Simples ---\n\n";

    // 1. Declaração e Inicialização da Matriz
    // Esta matriz 3x3 é preenchida diretamente com números inteiros
    int matriz[NUM_LINHAS][NUM_COLUNAS] = {
        {1, 2, 3},    // Linha 0
        {4, 5, 6},    // Linha 1
        {7, 8, 9}     // Linha 2
    };

    std::cout << "Matriz " << NUM_LINHAS << "x" << NUM_COLUNAS << " inicializada:\n\n";

    // 2. Apresentação da Matriz
    // Usamos dois loops 'for' aninhados para percorrer todos os elementos.

    // Loop externo: Percorre as LINHAS (i)
    for (int i = 0; i < NUM_LINHAS; ++i) {
        std::cout << "| ";

        // Loop interno: Percorre as COLUNAS (j)
        for (int j = 0; j < NUM_COLUNAS; ++j) {
            // Acessa o elemento na posição [linha][coluna]
            // O std::setw(2) garante que cada número ocupe 2 espaços,
            // alinhando a matriz.
            std::cout << std::setw(2) << matriz[i][j] << " ";
        }

        std::cout << "|\n"; // Fecha a linha e pula para a próxima linha no console
    }

    std::cout << "\n----------------------------------------------\n";

    // Demonstração de acesso a um elemento específico
    int elemento_central = matriz[1][1];
    std::cout << "O elemento na posição central [1][1] é: " << elemento_central << "\n";

    return 0;
}
