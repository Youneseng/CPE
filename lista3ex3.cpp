#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar o número fornecido pelo usuário
    int numero;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro de cinco digitos: ";
    cin >> numero;

    // Verifica se o número fornecido pelo usuário tem mais de cinco dígitos
    if (numero < 10000 || numero > 99999) {
        cout << "Por favor, insira apenas um numero inteiro de cinco digitos." << endl;
        return 0;
    }

    // Extrai os dígitos individuais do número fornecido pelo usuário
    int digito1 = numero / 10000;
    int digito2 = (numero / 1000) % 10;
    int digito4 = (numero / 10) % 10;
    int digito5 = numero % 10;

    // Verifica se o número é um palíndromo
    if (digito1 == digito5 && digito2 == digito4) {
        cout << "O numero " << numero << " e um palindromo." << endl;
    } else {
        cout << "O numero " << numero << " nao e um palindromo." << endl;
    }

    return 0;
}