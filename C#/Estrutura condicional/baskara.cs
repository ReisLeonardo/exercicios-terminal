// Variáveis
double a, b, c, delta, x1, x2;

// Entrada de dados
Console.Write("Digite o coeficiente A: ");
a = double.Parse(Console.ReadLine());

Console.Write("Digite o coeficiente B: ");
b = double.Parse(Console.ReadLine());

Console.Write("Digite o coeficiente C: ");
c = double.Parse(Console.ReadLine());

// Algoritmo matemático
delta = Math.Pow(b, 2) - 4 * a * c;

// Condicional
if (delta < 0 || a == 0)
{
    Console.Write("Esta equação não possui raízes reais.");
}
else
{
    x1 = (-b + Math.Sqrt(delta)) / (2 * a);
    x2 = (-b - Math.Sqrt(delta)) / (2 * a);
    Console.Write("O x1 é " + x1.ToString("F4") + " e o x2 é " + x2.ToString("F4"));
}