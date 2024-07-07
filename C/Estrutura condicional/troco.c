// Faça um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante.

// A linguagem C não lida muito bem com acentos! Então evite usá-los!

// Biblioteca(s)
#include <stdio.h>

int main()
{
    // Variáveis
    double unidade, recebido, total, troco;
    int quantidade;

    // Entrada de dados
    printf("Qual e o preço unitario do produto? RS");
    scanf("%lf", &unidade);
    printf("Quantas quantidades? ");
    scanf("%d", &quantidade);
    printf("Quanto o(a) cliente pagou? ");
    scanf("%lf", &recebido);

    // Algoritmo matemático
    total = unidade * quantidade;
    troco = recebido - total;

    // Condicional
    if (troco > 0) {
        printf("O(a) cliente comprou no total RS%.2lf, pagou RS%.2lf e portanto o seu troco e de R$%.2lf.", total, recebido, troco);
    }
    else {
        troco = troco * -1; // Artifício que retira o sinal negativo
        printf("Dinheiro insuficiente. Faltam R$%.2lf.", troco);
    }

    return 0;
}