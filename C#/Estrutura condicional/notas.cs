// Variáveis
double nota1, nota2, soma;

// Entrada de dados
Console.Write("Digite a primeira nota: ");
nota1 = double.Parse(Console.ReadLine());

Console.Write("Digite a segunda nota: ");
nota2 = double.Parse(Console.ReadLine());

// Algoritmo matemático
soma = nota1 + nota2;

// Condicional
if (soma < 60)
{
    Console.Write("A sua nota foi " + soma + ", portanto você foi reprovado(a).");
}
else
{
    Console.Write("A sua nota foi " + soma);
}