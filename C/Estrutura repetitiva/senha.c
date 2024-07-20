// Biblioteca
#include <stdio.h>

int main()
{
    // Variável
    int senha;

    // Entrada de dados
    printf("Digite a senha: ");
    scanf("%d", &senha);

    // Estrutura repetitiva
    while (senha != 2024) {
        printf("Senha invalida! Tente novamente: ");
        scanf("%d", &senha);
    }

    // Saída de dados
    printf("Acesso permitido!");

    return 0;
}
