/*Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço
unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que
haja dinheiro suficiente para o troco). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.*/

#include <stdio.h>

int main()
{
    // Definindo as variáveis
    double precoUnitario, precoTotal, troco, dinheiroRecebido;
    int quantidade;

    // Entrada de dados
    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    // Artíficio matemático para o troco
    precoTotal = precoUnitario * quantidade;
    troco = dinheiroRecebido - precoTotal;

    // Saída de dados
    printf("Troco = %.2lf", troco);

    return 0;
}
