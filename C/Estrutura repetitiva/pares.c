// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int soma, numero;

    soma = 0;

    // Entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Estrutura repetitiva
    while (numero != 0) {
        // Estrutura condicional para ver se o número é ímpar
        if (numero %2 != 0) {
            numero = numero + 1;
        }

        // Algoritmo matemático
        soma = 5 * numero + 20; // É igual a: número + número + 2 + número + 4 + número + 6 + número + 8

        // Saída de dados da estrutura repetitiva
        printf("A soma consecutiva dos 5 pares e %d\n", soma);

        // Entrada de dados da estrutura repetitiva
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
    }

    return 0;
}
