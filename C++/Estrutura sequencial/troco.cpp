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