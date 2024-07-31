// Variável
int dentro, fora, quant, i, num;

dentro = 0;
fora = 0;

// Entrada de dados
Console.Write("Quantos números você vai digitar? ");
quant = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = 1; i <= quant; i++)
{
    // Entrada de dados
    Console.Write("Digite um número: ");
    num = int.Parse(Console.ReadLine());

    // Estrutura condicional
    if (num > 20 || num < 10)
    {
        fora += 1;
    }
    else
    {
        dentro += 1;
    }
}

// Saída de dados
Console.Write("De acordo com os dados digitados existem " + dentro + " dentro e " + fora + " fora.");