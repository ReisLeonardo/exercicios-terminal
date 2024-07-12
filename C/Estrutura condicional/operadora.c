// Biblioteca(s)
#include <stdio.h>
#include <math.h>

int main()
{
    // Variáveis
    int minutos, pagar, gasto;

    // Entrada de dados
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    // Condicional
    if (minutos <= 100) {
        pagar = 50;
        printf("O(a) cliente deve pagar R$ %d por ter consumido %d minuto(s).", pagar, minutos);
    }
    else {
        gasto = 2 * (minutos - 100);
        pagar = 50 + gasto;
        printf("O(a) cliente deve pagar R$ %d por ter consumido %d minuto(s).", pagar, minutos);
    }

    return 0;
}