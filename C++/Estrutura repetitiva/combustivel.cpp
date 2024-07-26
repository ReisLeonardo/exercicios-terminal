// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int codigo, alcool, gasolina, diesel;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    // Entrada de dados
    cout << "Informe um codigo (1. Alcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ";
    cin >> codigo;

    // Estrutura repetitiva
    while (codigo != 4) {
        // Estrutura condicional
        if (codigo == 1) {
            alcool = alcool + 1;
        }
        else if (codigo == 2) {
            gasolina = gasolina + 1;
        }
        else if (codigo == 3) {
            diesel = diesel + 1;
        }

        // Entrada de dados da estrutura repetitiva
        cout << "Informe um codigo (1. Alcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ";
        cin >> codigo;
    }

    // Saída de dados
    cout << "Muito obrigado!" << endl;
    cout << "Alcool: " << alcool << endl << "Gasolina: " << gasolina << endl << "Diesel: " << diesel;

    return 0;
}
