// Variável
int quant, i, num;

// Entrada de dados
Console.Write("Digite quantos números você vai digitar: ");
quant = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = 1; i <= quant; i++)
{
    // Entrada de dados
    Console.Write("Digite um número: ");
    num = int.Parse(Console.ReadLine());

    /// Estrutura condicional
    if (num < 0 && num % 2 != 0)
    {
        Console.WriteLine("Ímpar negativo!");
    }
    else if (num < 0 && num %2 == 0)
    {
        Console.WriteLine("Par negativo!");
    }
    else if (num == 0)
    {
        Console.WriteLine("Nulo!");
    }
    else if (num > 0 && num %2 != 0)
    {
        Console.WriteLine("ímpar positivo!");
    }
    else
    {
        Console.WriteLine("Par positivo!");
    }
}