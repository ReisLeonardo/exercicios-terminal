// Variável
int quantCoSoma, quantCoeSoma, quantRaSoma, quantSaSoma, quant, i, quantCo, totalCo;
char tipoCo;
double percCoe, percRa, percSa;

quantCoSoma = 0;
quantCoeSoma = 0;
quantRaSoma = 0;
quantSaSoma = 0;
totalCo = 0;

// Entrada de dados
Console.Write("Digite a quantidade de casos que você vai trabalhar: ");
quant = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = 0; i < quant; i++)
{
    // Entrada de dados
    Console.Write("Quantidade de cobaia(s): ");
    quantCo = int.Parse(Console.ReadLine());

    Console.Write("Tipo de cobaia (C/R/S): ");
    tipoCo = char.Parse(Console.ReadLine());

    // Algoritmo matemático
    quantCoSoma += quantCo;

    // Estrutura condicional
    if (tipoCo == 'C')
    {
        quantCoeSoma += quantCo;
    }
    else if (tipoCo == 'R')
    {
        quantRaSoma += quantCo;
    }
    else if (tipoCo == 'S')
    {
        quantSaSoma += quantCo;
    }
}

// Algoritmo matemático
totalCo = quantCoeSoma + quantRaSoma + quantSaSoma;
percCoe = (double)quantCoeSoma / totalCo * 100;
percRa = (double)quantRaSoma / totalCo * 100;
percSa = (double)quantSaSoma / totalCo * 100;

// Saída de dados
Console.WriteLine("Relatório final\nTotal de cobaias: " + quantCoSoma + "\nTotal de coelhos: " + quantCoeSoma + "\nTotal de ratos: " + quantRaSoma + "\nTotal de sapos: " + quantSaSoma + "\nPercentual de coelhos: " + percCoe.ToString("F2") + "%\nPercentual de ratos: " + percRa.ToString("F2") + "%\nPercentual de sapos: " + percSa.ToString("F2") + "%");