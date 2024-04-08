#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os preços do álcool e da gasolina
    double preco_alcool, preco_gasolina;

    // Solicita ao usuário que insira os preços do álcool e da gasolina
    cout << "Digite quanto custa o litro do alcool: ";
    cin >> preco_alcool;
    cout << "Digite quanto custa o litro da gasolina: ";
    cin >> preco_gasolina;

    // Calcula a proporção entre o preço do álcool e o preço da gasolina
    double proporcao = preco_alcool / preco_gasolina;

    // Verifica se o preço do álcool é menor ou igual a 70% do preço da gasolina
    if (proporcao <= 0.7) {
        cout << "Recomendo abastecer com alcool." << endl;
    } else {
        cout << "Recomendo abastecer com gasolina." << endl;
    }

    return 0;
}
