// Variável
int fat, n, i;

fat = 1;

// Entrada de dados
Console.Write("Digite um valor entre 0 a 15: ");
n = int.Parse(Console.ReadLine());

// Estrutura repetitiva
for (i = n; i > 0; i--) // O i-- serve para fazer a operação ao contrário
{
    // Algoritmo matemático
    fat *= i;
}

// Saída de dados
Console.WriteLine("O fatorial de " + n + "!" + " = " + fat);