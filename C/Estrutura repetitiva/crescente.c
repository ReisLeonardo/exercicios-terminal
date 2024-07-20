// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int x, y;

    // Entrada de dados
    printf("Digite dois numeros:\n"); // Quebra de linha
    scanf("%d", &x);
    scanf("%d", &y);

    // Estrutura repetitiva
    while (x != y) {
        // Estrutura condicional
        if (x > y) {
            printf("Decrescente, afinal %d e maior que %d .\n", x, y);
        }

        else {
            printf("Crescente, afinal %d e menor que %d .\n", x, y);
        }

        // Leitura de dados da estrutura repetitiva
        printf("Digite dois numeros:\n"); // Quebra de linha
        scanf("%d", &x);
        scanf("%d", &y);
    }

    return 0;
}
