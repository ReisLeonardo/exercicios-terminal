// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double pagar;
    int quantidade, codigo;

    // Entrada de dados
    cout << "Digite o codigo do produto comprado: ";
    cin >> codigo;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    // Condicional
    if (codigo == 1) {
        pagar = 5 * quantidade;
        cout << fixed << setprecision(2);
        cout << "O valor total a ser pago pelo produto e de " << pagar;
    }

    else if (codigo == 2) {
        pagar = 3.5 * quantidade;
        cout << fixed << setprecision(2);
        cout << "O valor total a ser pago pelo produto e de " << pagar;
    }

    else if (codigo == 3) {
        pagar = 4.8 * quantidade;
        cout << fixed << setprecision(2);
        cout << "O valor total a ser pago pelo produto e de " << pagar;
    }

    else if (codigo == 4) {
        pagar = 8.9 * quantidade;
        cout << fixed << setprecision(2);
        cout << "O valor total a ser pago pelo produto e de " << pagar;
    }

    else if (codigo == 5) {
        pagar = 7.32 * quantidade;
        cout << fixed << setprecision(2);
        cout << "O valor total a ser pago pelo produto e de " << pagar;
    }

    else {
        cout << "Error!";
    }

    return 0;
}