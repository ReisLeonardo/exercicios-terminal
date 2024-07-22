// Biblioteca(s)
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variável
    double nota1, nota2, media;

    // Entrada de dados
    cout << "Digite a primeira nota: ";
    cin >> nota1;

    // Estrutura repetitiva
    while (nota1 < 0 || nota1 > 10) {
        cout << "Valor invalido! Tente novamente: ";
        cin >> nota1;
    }

    // Entrada de dados
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    // Estrutura repetitiva
    while (nota2 < 0 || nota2 > 10) {
        cout << "Valor invalido! Tente novamente: ";
        cin >> nota2;
    }

    // Estrutura condicional
    if (nota1 == 0 && nota2 == 0) {
        cout << "Programa terminado!";
    }
    else {
        media = (nota1 + nota2) / 2;
        cout << fixed << setprecision(2);
        cout << "A media entre " << nota1 << " e " << nota2 << " e de " << media << endl;
        // Estrutura repetitiva
        while (nota1 != 0 && nota2 != 0) {
            // Entrada de dados
            cout << "Digite a primeira nota: ";
            cin >> nota1;

            // Estrutura repetitiva
            while (nota1 < 0 || nota1 > 10) {
                cout << "Valor invalido! Tente novamente: ";
                cin >> nota1;
            }

            // Entrada de dados
            cout << "Digite a segunda nota: ";
            cin >> nota2;

            // Estrutura repetitiva
            while (nota2 < 0 || nota2 > 10) {
                cout << "Valor invalido! Tente novamente: ";
                cin >> nota2;
            }

            // Estrutura condicional
            if (nota1 == 0 && nota2 == 0) {
                cout << "Programa terminado!";
            }
            else {
                media = (nota1 + nota2) / 2;
                cout << "A media entre " << nota1 << " e " << nota2 << " e de " << media << endl;
            }
        }
    }

    return 0;
}
