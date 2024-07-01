// Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do círculo com três casas decimais. Você pode usar o valor de pi fornecido pela biblioca, ou então, se preferir, use diretamente o valor 3.14159.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double r, area;

    // Entrada de dados
    cout << "Digite o valor do raio do circulo: ";
    cin >> r;

    // Algoritmo matemático
    area = (double) 3.14159 * pow(r, 2);

    // Saída de dados
    cout << fixed << setprecision(3); // Quantidade de casas decimais
    cout << "A area do circulo e " << area;

    return 0;
}