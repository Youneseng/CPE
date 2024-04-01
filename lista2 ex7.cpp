#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar o número fornecido pelo usuário
    int numero;
    bool ehPrimo = true;

    // Solicita ao usuário fornecer um número inteiro
    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    // Verifica se o número é menor ou igual a 1
    if (numero <= 1) {
        cout << "O numero " << numero << " nao e primo." << endl;
        return 0;
    }

    // Verifica se o número é divisível por algum número diferente de 1 e ele mesmo
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            ehPrimo = false;
            break;
        }
    }

    // Se não foi encontrado divisor diferente de 1 e ele mesmo, então é primo
    if (ehPrimo) {
        cout << "O numero " << numero << " e primo." << endl;
    } else {
        cout << "O numero " << numero << " nao e primo." << endl;
    }

    return 0;
}
