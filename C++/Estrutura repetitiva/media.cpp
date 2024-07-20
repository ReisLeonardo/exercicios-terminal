// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int soma, contador, idade;
    double media;
    soma = 0;
    contador = 0;

    // Entrada de dados
    cout << "Digite as idades: ";
    cin >> idade;

    // Estrutura condicional
    if (idade < 0) {
        cout << "Impossivel calcular uma idade negativa!";
    }

    else {
        // Estrutura repetitiva
        while (idade >= 0) {
            soma = soma + idade;
            contador = contador + 1;
            cin >> idade;
        }

        // Saída de dados da estrutura repetitiva
        media = (double) soma / contador;
        cout << "A media das idades das " << contador << " pessoas e de " << fixed << setprecision(2) << media;
    }

    return 0;
}
