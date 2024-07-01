// Faça um programa para ler uma duração de tempo em segundos, daí imprima na tela esta duração no formato horas:minutos:segundos.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

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