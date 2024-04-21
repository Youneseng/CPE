#include <iostream>
#include <cmath> // Para a função sqrt
using namespace std;

// Função para determinar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    // Testa divisibilidade até a raiz quadrada do número
    for (int i = 2; i <= sqrt(numero); ++i) {
        if (numero % i == 0) {
            return false; // Se for divisível, não é primo
        }
    }
    return true; // Se não foi divisível por nenhum número, é primo
}

int main() {
    cout << "Numeros primos entre 2 e 1000:" << endl;

    // Usando a função ehPrimo para imprimir todos os primos entre 2 e 1000
    for (int i = 2; i <= 1000; ++i) {
        if (ehPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
