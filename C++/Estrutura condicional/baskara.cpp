// Faça um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcule e mostre os valores das raízes x1 e x2 da equação com quatro casas decimais. Se a equação não possuir raízes reais, mostre uma mensagem.

// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double a, b, c, delta, x1, x2;

    // Entrada de dados
    cout << "Digite o coeficiente A: ";
    cin >> a;

    cout << "Digite o coeficiente B: ";
    cin >> b;

    cout << "Digite o coeficiente C: ";
    cin >> c;


    // Algoritmo matemático
    delta = pow(b, 2) - 4 * a * c;


    // Condicional
    if (a == 0 || delta < 0) {
        cout << "Esta equacao nao tem raizes reais.";
    }

    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(4);
        cout << "O x1 e = " << x1 << " e o x2 e = " << x2;
    }

    return 0;
}