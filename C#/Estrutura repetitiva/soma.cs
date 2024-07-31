// Variável
int troca, soma, i, num1, num2;

soma = 0;

// Entrada de dados
Console.Write("Digite um número: ");
num1 = int.Parse(Console.ReadLine());

Console.Write("Digite outro número: ");
num2 = int.Parse(Console.ReadLine());

// Estrutura condicional
if (num1 > num2)
{
    troca = num1;
    num1 = num2;
    num2 = troca;
}

// Estrutura repetitiva
for (i = num1+1; i < num2; i++)
{
    // Estrutura condicional
    if (i % 2 != 0)
    {
        soma += i;
    }
}

// Saída de dados
Console.Write("A soma dos impares de " + num1 + " e " + num2 + " é " + soma);