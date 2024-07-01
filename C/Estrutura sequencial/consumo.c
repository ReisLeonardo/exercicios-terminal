/* Fazer um programa para ler a dist�ncia total (em km) percorrida por um ve�culo, bem como o total de combust�vel gasto por este ve�culo ao percorrer
tal dist�ncia. Seu programa deve mostrar o consumo m�dio do carro, com tr�s casas decimais.*/

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

#include <stdio.h>

int main()
{
    // Recomendo usar nomes menores para as vari�veis
    double consumoMedio, combustivelGasto;
    int distanciaPercorrida;

    printf("Distancia percorrida: ");
    scanf("%d", &distanciaPercorrida);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGasto);

    // Art�ficio matem�tico
    consumoMedio = distanciaPercorrida / combustivelGasto;

    // Sa�da de dados
    printf("Consumo medio = %.3lf", consumoMedio);

    return 0;
}
