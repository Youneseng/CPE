#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar a senha fornecida pelo usuário
    int senha;

    // Solicita ao usuário que insira a senha
    cout << "Digite a senha: ";
    cin >> senha;

    // Verifica se a senha fornecida é válida (1234) e imprime a mensagem correspondente
    if (senha == 1234) {
        cout << "ACESSO PERMITIDO" << endl;
    } else {
        cout << "ACESSO NEGADO" << endl;
    }

    return 0;
}
