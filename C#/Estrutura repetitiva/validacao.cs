// Variável
double nota1, nota2, media;


// Entrada de dados
Console.Write("Digite a primeira nota: ");
nota1 = double.Parse(Console.ReadLine());

// Estrutura repetitiva
while (nota1 < 0 || nota1 > 10)
{
    Console.Write("Valor inválido! Tente novamente: ");
    nota1 = double.Parse(Console.ReadLine());
}

// Entrada de dados
Console.Write("Digite a segunda nota: ");
nota2 = double.Parse(Console.ReadLine());

// Estrutura repetitiva
while (nota2 < 0 || nota2 > 10)
{
    Console.Write("Valor inválido! Tente novamente: ");
    nota2 = double.Parse(Console.ReadLine());
}

// Estrutura condicional
if (nota1 == 0 && nota2 == 0)
{
    Console.Write("Programa terminado!");
}
else
{
    media = (nota1 + nota2) / 2;
    Console.WriteLine("A média entre " + nota1.ToString("F2") + " e " + nota2.ToString("F2") + " é de " + media.ToString("F2"));
    // Estrutura repetitiva
    while (nota1 != 0 && nota2 != 0)
    {
        // Entrada de dados
        Console.Write("Digite a primeira nota: ");
        nota1 = double.Parse(Console.ReadLine());

        // Estrutura repetitiva
        while (nota1 < 0 || nota1 > 10)
        {
            Console.Write("Valor inválido! Tente novamente: ");
            nota1 = double.Parse(Console.ReadLine());
        }

        // Entrada de dados
        Console.Write("Digite a segunda nota: ");
        nota2 = double.Parse(Console.ReadLine());

        // Estrutura repetitiva
        while (nota2 < 0 || nota2 > 10)
        {
            Console.Write("Valor inválido! Tente novamente: ");
            nota2 = double.Parse(Console.ReadLine());
        }

        // Estrutura condicional
        if (nota1 == 0 && nota2 == 0)
        {
            Console.Write("Programa terminado!");
        }
        else
        {
            media = (nota1 + nota2) / 2;
            Console.WriteLine("A média entre " + nota1.ToString("F2") + " e " + nota2.ToString("F2") + " é de " + media.ToString("F2"));
        }
    }
}