// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double celsius, celsiustof, fahrenheit, fahrenheittoc;
    string escala;

    // Entrada de dados
    cout << "Escolha uma escala (C/F): ";
    cin >> escala;

    // Condicional
    if (escala == "F" || escala == "f") {
        cout << "Digite a temperatura em fahrenheit: ";
        cin >> fahrenheit;
        celsiustof = (5.0 / 9.0) * (fahrenheit - 32);
        cout << fixed << setprecision(2);
        cout << "A temperatura equivale a " << celsiustof << "oC.";
    }

    else if (escala == "C" || escala == "c") {
        cout << "Digite a temperatura em celsius: ";
        cin >> celsius;
        fahrenheittoc = celsius * 1.8 + 32;
        cout << fixed << setprecision(2);
        cout << "A temperatura equivale a " << fahrenheittoc << "oF.";
    }

    else {
        cout << "Nenhuma das escalas foi alcancada, tente novamente...";
    }

    return 0;
}