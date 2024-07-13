// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double glicose;
    string classificacao;

    // Entrada de dados
    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    // Condicional
    if (glicose <= 100) {
        classificacao = "normal";
    }

    else if (glicose > 100 && glicose <= 140) {
        classificacao = "elevado";
    }

    else {
        classificacao = "diabetico(a)";
    }

    // Saída de dados
    cout << "Sua glicose foi classificada como " << classificacao << ".";

    return 0;
}