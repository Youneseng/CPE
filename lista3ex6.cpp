#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar as medidas dos lados do triângulo
    double lado1, lado2, lado3;

    // Solicita ao usuário que insira as medidas dos lados do triângulo
    cout << "Digite as medidas dos tres lados do triangulo: ";
    cin >> lado1 >> lado2 >> lado3;

    // Verifica se o triângulo é Equilátero, Isósceles ou Escaleno
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "O triangulo e Equilatero." << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "O triangulo e Isosceles." << endl;
    } else {
        cout << "O triangulo e Escaleno." << endl;
    }

    return 0;
}
