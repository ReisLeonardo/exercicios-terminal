// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int codigo, alcool, gasolina, diesel;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    // Entrada de dados
    printf("Informe um codigo (1. Alcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ");
    scanf("%d", &codigo);

    // Estrutura repetitiva
    while (codigo != 4) {
        // Estrutura condicional
        if (codigo == 1) {
            alcool = alcool + 1;
        }
        else if (codigo == 2) {
            gasolina = gasolina + 1;
        }
        else if (codigo == 3) {
            diesel = diesel + 1;
        }

        // Entrada de dados da estrutura repetitiva
        printf("Informe um codigo (1. Alcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ");
        scanf("%d", &codigo);
    }

    // Saída de dados
    printf("Muito obrigado!\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d", alcool, gasolina, diesel);

    return 0;
}
