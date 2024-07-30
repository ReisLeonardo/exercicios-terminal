// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int fat, n, i;

    fat = 1;

    // Entrada de dados
    cout << "Digite um valor entre 0 a 15: ";
    cin >> n;

    // Estrutura repetitiva
    for (i=n; i > 0; i--) {
        // Algoritmo matemático
        fat *= i;
    }

    // Saída de dados
    cout << "O fatorial de " << n << "! = " << fat;

    return 0;
}