// Biblioteca(s)
#include <stdio.h>

int main()
{
    // Variaveis
    double salario, porcentagem, aumento, novoSalario;

    // Entrada de dados
    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    // Condicional
    if (salario <= 1000) {
        porcentagem = 0.2;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        printf("O novo salario e de R$%.2lf, o aumento foi de R$%.2lf, pois foi acrescentado %.lf porc.", novoSalario, aumento, porcentagem*100);
    }

    else if (salario <= 3000) {
        porcentagem = 0.15;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        printf("O novo salario e de R$%.2lf, o aumento foi de R$%.2lf, pois foi acrescentado %.lf porc.", novoSalario, aumento, porcentagem*100);
    }

    else if (salario <= 8000) {
        porcentagem = 0.1;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        printf("O novo salario e de R$%.2lf, o aumento foi de R$%.2lf, pois foi acrescentado %.lf porc.", novoSalario, aumento, porcentagem*100);
    }

    else {
        porcentagem = 0.05;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        printf("O novo salario e de R$%.2lf, o aumento foi de R$%.2lf, pois foi acrescentado %.lf porc.", novoSalario, aumento, porcentagem*100);
    }

    return 0;
}