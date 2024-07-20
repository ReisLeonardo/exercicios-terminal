// Variáveis
int x, y;

// Entrada de dados
Console.Write("Digite o primeiro número: ");
x = int.Parse(Console.ReadLine());

Console.Write("Digite o segundo número: ");
y = int.Parse(Console.ReadLine());

// Condicional
if (x % y == 0 || y % x == 0)
{
    Console.Write("Eles são múltiplos!");
}

else
{
    Console.Write("Eles NÃO são múltiplos.");
}