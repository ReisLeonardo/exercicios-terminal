// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    int horaInicial, horaFinal, hora;

    // Entrada de dados
    cout << "Digite a hora inicial: ";
    cin >> horaInicial;

    cout << "Digite a hora final: ";
    cin >> horaFinal;

    // Algoritmo matemático
    hora = (24 - horaInicial) + horaFinal;

    // Condicional
    if (horaInicial == 0 && horaFinal == 0) {
        cout << "O jogo durou 24 horas.";
    }

    else if (hora > 24) {
        hora = hora - 24;
        cout << "O jogo durou " << hora << " hora(s).";
    }

    else {
        cout << "O jogo durou " << hora << " hora(s).";
    }

    return 0;
}