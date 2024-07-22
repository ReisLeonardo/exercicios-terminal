// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    double nota1, nota2, media;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    // Estrutura repetitiva
    while (nota1 < 0 || nota1 > 10) {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota1);
    }

    // Entrada de dados
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    // Estrutura repetitiva
    while (nota2 < 0 || nota2 > 10) {
        printf("Valor invalido! Tente novamente: ");
        scanf("%lf", &nota2);
    }

    // Estrutura condicional
    if (nota1 == 0 && nota2 == 0) {
        printf("Programa terminado!");
    }
    else {
        media = (nota1 + nota2) / 2;
        printf("A media entre %.2lf e %.2lf e de %.2lf.\n", nota1, nota2, media);
        // Estrutura repetitiva
        while (nota1 != 0 && nota2 != 0) {
            // Entrada de dados
            printf("Digite a primeira nota: ");
            scanf("%lf", &nota1);

            // Estrutura repetitiva
            while (nota1 < 0 || nota1 > 10) {
            printf("Valor invalido! Tente novamente: ");
            scanf("%lf", &nota1);
            }

            // Entrada de dados
            printf("Digite a segunda nota: ");
            scanf("%lf", &nota2);

            // Estrutura repetitiva
            while (nota2 < 0 || nota2 > 10) {
            printf("Valor invalido! Tente novamente: ");
            scanf("%lf", &nota2);
            }

            // Estrutura condicional
            if (nota1 == 0 && nota2 == 0) {
                printf("Programa terminado!");
            }
            else {
                media = (nota1 + nota2) / 2;
                printf("A media entre %.2lf e %.2lf e de %.2lf.\n", nota1, nota2, media);
            }
        }
    }

    return 0;
}
