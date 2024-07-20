// Biblioteca(s)
#include <iostream>

using namespace std;

int main()
{
    // Variável
    int senha;

    // Entrada de dados
    cout << "Digite a senha: ";
    cin >> senha;

    // Estrutura repetitiva
    while (senha != 2024) {
        cout << "Senha invalida! Tente novamente: ";
        cin >> senha;
    }

    // Saída de dados
    cout << "Acesso permitido!";

    return 0;
}
