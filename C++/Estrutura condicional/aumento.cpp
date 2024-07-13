// Biblioteca(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double salario, porcentagem, aumento, novoSalario;

    // Entrada de dados
    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    // Condicional
    if (salario <= 1000) {
        porcentagem = 0.2;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        cout << fixed << setprecision(2);
        cout << "O novo salario e de R$" << novoSalario << ", o aumento foi de R$" << aumento << ", pois foi acrescentado " << porcentagem*100 << "%.";
    }

    else if (salario <= 3000) {
        porcentagem = 0.15;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        cout << fixed << setprecision(2);
        cout << "O novo salario e de R$" << novoSalario << ", o aumento foi de R$" << aumento << ", pois foi acrescentado " << porcentagem*100 << "%.";
    }

    else if (salario <= 8000) {
        porcentagem = 0.1;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        cout << fixed << setprecision(2);
        cout << "O novo salario e de R$" << novoSalario << ", o aumento foi de R$" << aumento << ", pois foi acrescentado " << porcentagem*100 << "%.";
    }

    else {
        porcentagem = 0.05;
        aumento = salario * porcentagem;
        novoSalario = salario + aumento;
        cout << fixed << setprecision(2);
        cout << "O novo salario e de R$" << novoSalario << ", o aumento foi de R$" << aumento << ", pois foi acrescentado " << porcentagem*100 << "%.";
    }

    return 0;
}