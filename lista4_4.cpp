#include <iostream>
using namespace std;

int main() {
    // Preços de varejo dos produtos
    double precos[] = {2.98, 4.50, 9.98, 4.49, 6.87};
    // Quantidade vendida de cada produto
    int quantidade[5] = {0};

    int numeroProduto;
    int quantidadeVendida;
    double totalVarejo = 0.0;

    // Loop para ler pares de números até que o número do produto seja 0
    while (true) {
        // Solicita ao usuário que insira o número do produto
        cout << "Digite o numero do produto (1-5) (0 para sair e calcular o valor total): ";
        cin >> numeroProduto;

        // Verifica se o usuário deseja sair
        if (numeroProduto == 0) {
            break;
        }

        // Verifica se o número do produto é válido
        if (numeroProduto < 1 || numeroProduto > 5) {
            cout << "Numero do produto invalido. Por favor, tente novamente." << endl;
            continue;
        }

        // Solicita ao usuário que insira a quantidade vendida
        cout << "Digite a quantidade vendida: ";
        cin >> quantidadeVendida;

        // Atualiza a quantidade vendida do produto
        quantidade[numeroProduto - 1] += quantidadeVendida;

        // Calcula o preço de varejo para o produto atual e adiciona ao total
        totalVarejo += precos[numeroProduto - 1] * quantidadeVendida;
    }

    // Exibe o valor total de varejo de todos os produtos vendidos
    cout << "O valor total de varejo de todos os produtos vendidos: R$ " << totalVarejo << endl;

    return 0;
}
