#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::ifstream infile("vetores.txt");
    std::ofstream outfile("soma.txt");
    std::string line;

    while (std::getline(infile, line)) {
        std::istringstream iss(line);
        int num, sum = 0;

        while (iss >> num) {
            sum += num;
        }

        outfile << sum << "\n";
    }

    infile.close();
    outfile.close();

    std::cout << "Somas salvas em soma.txt\n";
    return 0;
}
