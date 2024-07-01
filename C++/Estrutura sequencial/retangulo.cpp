// Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

// Bibliotecas
#include <bits/stdc++.h>
#include <math.h> // Para poder utilizar a raiz quadrada e a potência

using namespace std;

int main()
{
    // Variáveis
    double base, altura, area, perimetro, diagonal;

    // Entrada de dados
    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;


    // Algoritmo matemático
    area = base * altura;
    perimetro = 2*(base+altura);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    // Saída de dados
    cout << fixed << setprecision(4); // Quantidade de casas decimais
    cout << "A area do retangulo " << area << ", seu perimetro e de " << perimetro << " e a sua diagonal e de " << diagonal;

    return 0;
}