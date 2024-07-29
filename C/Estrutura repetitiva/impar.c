// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int quant, i, num;

    // Entrada de dados
    printf("Digite quantos numeros voce vai digitar: ");
    scanf("%d", &quant);

    // Estrutura repetitiva
    for (i=1; i <= quant ; i++) {
        // Entrada de dados
        printf("Digite um numero: ");
        scanf("%d", &num);

        // Estrutura condicional
        if (num < 0 && num % 2 != 0) {
            printf("Impar negativo!\n");
        }
        else if (num < 0 && num %2 == 0) {
            printf("Par negativo!\n");
        }
        else if (num == 0) {
            printf("Nulo!\n");
        }
        else if (num > 0 && num % 2 != 0) {
            printf("Impar positivo!\n");
        }
        else {
            printf("Par positivo!\n");
        }
    }

    return 0;
}