// Variáveis
double precoUnitario, precoTotal, dinheiroRecebido, troco;
int quantidade;

// Entrada de dados
Console.Write("Preço unitário do produto: ");
precoUnitario = double.Parse(Console.ReadLine());
Console.Write("Quantidade comprada: ");
quantidade = int.Parse(Console.ReadLine());
Console.Write("Dinheiro recebido: ");
dinheiroRecebido = double.Parse(Console.ReadLine());

// Algoritmo matemático
precoTotal = (double)precoUnitario * quantidade;
troco = dinheiroRecebido - precoTotal;

// Saída de dados
Console.Write("O troco que o cliente deve receber é R$" + troco.ToString("F2"));