// Variável
int x, y;

// Entrada de dados
Console.Write("Digite dois números: ");
x = int.Parse(Console.ReadLine());
y = int.Parse(Console.ReadLine());

// Estrutura repetitiva
while (x != y)
{
    // Estrutura condicional
    if (x > y)
    {
        Console.WriteLine("Decrescente, afinal " + x + " é maior que " + y);
    }

    else
    {
        Console.WriteLine("Crescente, afinal " + x + " é menor que " + y);
    }

    // Leitura de dados da estrutura repetitiva
    Console.Write("Digite dois números: ");
    x = int.Parse(Console.ReadLine());
    y = int.Parse(Console.ReadLine());
}
