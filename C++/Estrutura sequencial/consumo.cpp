// Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo médio do carro, com três casas decimais.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

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