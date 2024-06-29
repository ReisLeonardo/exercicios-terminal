// Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes números.

#include <stdio.h>

int main()
{
    // Definindo as variáveis
    int x, y, soma;

    // Entrada de dados
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    // Artifício matemático para calcular a soma
    soma = x+y;

    // Saída de dados
    printf("SOMA = %d", soma);


    return 0;
}
