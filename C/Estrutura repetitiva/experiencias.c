// Biblioteca
#include <stdio.h>

int main()
{
    // Variáveis
    int quantCoSoma, quantCoeSoma, quantRaSoma, quantSaSoma, quant, i, quantCo, totalCo;
    char tipoCo;
    double percCoe, percRa, percSa;

    quantCoSoma = 0;
    quantCoeSoma = 0;
    quantRaSoma = 0;
    quantSaSoma = 0;
    totalCo = 0;

    // Entrada de dados
    printf("Digite a quantidade de casos que voce vai trabalhar: ");
    scanf("%d", &quant);

    // Estrutura repetitiva
    for (i = 0; i < quant; i++) {
        // Entrada de dados
        printf("Quantidade de cobaia(s): ");
        scanf("%d", &quantCo);

        printf("Tipo de cobaia (C/R/S): ");
        scanf(" %c", &tipoCo);

        // Algoritmo matemático
        quantCoSoma += quantCo;

        // Estrutura condicional
        if (tipoCo == 'C') {
            quantCoeSoma += quantCo;
        }
        else if (tipoCo == 'R') {
            quantRaSoma += quantCo;
        }
        else if (tipoCo == 'S') {
            quantSaSoma += quantCo;
        }
    }

    // Algoritmo matemático
    totalCo = quantCoeSoma + quantRaSoma + quantSaSoma;
    percCoe = (double) quantCoeSoma / totalCo * 100;
    percRa = (double) quantRaSoma / totalCo * 100;
    percSa = (double) quantSaSoma / totalCo * 100;

    // Saída de dados
    printf("Relatorio final\nTotal: %d cobaias.\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf%%\nPercentual de ratos: %.2lf%%\nPercentual de sapos: %.2lf%%\n", quantCoSoma, quantCoeSoma, quantRaSoma, quantSaSoma, percCoe, percRa, percSa);

    return 0;
}