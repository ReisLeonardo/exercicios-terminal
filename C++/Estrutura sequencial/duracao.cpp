// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    int duracao, hora, resto, minuto, segundo;

    // Entrada de dados
    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    // Algoritmo matemático
    hora = duracao / 3600;
    resto = duracao % 3600;
    minuto = resto / 60;
    segundo = resto % 60;

    // Saída de dados
    cout << hora << ":" << minuto << ":" << segundo;

    return 0;
}