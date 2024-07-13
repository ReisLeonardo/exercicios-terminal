// Bibliotecas
#include <iostream>

using namespace std;

int main()
{
    // Variáveis
    double nota1, nota2, soma;

    // Entrada de dados
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    // Algoritmo matemático
    soma = nota1 + nota2;

    // Condicional
    cout << "A sua nota final foi = " << soma;
    if (soma < 60) {
        cout << ", voce foi reprovado(a)!";
    }
    return 0;
}