#include <iostream>
#include <cmath> // Para a função pow()
using namespace std;

int main() {
    double x;
    cout << "Digite o valor de x: ";
    cin >> x;

    double resultado = 1.0;
    double termo = 1.0;

    // Calcula e^x usando a fórmula fornecida
    for (int i = 1; i <= 10; i++) {
        termo *= x / i;
        resultado += termo;
    }

    cout << "O valor de e^x: " << resultado << endl;

    return 0;
}
