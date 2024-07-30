// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    int n, i, tabuada;

    tabuada = 0;

    // Entrada de dados
    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    // Estrutura repetitiva
    for (i=1; i <= 10; i++) {
        // Algoritmo matemático
        tabuada = n * i;
        cout << n << " x " << i << " = " << tabuada << endl;
    }

    return 0;
}