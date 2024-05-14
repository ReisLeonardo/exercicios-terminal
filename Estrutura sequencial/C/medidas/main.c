/*Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados com quatro casas decimais)
A) A área do quadrado que tem lado A
B) A área do triângulo retângulo que tem base A e altura B
C) A área do trapézio que tem base A e B, e altura C
*/

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

    // Artíficio matemático
    areaQuadrado = a * a;
    areaTriangulo = (a*b)/2;
    areaTrapezio = (a+b)*c/2; // É necessário o parenteses, pois a ordem de precedência é a soma!

    // Saída de dados
    printf("Area do quadrado = %.4lf\n", areaQuadrado);
    printf("Area do triangulo = %.4lf\n", areaTriangulo);
    printf("Area do trapezio = %.4lf\n", areaTrapezio);

    return 0;
}
