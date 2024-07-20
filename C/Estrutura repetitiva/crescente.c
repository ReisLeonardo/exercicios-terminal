// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int x, y;

    // Entrada de dados
    printf("Digite dois numeros:\n"); // Quebra de linha
    scanf("%d", x);
    scanf("%d", y);

    while (x != y) {
        if (x > y) {
            printf("Decrescente, afinal ", x, " e maior que ", y, ".");
        }

        else {
            printf("Crescente, afinal ", y, " e menor que ", x, ".")
        }

        // Leitura de dados da estrutura repetitiva
        printf("Digite dois numeros:\n"); // Quebra de linha
        scanf("%d", x);
        scanf("%d", y);
    }

    return 0;
}