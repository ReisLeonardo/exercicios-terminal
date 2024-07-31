// Variável
int n, i, tabuada;

tabuada = 0;

// Entrada de dados
Console.Write("Deseja a tabuada para qual valor? ");
n = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = 1; i <= 10; i++)
{
    // Algoritmo matemático
    tabuada = n * i;
    Console.WriteLine(n + " x " + i + " = " + tabuada);
}