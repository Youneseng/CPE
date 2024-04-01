#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os números fornecidos pelo usuário
    double num1, num2;

    // Solicita ao usuário fornecer os dois números
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    // Calcula e imprime a soma dos números
    cout << "Soma: " << num1 + num2 << endl;

    // Calcula e imprime o produto dos números
    cout << "Produto: " << num1 * num2 << endl;

    // Calcula e imprime a diferença dos números
    cout << "Diferenca: " << num1 - num2 << endl;

    // Verifica se o segundo número é zero para evitar divisão por zero
    if (num2 != 0) {
        // Calcula e imprime o quociente dos números
        cout << "Quociente: " << num1 / num2 << endl;
    } else {
        cout << "Nao e possivel dividir por zero." << endl;
    }

    return 0;
}
