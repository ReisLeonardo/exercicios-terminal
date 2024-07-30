// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int quant, i, num;

    // Entrada de dados
    cout << "Digite quantos numeros voce vai digitar: ";
    cin >> quant;

    // Estrutura repetitiva
    for (i=1; i <= quant; i++) {
        // Entrada de dados
        cout << "Digite um numero: ";
        cin >> num;

        // Estrutura condicional
        if (num < 0 && num % 2 != 0) {
            cout << "Impar negativo!" << endl;
        }
        else if (num < 0 && num %2 == 0) {
            cout << "Par negativo!" << endl;
        }
        else if (num == 0) {
            cout << "Nulo!" << endl;
        }
        else if (num > 0 && num % 2 != 0) {
            cout << "Impar positivo!" << endl;
        }
        else {
            cout << "Par positivo!" << endl;
        }
    }

    return 0;
}