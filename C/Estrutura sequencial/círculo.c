/* Fazer um programa para ler o valor "r" do raio de um c�rculo, e depois mostrar o valor da �rea do c�rculo com tr�s casas decimais. */

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

#include <stdio.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    // Art�ficio matem�tico para calculo da �rea
    area = 3.14159 * raio * raio;

    // Sa�da de dados
    printf("AREA = %.3lf", area);

    return 0;
}
