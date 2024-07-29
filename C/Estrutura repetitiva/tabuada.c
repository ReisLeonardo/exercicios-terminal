// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int n, i, tabuada;

    tabuada = 0;

    // Entrada de dados
    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    // Estrutura repetitiva
    for (i=1; i <= 10; i++) {
        // Algoritmo matemático
        tabuada = n * i;
        printf("%d x %d = %d\n", n, i, tabuada);
    }

    return 0;
}