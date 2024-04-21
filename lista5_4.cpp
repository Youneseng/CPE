#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Função para gerar dois números inteiros positivos de um dígito
void gerarNumeros(int &num1, int &num2) {
    // Inicializa o gerador de números aleatórios com o tempo atual
    srand(time(nullptr));
    // Gera números aleatórios entre 1 e 9
    num1 = rand() % 9 + 1;
    num2 = rand() % 9 + 1;
}

// Função para verificar a resposta do aluno
bool verificarResposta(int num1, int num2, int resposta) {
    return num1 * num2 == resposta;
}

int main() {
    int num1, num2, resposta;
    string pergunta;

    cout << "Bem-vindo ao programa de aprendizado de multiplicacao!" << endl;

    while (true) {
        // Gerar dois números aleatórios
        gerarNumeros(num1, num2);
        // Construir a pergunta
        pergunta = "Quanto e " + to_string(num1) + " vezes " + to_string(num2) + "?";
        cout << pergunta << endl;
        // Ler a resposta do aluno
        cin >> resposta;
        // Verificar se a resposta está correta
        if (verificarResposta(num1, num2, resposta)) {
            cout << "Muito bom!" << endl;
        } else {
            cout << "Nao. Por favor, tente novamente." << endl;
            // Deixar o aluno tentar novamente até que a resposta esteja correta
            while (!verificarResposta(num1, num2, resposta)) {
                cin >> resposta;
            }
            cout << "Muito bom!" << endl;
        }
    }

    return 0;
}
