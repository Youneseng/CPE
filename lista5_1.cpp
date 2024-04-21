#include <iostream>
#include <iomanip> // Para manipulação de saída formatada
using namespace std;

// Função para converter temperatura Celsius para Fahrenheit
double celsiusParaFahrenheit(double temperaturaCelsius) {
    return (9.0 / 5.0) * temperaturaCelsius + 32.0;
}

int main() {
    // Imprime o cabeçalho da tabela
    cout << "Celsius\tFahrenheit" << endl;

    // Imprime as temperaturas Celsius e seus equivalentes em Fahrenheit
    for (int celsius = 0; celsius <= 100; ++celsius) {
        // Define a precisão de saída para uma posição após o ponto decimal
        cout << fixed << setprecision(1);
        // Imprime a temperatura Celsius e seu equivalente em Fahrenheit, separados por uma tabulação
        cout << celsius << "\t" << celsiusParaFahrenheit(celsius) << endl;
    }

    return 0;
}
