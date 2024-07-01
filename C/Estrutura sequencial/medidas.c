/*Fazer um programa para ler tr�s medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados com quatro casas decimais)
A) A �rea do quadrado que tem lado A
B) A �rea do tri�ngulo ret�ngulo que tem base A e altura B
C) A �rea do trap�zio que tem base A e B, e altura C
*/

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

#include <stdio.h>

int main()
{
    double a,b,c, areaQuadrado, areaTriangulo, areaTrapezio;

    // Entrada de dados
    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    // Art�ficio matem�tico
    areaQuadrado = a * a;
    areaTriangulo = (a*b)/2;
    areaTrapezio = (a+b)*c/2; // � necess�rio o parenteses, pois a ordem de preced�ncia � a soma!

    // Sa�da de dados
    printf("Area do quadrado = %.4lf\n", areaQuadrado);
    printf("Area do triangulo = %.4lf\n", areaTriangulo);
    printf("Area do trapezio = %.4lf\n", areaTrapezio);

    return 0;
}
