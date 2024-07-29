// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int dentro, fora, quant, i, num;

    dentro = 0;
    fora = 0;

    // Entrada de dados
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &quant);

    // Estrutura repetitiva
    for (i=1; i <= quant ; i++) {
        // Entrada de dados
        printf("Digite um numero: ");
        scanf("%d", &num);

        // Estrutura condicional
        if (num > 20 || num < 10) {
            fora = fora + 1;
        }
        else {
            dentro = dentro + 1;
        }
    }

    // Saída de dados
    printf("De acordo com os dados digitados temos %d dentro e %d fora.", dentro, fora);

    return 0;
}