// Biblioteca(s)
#include <stdio.h>

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
        printf("REPROVADO(A)\n");
    }

    return 0;
}