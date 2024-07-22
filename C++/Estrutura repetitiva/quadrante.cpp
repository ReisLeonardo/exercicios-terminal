// Biblioteca(s)
#include <iostream>

using namespace std;

int main()
{
    // Variável
    int x, y;

    // Entrada de dados
    cout << "Digite o valor de X: ";
    cin >> x;

    cout << "Digite o valor de Y: ";
    cin >> y;

    // Estrutura condicional
    if (x != 0 && y != 0) {
        // Estrutura repetitiva
        while (x != 0 && y != 0) {
            // Estrutura condicional
            if (x > 0 && y > 0) {
                cout << "Suas coordenadas pertencem ao primeiro quadrante (Q1).\n";
            }
            else if (x < 0 && y > 0) {
                cout << "Suas coordenadas pertencem ao segundo quadrante (Q2).\n";
            }
            else if (x < 0 && y < 0) {
                cout << "Suas coordenadas pertencem ao terceiro quadrante (Q3).\n";
            }
            else {
                cout << "Suas coordenadas pertencem ao quarto quadrante (Q4).\n";
            }

            // Entrada de dados da estrutura repetitiva
            cout << "\nDigite o valor de X: ";
            cin >> x;
            cout << "Digite o valor de Y: ";
            cin >> y;
        }
    }

    // Saída de dados
    cout << "O programa foi terminado!";

    return 0;
}
