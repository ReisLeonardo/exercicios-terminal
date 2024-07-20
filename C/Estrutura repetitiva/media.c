// Biblioteca
#include <stdio.h>

int main()
{

    // Variável
    int soma, contador, idade;
    double media;
    soma = 0;
    contador = 0;

    // Entrada de dados
    printf("Digite as idades: ");
    scanf("%d", &idade);

    // Estrutura condicional
    if (idade < 0) {
        printf("Impossivel calcular uma idade negativa!");
    }

    else {
        // Estrutura repetitiva
        while (idade >= 0) {
            soma = soma + idade;
            contador = contador + 1;
            scanf("%d", &idade);
        }

        // Saída de dados
        media = (double) soma / contador;
        printf("A media das idades das %d pessoas e de %.2lf", contador, media);
    }

    return 0;
}
