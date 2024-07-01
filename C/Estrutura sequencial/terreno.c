/* Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor
do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da �rea do terreno, bem como
o valor do pre�o do terreno, ambos com duas casas decimais. */

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

// Importando a biblioteca padr�o da linguagem C
#include <stdio.h>

// Corpo do c�digo
int main() {

    // Declarando as vari�veis necess�rias
    double largura, comprimento, metroQuadrado, area, preco;

    // Entrada de dados e armazenamentos de dados nas vari�veis
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado do terreno: ");
    scanf("%lf", &metroQuadrado);

    // C�lculo matem�tico
    area = largura * comprimento;
    preco = area * metroQuadrado;

    // Sa�da de dados
    printf("A area do terreno = %.2lf\n", area); // N�o � poss�vel p�r acentos na linguagem C de forma convencional.
    printf("O preco do terreno = %.2lf", preco);


    return 0; // Estrutura necess�ria para terminar o c�digo
}
