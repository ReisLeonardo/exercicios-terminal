// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente para o troco). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.

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