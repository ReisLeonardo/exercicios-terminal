// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int fat, n, i;

    fat = 1;

    // Entrada de dados
    printf("Digite um valor entre 0 a 15: ");
    scanf("%d", &n);

    // Estrutura repetitiva
    for (i=n; i > 0 ; i--) { // Precisa ter "i--" para realizar a operação reversa...
        // Algoritmo matemático
        fat = fat * i;
    }

    // Saída de dados
    printf("\nO fatorial de %d! = %d", n, fat);

    return 0;
}