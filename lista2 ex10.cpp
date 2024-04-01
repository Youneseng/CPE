#include <iostream>
#include <string>
#include <cctype> // Para usar a função isalpha()
using namespace std;

int main() {
    string input;

    // Solicita ao usuário que insira uma string com 5 caracteres
    cout << "Digite 5 letras: ";
    cin >> input;

    // Verifica se a string tem exatamente 5 caracteres
    if (input.length() != 5) {
        cout << "Insira 5 letras!" << endl;
        cin >> input; 

    }
    
if (input.length() != 5) {
        cout << "Por favor, insira 5 letras!!!" << endl;
        cin >>input; 
    }
    
    if (input.length() != 5) {
        cout << "Tenta outra vez!!!!!" << endl;
        return 1; // Saída do programa com código de erro
    }
    // Contadores para contar o número de vogais
    int num_vogais_a = 0, num_vogais_e = 0, num_vogais_i = 0, num_vogais_o = 0, num_vogais_u = 0;

    // Conta o número de cada vogal na string
    for (char c : input) {
        // Converte o caractere para minúsculo para facilitar a comparação
        char lowercase_c = tolower(c);

        // Verifica se o caractere é uma vogal e atualiza o contador correspondente
        if (isalpha(lowercase_c)) {
            switch (lowercase_c) {
                case 'a':
                    num_vogais_a++;
                    break;
                case 'e':
                    num_vogais_e++;
                    break;
                case 'i':
                    num_vogais_i++;
                    break;
                case 'o':
                    num_vogais_o++;
                    break;
                case 'u':
                    num_vogais_u++;
                    break;
            }
        }
    }

    // Imprime o número de vezes que cada vogal aparece na string
    cout << "Numero de vezes que as vogais aparecem na string:" << endl;
    cout << "A: " << num_vogais_a << endl;
    cout << "E: " << num_vogais_e << endl;
    cout << "I: " << num_vogais_i << endl;
    cout << "O: " << num_vogais_o << endl;
    cout << "U: " << num_vogais_u << endl;

    // Criptografando a string substituindo as vogais
    for (char &c : input) {
        switch (c) {
            case 'a':
                c = 'i';
                break;
            case 'e':
                c = 'o';
                break;
            case 'i':
                c = 'u';
                break;
        }
    }

    // Imprime a nova string criptografada
    cout << "A nova string criptografada: " << input << endl;

    return 0;
}
