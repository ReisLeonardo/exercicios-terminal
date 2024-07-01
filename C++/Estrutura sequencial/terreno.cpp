// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado (m²) do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

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