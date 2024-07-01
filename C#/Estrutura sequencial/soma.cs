// Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes números.

// Variáveis
int x, y, soma;

// Entrada de dados
Console.Write("Digite o valor de X: ");
x = int.Parse(Console.ReadLine());
Console.Write("Digite o valor de Y: ");
y = int.Parse(Console.ReadLine());

// Algoritmo matemático
soma = x + y;

// Saída de dados
Console.Write("A soma de " + x + " + " + y + " é igual a " + soma);