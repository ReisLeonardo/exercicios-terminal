// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int quant, i, num, den;
    double divisao;

    // Entrada de dados
    printf("Digite quantos casos voce vai digitar: ");
    scanf("%d", &quant);

    // Estrutura repetitiva
    for (i=1; i <= quant ; i++) {
        // Entrada de dados
        printf("Entre com o numerador: ");
        scanf("%d", &num);
        printf("Entre com o denominador: ");
        scanf("%d", &den);

        // Estrutura condicional
        if (den == 0) {
            printf("Divisao impossivel!\n");
        }
        else {
            // Algoritmo matemático
            divisao = (double) num / den;
            printf("A divisao entre %d / %d e %.2lf\n", num, den, divisao);
        }
    }

    return 0;
}