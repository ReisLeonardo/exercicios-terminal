// Uma operadora de telefonia cobra R$ 50,00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2,00. Faça um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostre o valor a ser pago.

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

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