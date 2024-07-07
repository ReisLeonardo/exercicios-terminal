// Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que
// o aluno obteve (com uma casa decimal) no ano juntamente com um texto aplicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem
// "REPROVADO".

// Biblioteca(s)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Variaveis
    double nota1, nota2, soma;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    // Algoritmo matemático
    soma = nota1+nota2;

    // Condicional
    printf("Nota final = %.1lf\n", soma);
    if (soma < 60) {
        printf("REPROVADO\n");
    }

    return 0;
}