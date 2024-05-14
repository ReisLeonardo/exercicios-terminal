/*Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final
mostrar o valor do pagamento do funcionário(a) com uma mensagem explicativa.*/

#include <stdio.h>

int main()
{
    char nome[50];
    double valorHora, pagamento;
    int valorTrabalhado;

    printf("Nome: ");
    gets(nome);
    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &valorTrabalhado);

    // Artíficio matemático
    pagamento = valorHora * valorTrabalhado;

    // Saída de dados
    printf("O pagamento para %s deve ser R$ %.3lf", nome, pagamento);

    return 0;
}
