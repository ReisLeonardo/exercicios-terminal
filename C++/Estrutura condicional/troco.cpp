// Faça um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o valor restante.

// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double unidade, recebido, total, troco;
    int quantidade;

    // Entrada de dados
    cout << "Qual e o preco unitario do produto? RS ";
    cin >> unidade;

    cout << "Qual a quantidade? ";
    cin >> quantidade;

    cout << "Quanto o(a) cliente pagou? RS ";
    cin >> recebido;

    // Algoritmo matemático
    total = unidade * quantidade;
    troco = recebido - total;

    // Condicional
    if (troco > 0) {
        cout << fixed << setprecision(2);
        cout << "O(a) cliente comprou no total RS" << total << ", pagou RS " << recebido << " e portanto o seu troco e de RS " << troco;
    }
    else {
        troco = troco * -1; // Artifício matemático
        cout << fixed << setprecision(2);
        cout << "Dinheiro insuficiente. Faltam RS " << troco;
    }

    return 0;
}