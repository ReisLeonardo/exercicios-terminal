// Biblioteca(s)
#include <stdio.h>

int main()
{
    // Variáveis
    int valor1, valor2, valor3, menor;

    // Entrada de dados
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    // Condicional
    if (valor1 < valor2 && valor1 < valor3) {
        menor = valor1;
        printf("O menor valor e %d", valor1);
    }
    else if (valor2 < valor1 && valor2 < valor3) {
        menor = valor2;
        printf("O menor valor e %d", valor2);
    }
    else {
        menor = valor3;
        printf("O menor valor e %d", valor3);
    }

    return 0;
}