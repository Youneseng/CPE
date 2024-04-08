#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os dados de entrada
    double litros, quilometros;
    double total_litros = 0.0, total_quilometros = 0.0;

    // Variáveis para armazenar o consumo de cada tanque completo e a média do consumo
    double consumo_tanque, media_consumo;

    int num_tanques;

    // Solicita ao usuário que insira o número de tanques completados
    cout << "Digite o numero de tanques completados: ";
    cin >> num_tanques;

    // Loop para processar os dados de cada tanque completo
    for (int i = 1; i <= num_tanques; ++i) {
        // Solicita ao usuário que insira a quantidade de litros e a quantidade de quilômetros percorridos
        cout << "Tanque " << i << ":" << endl;
        cout << "Quantidade de litros: ";
        cin >> litros;
        cout << "Quantidade de quilometros percorridos: ";
        cin >> quilometros;

        // Calcula o consumo do tanque completo em km/litro
        consumo_tanque = quilometros / litros;

        // Acumula os totais de litros e quilômetros para calcular a média posteriormente
        total_litros += litros;
        total_quilometros += quilometros;

        // Imprime o consumo do tanque completo
        cout << "Consumo do tanque " << i << ": " << consumo_tanque << " km/litro" << endl;
    }

    // Calcula a média do consumo do carro
    media_consumo = total_quilometros / total_litros;

    // Imprime a média do consumo do carro
    cout << "\nMedia do consumo do carro: " << media_consumo << " km/litro" << endl;

    return 0;
}
