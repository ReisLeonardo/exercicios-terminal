// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    int minutos, pagar, gasto;

    // Entrada de dados
    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    // Algoritmo matemático


    // Condicional
    if (minutos <= 100) {
        pagar = 50;
        cout << "O(a) cliente deve pagar RS" << pagar << " por ter consumido " << minutos << " minuto(s).";
    }
    else {
        gasto = 2 * (minutos - 100);
        pagar = 50 + gasto;
        cout << "O(a) cliente deve pagar RS " << pagar << " por ter consumido " << minutos << " minutos.";
    }

    return 0;
}