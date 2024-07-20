// Biblioteca(s)
#include <iostream>

using namespace std;

int main()
{
    // Variável
    int x, y;

    // Entrada de dados
    cout << "Digite dois numeros: ";
    cin >> x;
    cin >> y;

    // Estrutura repetitiva
    while (x != y) {
        // Estrutura condicional
        if (x > y) {
            cout << "Decrescente, afinal " << x << " e maior que " << y << endl;
        }

        else {
            cout << "Crescente, afinal " << x << " e menor que " << y << endl;
        }

        // Leitura de dados da estrutura repetitiva
        cout << "Digite dois numeros: ";
        cin >> x;
        cin >> y;
    }
    return 0;
}
