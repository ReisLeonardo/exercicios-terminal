// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int quant, i, num, den;
    double divisao;

    // Entrada de dados
    cout << "Digite quantos casos voce vai digitar: ";
    cin >> quant;

    // Estrutura repetitiva
    for (i=1; i <= quant; i++) {
        // Entrada de dados
        cout << "Entre com o numerador: ";
        cin >> num;

        cout << "Entre com o denominador: ";
        cin >> den;

        // Estrutura condicional
        if (den == 0) {
            cout << "Divisao impossivel!" << endl;
        }
        else {
            // Algoritmo matemático
            divisao = (double) num / den;
            cout << fixed << setprecision(2);
            cout << "O resultado e " << divisao << endl;
        }
    }

    return 0;
}