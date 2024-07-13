// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double x, y;

    // Entrada de dados
    cout << "Digite o valor x: ";
    cin >> x;

    cout << "Digite o valor y: ";
    cin >> y;

    // Condicional
    if (x == 0 && y == 0) {
        cout << "Suas coordenadas pertencem a ORIGEM.";
    }

    else if (x > 0 && y == 0) {
        cout << "Suas coordenadas pertencem a X.";
    }

    else if (y > 0 && x == 0) {
        cout << "Suas coordenadas pertencem a Y.";
    }

    else if (x > 0 && y > 0) {
        cout << "Suas coordenadas pertencem ao primeiro quadrante (Q1).";
    }

    else if (x < 0 && y > 0) {
        cout << "Suas coordenadas pertencem ao segundo quadrante (Q2).";
    }

    else if (x < 0 && y < 0) {
        cout << "Suas coordenadas pertencem ao terceiro quadrante (Q3).";
    }

    else {
        cout << "Suas coordenadas pertencem ao quarto quadrante (Q4).";
    }

    return 0;
}