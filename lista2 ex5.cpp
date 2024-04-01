#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar a largura e o comprimento da sala
    double largura, comprimento;

    // Solicita ao usuário que insira a largura da sala
    cout << "Digite a largura da sala (em metros): ";
    cin >> largura;

    // Solicita ao usuário que insira o comprimento da sala
    cout << "Digite o comprimento da sala (em metros): ";
    cin >> comprimento;

    // Calcula a área da sala
    double area = largura * comprimento;

    // Exibe a área da sala com unidades
    cout << "Area da sala: " << area << " metros quadrados." << endl;

    return 0;
}
