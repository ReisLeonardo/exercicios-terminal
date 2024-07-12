// Bibiloteca(s)
#include <stdio.h>

int main()
{
    // Variável
    double glicose;
    char classificacao[12]; // A maior palavra é diabetico(a) por isso estou definindo o char como 12.

    // Entrada de dados
    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    // Condicional
    if (glicose <= 100) {
        strcpy(classificacao, "normal");
    }
    else if (glicose > 100 && glicose <= 140) {
        strcpy(classificacao, "elevado");
    }
    else {
        strcpy(classificacao, "diabetico(a)");
    }

    // Saída de dados
    printf("Sua glicose foi classificada como %s.", classificacao);

    return 0;
}
