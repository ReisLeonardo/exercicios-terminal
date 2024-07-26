// Variável
int x, y;


// Entrada de dados
Console.Write("Digite o valor de X: ");
x = int.Parse(Console.ReadLine());

Console.Write("Digite o valor de Y: ");
y = int.Parse(Console.ReadLine());

// Estrutura condicional
if (x != 0 && y != 0)
{
    // Estrutura repetitiva
    while (x != 0 && y != 0)
    {
        // Estrutura condicional
        if (x > 0 && y > 0)
        {
            Console.WriteLine("Suas coordenadas pertencem ao primeiro quadrante (Q1).");
        }

        else if (x < 0 && y > 0)
        {
            Console.WriteLine("Suas coordenadas pertencem ao segundo quadrante (Q2).");
        }

        else if (x < y && y < 0)
        {
            Console.WriteLine("Suas coordenadas pertencem ao terceiro quadrante (Q3).");

        }

        else
        {
            Console.WriteLine("Suas coordenadas pertencem ao quarto quadrante (Q4).");
        }

        // Entrada de dados
        Console.Write("Digite o valor de X: ");
        x = int.Parse(Console.ReadLine());

        Console.Write("Digite o valor de Y: ");
        y = int.Parse(Console.ReadLine());
    }
}

// Saída de dados
Console.Write("O programa foi terminado!");