// Biblioeteca(s)
#include <stdio.h>

int main()
{
    // Variáveis
    double pagar;
    int quantidade, codigo;


    // Entrada de dados
    printf("Digite o codigo do produto comprado: ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    // Condicional
    if (codigo == 1) {
        pagar = 5 * quantidade;
        printf("O valor total a ser pago pelo produto e de R$%.2lf", pagar);
    }
    else if (codigo == 2) {
        pagar = 3.5 * quantidade;
        printf("O valor total a ser pago pelo produto e de R$%.2lf", pagar);
    }
    else if (codigo == 3) {
        pagar = 4.8 * quantidade;
        printf("O valor total a ser pago pelo produto e de R$%.2lf", pagar);
    }
    else if (codigo == 4) {
        pagar = 8.9 * quantidade;
        printf("O valor total a ser pago pelo produto e de R$%.2lf", pagar);
    }
    else if (codigo == 5) {
        pagar = 7.32 * quantidade;
        printf("O valor total a ser pago pelo produto e de R$%.2lf", pagar);
    }
    else {
        printf("Error!");
    }
    return 0;
}