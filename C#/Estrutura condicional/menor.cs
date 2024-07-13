// Variáveis
int valor1, valor2, valor3, menor;

// Entrada de dados
Console.Write("Digite o primeiro valor: ");
valor1 = int.Parse(Console.ReadLine());

Console.Write("Digite o segundo valor: ");
valor2 = int.Parse(Console.ReadLine());

Console.Write("Digite o terceiro valor: ");
valor3 = int.Parse(Console.ReadLine());

// Algoritmo matemático


// Condicional
if (valor1 < valor2 && valor1 < valor3)
{
    menor = valor1;
    Console.Write("O menor valor é " + menor);
}
else if (valor2 < valor1 && valor2 < valor3)
{
    menor = valor2;
    Console.Write("O menor valor é " + menor);
}
else
{
    menor = valor3;
    Console.Write("O menor valor é " + menor);
}