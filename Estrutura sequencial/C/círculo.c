/* Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do círculo com três casas decimais. */

#include <stdio.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    // Artíficio matemático para calculo da área
    area = 3.14159 * raio * raio;

    // Saída de dados
    printf("AREA = %.3lf", area);

    return 0;
}
