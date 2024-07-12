#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

void cadastrarAluno();
void adicionarNota();
void calcularMedia();

int main() {
    int opcao;

    do {
        std::cout << "1. Cadastrar aluno\n";
        std::cout << "2. Adicionar nota de um aluno\n";
        std::cout << "3. Calcular media de um aluno\n";
        std::cout << "4. Fechar o programa\n";
        std::cout << "Escolha uma opcao: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                std::cout << "Programa encerrado.\n";
                break;
            default:
                std::cout << "Opcao invalida.\n";
        }
    } while (opcao != 4);

    return 0;
}

void cadastrarAluno() {
    std::string nome, matricula;
    std::cout << "Nome do aluno: ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::cout << "Matricula: ";
    std::getline(std::cin, matricula);

    std::ofstream aluno_file(nome + ".txt");
    aluno_file << matricula << "\n";
    aluno_file.close();

    std::cout << "Aluno cadastrado.\n";
}

void adicionarNota() {
    std::string nome;
    double nota;
    std::cout << "Nome do aluno: ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::ifstream aluno_file(nome + ".txt");
    if (!aluno_file) {
        std::cout << "Aluno nao cadastrado.\n";
        return;
    }
    aluno_file.close();

    std::cout << "Nota: ";
    std::cin >> nota;

    std::ofstream aluno_file_append(nome + ".txt", std::ios_base::app);
    aluno_file_append << nota << "\n";
    aluno_file_append.close();

    std::cout << "Nota adicionada.\n";
}

void calcularMedia() {
    std::string nome;
    std::cout << "Nome do aluno: ";
    std::cin.ignore();
    std::getline(std::cin, nome);
    std::ifstream aluno_file(nome + ".txt");
    if (!aluno_file) {
        std::cout << "Aluno nao cadastrado.\n";
        return;
    }

    std::string line;
    std::getline(aluno_file, line);  // Ignora a matrícula
    std::vector<double> notas;
    while (std::getline(aluno_file, line)) {
        notas.push_back(std::stod(line));
    }
    aluno_file.close();

    if (notas.empty()) {
        std::cout << "Nenhuma nota cadastrada para o aluno.\n";
        return;
    }

    double sum = 0;
    for (double nota : notas) {
        sum += nota;
    }
    double media = sum / notas.size();

    // Configurar a saída para mostrar 2 casas decimais
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Media do aluno " << nome << ": " << media << "\n";
}

