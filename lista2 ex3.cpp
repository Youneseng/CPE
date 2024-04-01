#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar o raio fornecido pelo usuário e o valor de pi
    double raio, pi = 3.14159;

    // Solicita ao usuário fornecer o raio do círculo
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // Calcula o diâmetro da circunferência
    double diametro = 2 * raio;

    // Calcula a área do círculo
    double area = pi * raio * raio;

    // Imprime o diâmetro e a área do círculo
    cout << "Diametro da circunferencia: " << diametro << endl;
    cout << "Area do circulo: " << area << endl;

    return 0;
}
