// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente para o troco). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double precoUnitario, precoTotal, dinheiroRecebido, troco;
    int quantidade;

    // Entrada de dados
    cout << "Preco unitario do produto: ";
    cin >> precoUnitario;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiroRecebido;

    // Algoritmo matemático
    precoTotal = (double) precoUnitario * quantidade;
    troco = dinheiroRecebido - precoTotal;

    // Saída de dados
    cout << fixed << setprecision(2); // Quantidade de casas decimais
    cout << "O troco que o cliente deve receber e de R$" << troco;

    return 0;
}