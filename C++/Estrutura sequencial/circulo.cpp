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