// Variável
int soma, numero;

soma = 0;

// Entrada de dados
Console.Write("Digite um número inteiro: ");
numero = int.Parse(Console.ReadLine());

// Estrutura repetitiva
while (numero != 0)
{
    // Estrutura condicional para ver se o número é ímpar
    if (numero %2 != 0)
    {
        numero = numero + 1;
    }

    // Algoritmo matemático
    soma = 5 * numero + 20; // É igual a: número + número + 2 + número + 4 + número + 6 + número + 8

    // Saída de dados da estrutura repetitiva
    Console.WriteLine("A soma consecutiva dos 5 pares é " + soma);

    // Entrada de dados da estrutura repetitiva
    Console.Write("Digite um número inteiro: ");
    numero = int.Parse(Console.ReadLine());
}