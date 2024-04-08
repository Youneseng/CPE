#include <iostream>
#include <iomanip> // Para definir a precisão de saída
using namespace std;

int main() {
    // Declaração das variáveis para armazenar os números e o caractere da operação
    double num1, num2, resultado;
    char operacao;

    // Solicita ao usuário que insira os dois números
    cout << "Digite dois numeros reais: ";
    cin >> num1 >> num2;

    // Solicita ao usuário que insira o caractere da operação
    cout << "Digite +, -, * ou /: ";
    cin >> operacao;

    // Executa a operação indicada sobre os valores lidos
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            // Verifica se o segundo número é diferente de zero para evitar divisão por zero
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Erro: Divisao por zero!" << endl;
                return 1; // Saída do programa com código de erro
            }
            break;
        default:
            cout << "Operação inválida!" << endl;
            return 1; // Saída do programa com código de erro
    }

    // Imprime o resultado da operação com duas casas decimais
    cout << fixed << setprecision(2); // Define a precisão de saída para duas casas decimais
    cout << "Resultado: " << num1 << " " << operacao << " " << num2 << " = " << resultado << endl;

    return 0;
}
