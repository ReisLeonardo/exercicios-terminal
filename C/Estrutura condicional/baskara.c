// Biblioteca(s)
#include <stdio.h>
#include <math.h>

int main()
{
    // Variáveis
    double a,b,c, delta, x1, x2;

    // Entrada de dados
    printf("Digite o coeficiente A: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente B: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente C: ");
    scanf("%lf", &c);


    // Algoritmo matemático
    delta = pow(b, 2) - 4 * a * c;

    // Condicional
    if (a == 0 || delta < 0) {
        printf("Esta equacao nao possui raizes reais.");
    }
    else {
        x1 = (-b+sqrt(delta))/(2*a);
        x2 = (-b-sqrt(delta))/(2*a);
        printf("O x1 é = %.4lf e o x2 é = %.4lf", x1, x2);
    }

    return 0;
}