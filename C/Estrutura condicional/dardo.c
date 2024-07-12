// Bibiloteca(s)
#include <stdio.h>

int main()
{
    // Variável
    double distancia1, distancia2, distancia3, maior;

    // Entrada de dados
    printf("Digite a primeira distancia: ");
    scanf("%lf", &distancia1);

    printf("Digite a segunda distancia: ");
    scanf("%lf", &distancia2);

    printf("Digite a terceira distancia: ");
    scanf("%lf", &distancia3);

    // Condicional
    if (distancia1 > distancia2 && distancia1 > distancia3) {
        maior = distancia1;
    }
    else if (distancia2 > distancia1 && distancia2 > distancia3) {
        maior = distancia2;
    }
    else {
        maior = distancia3;
    }

    // Saída de dados
    printf("A maior distancia e %.2lf", maior);

    return 0;
}