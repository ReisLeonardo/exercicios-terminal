// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int x, i;

    // Entrada de dados
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    // Estrutura repetitiva
    for (i=1; i <= x ; i++) {
        // Estrutura condicional
        if (i % 2 != 0) {
            // Saída de dados
            printf("%d\n", i);
        }
    }

    return 0;
}