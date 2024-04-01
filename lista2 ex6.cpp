#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os números fornecidos pelo usuário
    int num1, num2;

    // Solicita ao usuário fornecer os dois números inteiros
    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    // Verifica se o primeiro número é múltiplo do segundo
    if (num2 != 0 && num1 % num2 == 0) {
        cout << num1 << " e multiplo de " << num2 << "." << endl;
    } else {
        cout << num1 << " nao e multiplo de " << num2 << "." << endl;
    }

    return 0;
}
