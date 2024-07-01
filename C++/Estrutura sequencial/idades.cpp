// Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas pessoas, com uma casa decimal.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    string nome1, nome2;
    int idade1, idade2;
    double mediaidade;

    // Entrada de dados
    cout << "Dados da primeira pessoa:" << endl;
    cout << "Nome: ";
    getline(cin, nome1); // Ler o texto até a quebra de linha
    cout << "Idade: ";
    cin >> idade1;


    cout << "Dados da segunda pessoa:" << endl;
    cin.ignore(INT_MAX, '\n'); // Limpeza de buffer
    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    // Algoritmo matemático
    mediaidade = (double) (idade1+idade2)/2; // Convertendo para double para ter resultado considerando a casa decimal

    // Saída de dados
    cout << fixed << setprecision(1); // Quantidade de casas decimais
    cout << "A idade media de " << nome1 << " e " << nome2 << " e de " << mediaidade << " anos de idade.";

    return 0;
}