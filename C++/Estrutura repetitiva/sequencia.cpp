// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int x, i;

    // Entrada de dados
    cout << "Digite o valor de X: ";
    cin >> x;

    // Estrutura repetitiva
    for (i=1; i <= x; i++) {
        // Estrutura condicional
        if (i % 2 != 0) {
            // Saída de dados
            cout << i << endl;
        }
    }

    return 0;
}