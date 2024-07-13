// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double largura, comprimento, metroQuadrado, area, preco;

    // Entrada de dados
    cout << "Digite a largura do terreno: ";
    cin >> largura;
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> metroQuadrado;


    // Algoritmo matemático
    area = largura * comprimento;
    preco = area * metroQuadrado;

    // Saída de dados
    cout << fixed << setprecision(2); // Quantidade de casas decimais
    cout << "A area do terreno e de " << area << "m^2 e o seu preco e de R$" << preco;

    return 0;
}