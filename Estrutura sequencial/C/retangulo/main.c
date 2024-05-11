/* Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal
deste retângulo, com quatro casas decimais. */

#include <stdio.h>
#include <math.h>

int main()
{
    // Definindo as variáveis
    double base, altura, area, perimetro, diagonal;

    // Entrada de dados e armazenamento de dados nas variáveis
    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    // Artíficios matemáticos do programa
    area = base*altura;
    perimetro = 2*base + 2*altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); // sqrt é raiz quadrada e pow é potência

    // Saída de dados
    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diagonal);

    return 0;
}
