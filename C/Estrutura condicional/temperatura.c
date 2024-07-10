// Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para isso, construa um programa para ler a letra "C" ou "F" indicando em qual escala vai ser informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais. A fórmula para converter de Celsius para Fahrenheit é C= 5/9 (F-32).

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