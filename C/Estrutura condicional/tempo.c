// Biblioeteca(s)
#include <stdio.h>

int main()
{
    // Variáveis
    int horaInicial, horaFinal, hora;

    // Entrada de dados
    printf("Digite a hora inicial: ");
    scanf("%d", &horaInicial);

    printf("Digite a hora final: ");
    scanf("%d", &horaFinal);

    //  Algoritmo matemático
    hora = (24 - horaInicial) + horaFinal;

    // Condicional
    if (horaInicial == 0 && horaFinal == 0) {
        printf("O JOGO DUROU 24 HORAS.");
    }

    else if (hora > 24) {
        hora = hora - 24;
        printf("O JOGO DUROU %d HORA(S).", hora);
    }

    else {
        printf("O JOGO DUROU %d HORA(S).", hora);
    }

    return 0;
}