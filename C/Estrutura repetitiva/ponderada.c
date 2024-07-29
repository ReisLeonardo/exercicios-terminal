// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int quant, i;
    double num1, num2, num3, media;

    // Entrada de dados
    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &quant);

    // Estrutura repetitiva
    for (i=1; i <= quant ; i++) {
        // Entrada de dados
        printf("Digite o primeiro numero: ");
        scanf("%lf", &num1);
        printf("Digite o segundo numero: ");
        scanf("%lf", &num2);
        printf("Digite o terceiro numero: ");
        scanf("%lf", &num3);

        // Algoritmo matemático
        media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;

        // Saída de dados
        printf("\nA media de %.1lf + %.1lf e %.1lf e de %.1lf\n", num1, num2, num3, media);
    }

    return 0;
}