#include <iostream>
using namespace std;

int main() {
    const int NUM_NUMEROS = 5;
    const int MINIMO = 1;
    const int MAXIMO = 30;

    int numeros[NUM_NUMEROS];

    // Leitura dos números
    cout << "Digite cinco numeros entre 1 e 30:" << endl;
    for (int i = 0; i < NUM_NUMEROS; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        // Verifica se o número está dentro do intervalo permitido
        while (numeros[i] < MINIMO || numeros[i] > MAXIMO) {
            cout << "Numero invalido. Digite novamente o numero " << i + 1 << ": ";
            cin >> numeros[i];
        }
    }

    // Exibição das barras de asteriscos
    cout << "Barras de asteriscos:" << endl;
    for (int i = 0; i < NUM_NUMEROS; ++i) {
        cout << "Numero " << i + 1 << ": ";
        for (int j = 0; j < numeros[i]; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
