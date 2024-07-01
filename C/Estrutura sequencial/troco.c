/*Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o pre�o
unit�rio do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que
haja dinheiro suficiente para o troco). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.*/

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

#include <stdio.h>

int main()
{
    // Definindo as vari�veis
    double precoUnitario, precoTotal, troco, dinheiroRecebido;
    int quantidade;

    // Entrada de dados
    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    // Art�ficio matem�tico para o troco
    precoTotal = precoUnitario * quantidade;
    troco = dinheiroRecebido - precoTotal;

    // Sa�da de dados
    printf("Troco = %.2lf", troco);

    return 0;
}
