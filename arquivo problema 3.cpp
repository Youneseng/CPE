#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <limits>
#include <sstream>

int main() {
    std::unordered_map<std::string, std::string> codigo_pessoa;

    // Abrir o arquivo de códigos e nomes das pessoas
    std::ifstream codigo_pessoa_file("codigo_pessoa.txt");
    if (!codigo_pessoa_file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo codigo_pessoa.txt\n";
        return 1;
    }

    std::string line;
    while (std::getline(codigo_pessoa_file, line)) {
        std::istringstream iss(line);
        std::string codigo;
        iss >> codigo;
        std::string nome;
        std::getline(iss, nome);
        if (!nome.empty() && nome[0] == ' ') {
            nome.erase(0, 1); // Remover o espaço inicial do nome
        }
        codigo_pessoa[codigo] = nome;
    }
    codigo_pessoa_file.close();

    // Abrir os arquivos de altura e peso
    std::ifstream altura_file("altura.txt");
    std::ifstream peso_file("peso.txt");
    if (!altura_file.is_open() || !peso_file.is_open()) {
        std::cerr << "Erro ao abrir os arquivos de altura ou peso\n";
        return 1;
    }

    std::string max_altura_codigo, max_peso_codigo;
    double max_altura = std::numeric_limits<double>::min();
    double max_peso = std::numeric_limits<double>::min();

    // Ler e processar o arquivo de altura
    while (std::getline(altura_file, line)) {
        std::string codigo = line;
        if (std::getline(altura_file, line)) {
            double altura = std::stod(line);
            if (altura > max_altura) {
                max_altura = altura;
                max_altura_codigo = codigo;
            }
        }
    }
    altura_file.close();

    // Ler e processar o arquivo de peso
    while (std::getline(peso_file, line)) {
        std::string codigo = line;
        if (std::getline(peso_file, line)) {
            double peso = std::stod(line);
            if (peso > max_peso) {
                max_peso = peso;
                max_peso_codigo = codigo;
            }
        }
    }
    peso_file.close();

    // Obter os nomes das pessoas com maior altura e peso
    std::string max_altura_nome = codigo_pessoa[max_altura_codigo];
    std::string max_peso_nome = codigo_pessoa[max_peso_codigo];

    // Exibir os resultados
    std::cout << "Pessoa com maior altura: " << max_altura_nome << " (" << max_altura << " m)\n";
    std::cout << "Pessoa com maior peso: " << max_peso_nome << " (" << max_peso << " kg)\n";

    return 0;
}

