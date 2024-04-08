#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar o caractere fornecido pelo usuário
    char caractere;

    // Solicita ao usuário que insira um caractere
    cout << "Digite um caractere: ";
    cin >> caractere;

    // Converte o caractere para minúsculo para facilitar a verificação
    caractere = tolower(caractere);

    // Verifica se o caractere é uma vogal usando o comando switch case
    switch (caractere) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "O caractere '" << caractere << "' e uma vogal." << endl;
            break;
        default:
            cout << "O caractere '" << caractere << "' nao e uma vogal." << endl;
    }

    return 0;
}
