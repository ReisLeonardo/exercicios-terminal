/* Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os nomes e a idade média entre essas
pessoas, com uma casa decimal. */

#include <stdio.h>

int main()
{
    // Declarando as variáveis
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    // Entrada de dados
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1); // Se não tivesse esse comando ele iria pular para "Idade" da próxima etapa e ia bagunçar o programa.
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END); // Usado pelo mesmo motivo do último aviso, mas para quebrar a linha nesse caso.
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    // Artifício matemático para calcular a média das idades
    media = (double) (idade1+idade2)/2; // Precisa forçar o casting do double

    // Saída de dados
    printf("A idade media de %s e %s e de %.1lf anos de idade", nome1, nome2, media);

    return 0;
}
