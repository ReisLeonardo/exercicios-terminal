// Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes números.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    int x, y, soma;

    // Entrada de dados
    cout << "Digite o valor de X: ";
    cin >> x;

    cout << "Digite o valor de Y: ";
    cin >> y;

    // Algoritmo matemático
    soma = x + y;

    // Saída de dados
    cout << "A soma de " << x << " + " << y << " e igual a " << soma;

    return 0;
}