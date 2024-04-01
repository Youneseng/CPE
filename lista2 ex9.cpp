#include <iostream>
using namespace std;

int main() {
    // Declaração da variável para armazenar a distância em quilômetros
    double distancia;

    // Solicita ao usuário que insira a distância em quilômetros
    cout << "Digite a distancia em quilometros: ";
    cin >> distancia;

    // Variáveis para armazenar o custo total e o custo médio por quilômetro
    double custo_total = 0.0, custo_medio_por_km = 0.0;

    // Calcula o custo do aluguel com base na distância fornecida
    if (distancia <= 50) {
        custo_total = distancia * 1.75;
    } else if (distancia <= 100) {
        custo_total = 50 * 1.75 + (distancia - 50) * 1.65;
    } else {
        custo_total = 50 * 1.75 + 50 * 1.65 + (distancia - 100) * 1.50;
    }

    // Calcula o custo médio por quilômetro
    custo_medio_por_km = custo_total / distancia;

    // Imprime o valor total a pagar e o custo médio por quilômetro
    cout << "Valor total a pagar: " << custo_total << " reais." << endl;
    cout << "Custo medio por quilometro: " << custo_medio_por_km << " reais." << endl;

    return 0;
}
