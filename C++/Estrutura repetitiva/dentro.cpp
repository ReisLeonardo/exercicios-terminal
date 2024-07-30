// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int dentro, fora, quant, i, num;

    dentro = 0;
    fora = 0;

    // Entrada de dados
    cout << "Quantos numeros voce vai digitar? ";
    cin >> quant;

    // Estrutura repetitiva
    for (i=1; i <= quant; i++) {
        // Entrada de dados
        cout << "Digite um numero: ";
        cin >> num;

        // Estrutura condicional
        if (num > 20 || num < 10) {
            fora = fora + 1;
        }
        else {
            dentro = dentro + 1;
        }
    }

    // Saída de dados
    cout << "De acordo com os dados digitados temos " << dentro << " dentro e " << fora << " fora.";

    return 0;
}