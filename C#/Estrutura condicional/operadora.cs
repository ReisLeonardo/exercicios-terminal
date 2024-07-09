// Uma operadora de telefonia cobra R$ 50,00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2,00. Faça um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostre o valor a ser pago.

// Variáveis
int minutos, pagar, gasto;

// Entrada de dados
Console.Write("Digite a quantidade de minuto(s): ");
minutos = int.Parse(Console.ReadLine());


// Algoritmo matemático


// Condicional
if (minutos <= 100)
{
    pagar = 50;
    Console.Write("O(a) cliente deve pagar R$" + pagar + " por ter consumido " + minutos + " minuto(s)");
}
else
{
    gasto = 2 * (minutos - 100);
    pagar = 50 + gasto;
    Console.Write("O(a) cliente deve pagar R$" + pagar  + " por ter consumido " + minutos + " minutos.");
}