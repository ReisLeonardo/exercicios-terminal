// Variável
int x, i;

// Entrada de dados
Console.Write("Digite o valor de X: ");
x = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = 1; i <= x; i++)
{
    // Estrutura condicional
    if (i % 2 != 0)
    {
        // Saída de dados
        Console.WriteLine(i);
    }
}