#include <iostream>
#include <vector>
using namespace std;

// Função para determinar se um número é perfeito
bool ehPerfeito(int numero) {
    int somaFatores = 1; // Inicializa a soma com 1 (todo número é divisível por 1)

    // Encontra e soma os fatores do número
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            somaFatores += i;
        }
    }

    // Verifica se a soma dos fatores é igual ao número
    return somaFatores == numero;
}

// Função para imprimir os fatores de um número
void imprimirFatores(int numero) {
    vector<int> fatores;

    // Encontra os fatores do número
    for (int i = 1; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            fatores.push_back(i);
        }
    }

    // Imprime os fatores
    cout << "Fatores de " << numero << ": ";
    for (int fator : fatores) {
        cout << fator << " ";
    }
    cout << endl;
}

int main() {
    cout << "Numeros perfeitos entre 1 e 1000:" << endl;

    // Encontra e imprime todos os números perfeitos entre 1 e 1000
    for (int i = 1; i <= 1000; ++i) {
        if (ehPerfeito(i)) {
            cout << i << " ";
            imprimirFatores(i);
        }
    }
    cout << endl;

    return 0;
}
