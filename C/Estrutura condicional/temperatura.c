// Bibiloteca(s)
#include <stdio.h>

int main()
{
    // Variável
    char escala;
    double celsius, celsiustof, fahrenheit, fahrenheittoc;

    // Entrada de dados
    printf("Escolha uma escala (C/F): ");
    scanf("%c", &escala);

    // Condicional
    if (escala == 'F') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsiustof = (5.0 / 9.0) * (fahrenheit - 32); // Precisa colocar em decimal
        printf("A temperatura equivale a %.2lf oF", celsiustof);
    }
    else if (escala == 'C') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);
        fahrenheittoc = celsius * 1.8 + 32;
        printf("A temperatura equivale a %.2lf oF", fahrenheittoc);
    }
    else {
        printf("Nenhuma das escalas foi alcancada, tente novamente...");
    }

    return 0;
}