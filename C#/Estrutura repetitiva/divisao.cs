// Variável
int quant, i, num, den;
double divisao;

// Entrada de dados
Console.Write("Digite quantos casos você vai digitar: ");
quant = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = 1; i <= quant; i++)
{
    // Entrada de dados
    Console.Write("Entre com o numerador: ");
    num = int.Parse(Console.ReadLine());

    Console.Write("Entre com o denominador: ");
    den = int.Parse(Console.ReadLine());

    // Estrutura condicional
    if (den == 0)
    {
        Console.WriteLine("Divisão impossível!");
    }
    else
    {
        // Algoritmo matemático
        divisao = (double) num / den;
        Console.WriteLine("A divisão entre " + num + " / " + den + " é " + divisao.ToString("F2"));
    }
}