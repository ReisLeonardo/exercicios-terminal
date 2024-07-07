// Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que
// o aluno obteve (com uma casa decimal) no ano juntamente com um texto aplicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem
// "REPROVADO".

// Evite utilizar acentos na linguagem C++

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