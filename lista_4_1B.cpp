#include <iostream>
using namespace std;

int main() {
    double e = 1.0;
    double termo = 1.0;

    // Calcula e usando a fórmula fornecida
    for (int i = 1; i <= 10; i++) {
        termo /= i;
        e += termo;
    }

    cout << "O valor da constante matematica e: " << e << endl;

    return 0;
}
