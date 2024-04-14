#include <iostream>
using namespace std;

int main() {
    cout << "Triplos de Pitagoras:" << endl;

    // Loop para lado1
    for (int lado1 = 1; lado1 <= 20; lado1++) {
        // Loop para lado2
        for (int lado2 = 1; lado2 <= 20; lado2++) {
            // Loop para hipotenusa
            for (int hipotenusa = 1; hipotenusa <= 20; hipotenusa++) {
                // Verifica se é um triplo de Pitágoras
                if (lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa) {
                    cout << "Lado1: " << lado1 << ", Lado2: " << lado2 << ", Hipotenusa: " << hipotenusa << endl;
                }
            }
        }
    }

    return 0;
}
