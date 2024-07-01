/* Fazer um programa para ler as medidas da base e altura de um ret�ngulo. Em seguida, mostrar o valor da �rea, per�metro e diagonal
deste ret�ngulo, com quatro casas decimais. */

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

#include <stdio.h>
#include <math.h>

int main()
{
    // Definindo as vari�veis
    double base, altura, area, perimetro, diagonal;

    // Entrada de dados e armazenamento de dados nas vari�veis
    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    // Art�ficios matem�ticos do programa
    area = base*altura;
    perimetro = 2*base + 2*altura;
    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); // sqrt � raiz quadrada e pow � pot�ncia

    // Sa�da de dados
    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diagonal);

    return 0;
}
