#include <iostream>
using namespace std;

// Função recursiva para resolver as Torres de Hanói
void torresDeHanoi(int numDiscos, int estacaOrigem, int estacaDestino, int estacaTemporaria) {
    // Caso base: mover um disco
    if (numDiscos == 1) {
        cout << estacaOrigem << " para " << estacaDestino << endl;
        return;
    }

    // Mover n-1 discos da estacaOrigem para a estacaTemporaria
    torresDeHanoi(numDiscos - 1, estacaOrigem, estacaTemporaria, estacaDestino);

    // Mover o último disco da estacaOrigem para a estacaDestino
    cout << estacaOrigem << " para " << estacaDestino << endl;

    // Mover n-1 discos da estacaTemporaria para a estacaDestino
    torresDeHanoi(numDiscos - 1, estacaTemporaria, estacaDestino, estacaOrigem);
}

int main() {
    int numDiscos, estacaOrigem, estacaDestino, estacaTemporaria;

    // Solicitar ao usuário os parâmetros
    cout << "Digite o numero de discos: ";
    cin >> numDiscos;
    cout << "Digite a estaca de origem: ";
    cin >> estacaOrigem;
    cout << "Digite a estaca de destino: ";
    cin >> estacaDestino;
    cout << "Digite a estaca temporaria: ";
    cin >> estacaTemporaria;

    cout << "Instrucoes para resolver as Torres de Hanoi:" << endl;
    torresDeHanoi(numDiscos, estacaOrigem, estacaDestino, estacaTemporaria);

    return 0;
}
