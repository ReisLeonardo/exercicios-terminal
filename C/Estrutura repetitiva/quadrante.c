// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int x, y;

    // Entrada de dados
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    // Estrutura condicional
    if (x != 0 && y != 0) {
        // Estrutura repetitiva
        while (x != 0 && y != 0) {
            // Estrutura condicional
            if (x > 0 && y > 0) {
                printf("Suas coordenadas pertencem ao primeiro quadrante (Q1).\n");
            }
            else if (x < 0 && y > 0) {
                printf("Suas coordenadas pertencem ao segundo quadrante (Q2).\n");
            }
            else if (x < 0 && y < 0) {
                printf("Suas coordenadas pertencem ao terceiro quadrante (Q3).\n");
            }
            else {
                printf("Suas coordenadas pertencem ao quarto quadrante (Q4).\n");
            }

            // Adiciona uma linha em branco antes de solicitar novos valores
            printf("\nDigite o valor de X: ");
            scanf("%d", &x);
            printf("Digite o valor de Y: ");
            scanf("%d", &y);
        }
    }

    // Saída de dados
    printf("O programa foi terminado!");

    return 0;
}
