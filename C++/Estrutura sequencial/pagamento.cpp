// Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa.

// A linguagem C++ não lida muito bem com acentos! Então evite usá-los!

// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    string nome;
    double valorHora, pagamento;
    int horaTrabalhada;

    // Entrada de dados
    cout << "Nome: ";
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorHora;

    cout << "Horas trabalhadas: ";
    cin >> horaTrabalhada;

    // Algoritmo matemático
    pagamento = (double) valorHora * horaTrabalhada;

    // Saída de dados
    cout << fixed << setprecision(2); // Quantidade de casas decimais
    cout << "O pagamento para " << nome << " deve ser R$" << pagamento;

    return 0;
}