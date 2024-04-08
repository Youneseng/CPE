#include <iostream>
#include <cmath> // Para a função pow()
using namespace std;

int main() {
    // Declaração da variável para armazenar o número binário fornecido pelo usuário
    long long binario;

    // Solicita ao usuário que insira o número binário
    cout << "Digite um numero binario: ";
    cin >> binario;

    // Variável para armazenar o valor decimal calculado
    int decimal = 0;
    // Variável para armazenar a posição do dígito atual
    int posicao = 0;

    // Loop para calcular o valor decimal do número binário
    while (binario != 0) {
        // Obtém o último dígito do número binário
        int digito = binario % 10;
        // Calcula o valor decimal do dígito atual e adiciona ao valor total
        decimal += digito * pow(2, posicao);
        // Divide o número binário por 10 para remover o último dígito
        binario /= 10;
        // Incrementa a posição do dígito
        posicao++;
    }

    // Imprime o valor decimal correspondente ao número binário
    cout << "O valor decimal correspondente ao numero binario e: " << decimal << endl;

    return 0;
}
