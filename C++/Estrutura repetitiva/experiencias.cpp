// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int quantCoSoma, quantCoeSoma, quantRaSoma, quantSaSoma, quant, i, quantCo, totalCo;
    double percCoe, percRa, percSa;
    char tipoCo;

    quantCoSoma = 0;
    quantCoeSoma = 0;
    quantRaSoma = 0;
    quantSaSoma = 0;
    totalCo = 0;

    // Entrada de dados
    cout << "Digite a quantidade de casos que voce vai trabalhar: ";
    cin >> quant;

    // Estrutura repetitiva
    for (i=0; i < quant; i++) {
        // Entrada de dados
        cout << "Quantidade de cobaia(s): ";
        cin >> quantCo;

        cout << "Tipo de cobaia (C/R/S): ";
        cin >> tipoCo;

        // Algoritmo matemático
        quantCoSoma += quantCo;

        // Estrutura condicional
        if (tipoCo == 'C') {
            quantCoeSoma += quantCo;
        }
        else if (tipoCo == 'R') {
            quantRaSoma += quantCo;
        }
        else if (tipoCo == 'S') {
            quantSaSoma += quantCo;
        }
    }

    // Algoritmo matemático
    totalCo = quantCoeSoma + quantRaSoma + quantSaSoma;
    percCoe = (double) quantCoeSoma / totalCo * 100;
    percRa = (double) quantRaSoma / totalCo * 100;
    percSa = (double) quantSaSoma / totalCo * 100;

    // Saída de dados
    cout << fixed << setprecision(2);
    cout << "Relatorio final" << endl << "Total: " << quantCoSoma << " cobaias." << endl << "Total de coelhos: " << quantCoeSoma << endl << "Total de ratos: " << quantRaSoma << endl << "Total de sapos: " << quantSaSoma << endl << "Percentual de coelhos: " << percCoe << endl << "Percentual de ratos: " << percRa << endl << "Percentual de sapos: " << percSa;

    return 0;
}