// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int quant, i;
    double num1, num2, num3, media;

    // Entrada de dados
    cout << "Quantos casos voce vai digitar? ";
    cin >> quant;

    // Estrutura repetitiva
    for (i=1; i <= quant; i++) {
        // Entrada de dados
        cout << "Digite o primeiro numero: ";
        cin >> num1;

        cout << "Digite o segundo numero: ";
        cin >> num2;

        cout << "Digite o terceiro numero: ";
        cin >> num3;

        // Algoritmo matemático
        media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;

        // Saída de dados
        cout << fixed << setprecision(1);
        cout << "A media e " << media << endl;
    }

    return 0;
}