// Variáveis
string nome1, nome2;
int idade1, idade2;
double mediaidade;

// Entrada de dados
Console.WriteLine("Dados da primeira pessoa:");
Console.Write("Nome: ");
nome1 = Console.ReadLine();
Console.Write("Idade: ");
idade1 = int.Parse(Console.ReadLine());

Console.WriteLine("Dados da segunda pessoa:");
Console.Write("Nome: ");
nome2 = Console.ReadLine();
Console.Write("Idade: ");
idade2 = int.Parse(Console.ReadLine());

// Algoritmo matemático
mediaidade = (double) (idade1 + idade2) / 2;


// Saída de dados
Console.Write("A idade média de " + nome1 + " e " + nome2 + " é " + mediaidade.ToString("F1") + " anos.");