// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    int distanciaPercorrida;
    double combustivelGasto, consumoMedio;

    // Entrada de dados
    cout << "Distancia percorrida: ";
    cin >> distanciaPercorrida;

    cout << "Combustivel gasto: ";
    cin >> combustivelGasto;

    // Algoritmo matemático
    consumoMedio = (double) distanciaPercorrida / combustivelGasto;

    // Saída de dados
    cout << fixed << setprecision(3); // Quantidade de casas decimais
    cout << "O consumo medio e de " << consumoMedio;

    return 0;
}