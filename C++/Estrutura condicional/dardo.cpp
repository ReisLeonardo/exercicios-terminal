// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double distancia1, distancia2, distancia3, maior;

    // Entrada de dados
    cout << "Digite a primeira distancia: ";
    cin >> distancia1;

    cout << "Digite a segunda distancia: ";
    cin >> distancia2;

    cout << "Digite a terceira distancia: ";
    cin >> distancia3;

    // Condicional
    if (distancia1 > distancia2 && distancia1 > distancia3) {
        maior = distancia1;
    }

    else if (distancia2 > distancia1 && distancia2 > distancia3) {
        maior = distancia2;
    }

    else {
        maior = distancia3;
    }

    // Saída de dados
    cout << fixed << setprecision(2);
    cout << "A maior distancia e " << maior;

    return 0;
}