// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int troca, soma, i, num1, num2;

    soma = 0;

    // Entrada de dados
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    // Estrutura condicional
    if (num1 > num2) {
        troca = num1;
        num1 = num2;
        num2 = troca;
    }

    // Estrutura repetitiva
    for (i=num1+1; i < num2; i++) {
        // Estrutura condicional
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    // Saída de dados
    printf("A soma dos impares de %d e %d e %d", num1, num2, soma);

    return 0;
}