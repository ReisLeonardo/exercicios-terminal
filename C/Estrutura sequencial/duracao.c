// Faça um programa para ler uma duração de tempo em segundos, daí imprima na tela esta duração no formato horas:minutos:segundos.

#include <stdio.h>

int main()
{
    // Definindo as variáveis
    int duracao;
    int hora;
    int resto;
    int minuto;
    int segundo;


    // Entrada de dados
    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    // Algoritmo matemática para calcular o resultado
    hora = duracao / 3600;
    resto = duracao % 3600;
    minuto = resto / 60;
    segundo = resto % 60;

    // Saída de dados
    printf("%d:%d:%d\n", hora, minuto, segundo);

    return 0;
}