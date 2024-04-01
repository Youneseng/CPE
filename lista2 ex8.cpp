#include <iostream>
#include <cmath> // Para a função sqrt()
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os catetos fornecidos pelo usuário
    double cateto1, cateto2;

    // Solicita ao usuário fornecer os valores dos catetos
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;

    // Calcula o quadrado da hipotenusa utilizando o teorema de Pitágoras
    double quadrado_da_hipotenusa = pow(cateto1, 2) + pow(cateto2, 2);

    // Calcula a hipotenusa utilizando a função raiz quadrada (sqrt)
    double hipotenusa = sqrt(quadrado_da_hipotenusa);

    // Imprime o valor da hipotenusa
    cout << "Valor da hipotenusa: " << hipotenusa << endl;

    return 0;
}
