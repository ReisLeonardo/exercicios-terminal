// Biblioteca
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Variáveis
    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

    // Entrada de dados
    cout << "Digite a medida A: : ";
    cin >> a;

    cout << "Digite a medida B: ";
    cin >> b;

    cout << "Digite a medida c: ";
    cin >> c;

    // Algoritmo matemático
    areaQuadrado = pow(a, 2);
    areaTriangulo = (a*b)/2;
    areaTrapezio = (a+b)*c/2;

    // Saída de dados
    cout << fixed << setprecision(4); // Quantidade de casas decimais
    cout << "Area do quadrado = " << areaQuadrado << endl;
    cout << "Area do triangulo = " << areaTriangulo << endl;
    cout << "Area do trapezio = " << areaTrapezio;

    return 0;
}