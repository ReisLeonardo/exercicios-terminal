// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int troca, soma, i, num1, num2;

    soma = 0;

    // Entrada de dados
    cout << "Digite um numero: ";
    cin >> num1;

    cout << "Digite outro numero: ";
    cin >> num2;

    // Estrutura condicional para trocar de posição
    if (num1 > num2) {
        troca = num1;
        num1 = num2;
        num2 = troca;
    }

    // Estrutura repetitiva
    for (i=num1+1; i < num2; i++) {
        // Estrutura condicional
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    // Saída de dados
    cout << "A soma dos impares e " << soma;

    return 0;
}
