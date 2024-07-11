// Biblioeteca(s)
#include <stdio.h>

int main()
{
    // Variáveis
    int x, y, novo;


    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    // Condicional
    if (x % y == 0 || y % x == 0) {
        printf("Sao multiplos!");
    }
    else {
        printf("Nao sao multiplos");
    }

    return 0;
}