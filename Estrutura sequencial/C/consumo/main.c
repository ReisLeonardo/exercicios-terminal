/* Fazer um programa para ler a distância total (em km) percorrida por um veículo, bem como o total de combustível gasto por este veículo ao percorrer
tal distância. Seu programa deve mostrar o consumo médio do carro, com três casas decimais.*/

#include <stdio.h>

int main()
{
    // Recomendo usar nomes menores para as variáveis
    double consumoMedio, combustivelGasto;
    int distanciaPercorrida;

    printf("Distancia percorrida: ");
    scanf("%d", &distanciaPercorrida);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGasto);

    // Artíficio matemático
    consumoMedio = distanciaPercorrida / combustivelGasto;

    // Saída de dados
    printf("Consumo medio = %.3lf", consumoMedio);

    return 0;
}
