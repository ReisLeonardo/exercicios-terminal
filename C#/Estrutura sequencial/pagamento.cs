// Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa.

// Variáveis
string nome;
double valorHora, pagamento, horaTrabalhada;

// Entrada de dados
Console.Write("Nome: ");
nome = Console.ReadLine();
Console.Write("Valor por hora: ");
valorHora = double.Parse(Console.ReadLine());
Console.Write("Hora(s) trabalhada(s): ");
horaTrabalhada = double.Parse(Console.ReadLine());

// Algoritmo matemático
pagamento = valorHora * horaTrabalhada;

// Saída de dados
Console.Write("O pagamento para " + nome + " deve ser R$" + pagamento.ToString("F2"));