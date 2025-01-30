#include <iostream>
#include <list>
#include <string>

using namespace std;

// Função de cadastramento agora recebe referência para listas
void cadastramento(int n, list<string>& candidatos, list<int>& num_cpf) {
    string nome;
    int cpf;
   
    for (int x = 0; x < n; x++) { // Repetirá n vezes
        cout << "Qual o seu nome? : ";
        cin >> nome;
        cout << "Qual o seu CPF? : ";
        cin >> cpf;

        candidatos.push_back(nome);
        num_cpf.push_back(cpf);
    }
}

// Função para exibir os candidatos cadastrados
void exibir_candidatos(const list<string>& candidatos, const list<int>& num_cpf) {
    auto it_nome = candidatos.begin();
    auto it_cpf = num_cpf.begin();
    
    cout << "\nLista de Candidatos Cadastrados:\n";
    while (it_nome != candidatos.end() && it_cpf != num_cpf.end()) {
        cout << "Nome: " << *it_nome << " | CPF: " << *it_cpf << endl;
        ++it_nome;
        ++it_cpf;
    }
}

int main() {
    list<string> lista_candidatos;
    list<int> lista_cpfs;
    char op = 's';
    int tam;
    
    while (op == 's') {
        cout << "Há quantos candidatos? : ";
        cin >> tam;

        cadastramento(tam, lista_candidatos, lista_cpfs);
        exibir_candidatos(lista_candidatos, lista_cpfs);

        cout << "\nDeseja continuar? (s/n): ";
        cin >> op;
    }
    
    cout << "Acabou\n";
    return 0;
}
