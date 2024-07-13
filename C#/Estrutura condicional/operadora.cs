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