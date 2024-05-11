/* Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor
do metro quadrado do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como
o valor do preço do terreno, ambos com duas casas decimais. */

// Importando a biblioteca padrão da linguagem C
#include <stdio.h>

// Corpo do código
int main() {

    // Declarando as variáveis necessárias
    double largura, comprimento, metroQuadrado, area, preco;

    // Entrada de dados e armazenamentos de dados nas variáveis
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado do terreno: ");
    scanf("%lf", &metroQuadrado);

    // Cálculo matemático
    area = largura * comprimento;
    preco = area * metroQuadrado;

    // Saída de dados
    printf("A area do terreno = %.2lf\n", area); // Não é possível pôr acentos na linguagem C de forma convencional.
    printf("O preco do terreno = %.2lf", preco);


    return 0; // Estrutura necessária para terminar o código
}
