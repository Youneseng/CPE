#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um numero inteiro nao negativo: ";
    cin >> numero;

    // Verifica se o número é negativo
    if (numero < 0) {
        cout << "Erro: O numero deve ser nao negativo." << endl;
        return 1; // Saída do programa com código de erro
    }

    // Calcula o fatorial
    long long fatorial = 1;
    for (int i = 1; i <= numero; i++) {
        // Verifica se houve estouro de memória
        if (fatorial > LLONG_MAX / i) {
            cout << "Erro: Estouro de memoria ao calcular o fatorial." << endl;
            return 1; // Saída do programa com código de erro
        }
        fatorial *= i;
    }

    cout << "O fatorial de " << numero << " e: " << fatorial << endl;

    return 0;
}
