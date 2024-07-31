// Variável
int quant, i;
double num1, num2, num3, media;

// Entrada de dados
Console.Write("Quantos casos você vai digitar: ");
quant = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = 1; i <= quant; i++)
{
    // Entrada de dados
    Console.Write("Digite o primeiro número: ");
    num1 = double.Parse(Console.ReadLine());

    Console.Write("Digite o segundo número: ");
    num2 = double.Parse(Console.ReadLine());

    Console.Write("Digite o terceiro número: ");
    num3 = double.Parse(Console.ReadLine());

    // Algoritmo matemático
    media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;

    // Saída de dados
    Console.WriteLine("A média de " + num1.ToString("F1") + " + " + num2.ToString("F1") + " + " + num3.ToString("F1") + " é de " + media.ToString("F1"));
}