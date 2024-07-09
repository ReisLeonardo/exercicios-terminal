// Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto aplicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem
// "REPROVADO".

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