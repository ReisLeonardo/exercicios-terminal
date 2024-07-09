// Faça um programa para ler três números inteiros. Em seguida, mostre qual o menor dentre os três números lidos. Em caso de empate, mostre apenas uma vez.

// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    int valor1, valor2, valor3, menor;

    // Entrada de dados
    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Digite o terceiro valor: ";
    cin >> valor3;


    // Algoritmo matemático


    // Condicional
    if (valor1 < valor2 && valor1 < valor3) {
        menor = valor1;
        cout << "O menor valor e " << menor;
    }
    else if (valor2 < valor1 && valor2 < valor3) {
        menor = valor2;
        cout << "O menor valor e " << menor;
    }
    else {
        menor = valor3;
        cout << "O menor valor e " << menor;
    }

    return 0;
}