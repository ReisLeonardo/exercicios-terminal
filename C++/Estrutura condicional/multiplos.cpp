// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    int x, y;

    // Entrada de dados
    cout << "Digite o primeiro numero: ";
    cin >> x;

    cout << "Digite o segundo numero: ";
    cin >> y;

    // Condicional
    if (x % y == 0 || y % x == 0) {
        cout << "Sao multiplos";
    }

    else {
        cout << "Nao sao multiplos";
    }

    return 0;
}