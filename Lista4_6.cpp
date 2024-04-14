#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime>   // Para a função time()

using namespace std;

int main() {
    srand(time(nullptr)); // Inicializa o gerador de números aleatórios

    cout << "Pense em um numero entre 1 e 100 e eu tentarei adivinha-lo." << endl;

    int limiteInferior = 1;
    int limiteSuperior = 100;
    int tentativas = 0;

    while (true) {
        int palpite = (limiteInferior + limiteSuperior) / 2; // Palpite no meio do intervalo
        cout << "O numero e " << palpite << "?" << endl;
        char resposta;
        cout << "Responda com 's' para sim, 'm' para menor e 'M' para maior: ";
        cin >> resposta;

        if (resposta == 's') {
            cout << "Eu sabia! O numero e " << palpite << "." << endl;
            break;
        } else if (resposta == 'm') {
            limiteSuperior = palpite - 1;
        } else if (resposta == 'M') {
            limiteInferior = palpite + 1;
        } else {
            cout << "Resposta invalida. Por favor, responda com 's', 'm' ou 'M'." << endl;
            continue;
        }

        tentativas++;

        if (tentativas >= 7) {
            cout << "Opa! Parece que fiz muitas tentativas. Voce deve ter trapaceado!" << endl;
            break;
        }
    }

    return 0;
}
