// Variáveis
double x, y;

// Entrada de dados
Console.Write("Digite o valor X: ");
x = double.Parse(Console.ReadLine());

Console.Write("Digite o valor Y: ");
y = double.Parse(Console.ReadLine());

// Condicional
if (x == 0 && y == 0)
{
    Console.Write("Suas coordenadas pertencem a ORIGEM.");
}

else if (x > 0 && y == 0)
{
    Console.Write("Suas coordendas pertencem ao EIXO X.");
}

else if (y > 0 && x == 0)
{
    Console.Write("Suas coordendas pertencem ao EIXO Y.");
}

else if (x > 0 && y > 0)
{
    Console.Write("Suas coordendas pertencem ao primeiro quadrante - Q1.");
}

else if (x < 0 && y > 0)
{
    Console.Write("Suas coordendas pertencem ao segundo quadrante - Q2.");
}

else if (x < 0 && y < 0)
{
    Console.Write("Suas coordendas pertencem ao terceiro quadrante - Q3.");
}

else
{
    Console.Write("Suas coordendas pertencem ao quarto quadrante - Q4.");
}