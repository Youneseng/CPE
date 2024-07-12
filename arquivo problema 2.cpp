#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream infile("mochileiro.txt");
    char target;
    std::cout << "Informe o caractere a ser contado: ";
    std::cin >> target;
    std::string line;
    int line_number = 1;

    while (std::getline(infile, line)) {
        if (line.empty()) {
            line_number++;
            continue;
        }

        int count = 0;
        for (char c : line) {
            if (c == target) {
                count++;
            }
        }

        std::cout << "Linha " << line_number << ": " << count << " ocorrencias de '" << target << "'\n";
        line_number++;
    }

    infile.close();
    return 0;
}
