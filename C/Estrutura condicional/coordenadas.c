// Biblioeteca(s)
#include <stdio.h>

int main()
{
    // Variáveis
    double x, y;

    // Entrada de dados
    printf("Digite o valor x: ");
    scanf("%lf", &x);

    printf("Digite o valor y: ");
    scanf("%lf", &y);

    // Condicional
    if (x == 0 && y == 0) {
        printf("Suas coordenadas pertencem a ORIGEM.");
    }

    else if (x > 0 && y == 0) {
        printf("Suas coordenadas pertencem ao EIXO X.");
    }

    else if (y > 0 && x == 0) {
        printf("Suas coordenadas pertencem ao EIXO Y.");
    }

    else if (x > 0 && y > 0) {
        printf("Suas coordenadas pertencem ao primeiro quadrante (Q1).");
    }

    else if (x < 0 && y > 0) {
        printf("Suas coordenadas pertencem ao segundo quadrante (Q2).");
    }

    else if (x < 0 && y < 0) {
        printf("Suas coordenadas pertencem ao terceiro quadrante (Q3).");
    }

    else {
        printf("Suas coordenadas pertencem ao quarto quadrante (Q4).");
    }

    return 0;
}