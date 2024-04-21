#include <iostream>
#include <cstdlib> // Para a função rand e srand
#include <ctime>   // Para a função time
using namespace std;

int main() {
    // Inicializar o gerador de números aleatórios com o tempo atual
    srand(time(nullptr));

    char jogarNovamente;
    do {
        // Escolher um número aleatório entre 1 e 1000
        int numeroSecreto = rand() % 1000 + 1;

        cout << "Eu tenho um numero entre 1 e 1000." << endl;
        cout << "Voce consegue adivinhar o meu numero?" << endl;

        int palpite;
        do {
            cout << "Digite seu palpite: ";
            cin >> palpite;

            if (palpite == numeroSecreto) {
                cout << "Excelente! Voce adivinhou o numero!" << endl;
            } else if (palpite < numeroSecreto) {
                cout << "Muito baixo. Tente novamente." << endl;
            } else {
                cout << "Muito alto. Tente novamente." << endl;
            }
        } while (palpite != numeroSecreto);

        cout << "Voce gostaria de jogar novamente (s ou n)? ";
        cin >> jogarNovamente;
    } while (jogarNovamente == 's');

    return 0;
}
