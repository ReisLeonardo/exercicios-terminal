// Variáveis
double unidade, recebido, total, troco;
int quantidade;

// Entrada de dados
Console.Write("Qual é o preço unitário? R$:");
unidade = double.Parse(Console.ReadLine());

Console.Write("Quantas quantidades do produto? ");
quantidade = int.Parse(Console.ReadLine());

Console.Write("Quanto o(a) cliente pagou? R$");
recebido = double.Parse(Console.ReadLine());


// Algoritmo matemático
total = unidade * quantidade;
troco = recebido - total;

// Condicional
if (troco > 0)
{
    Console.Write("O(a) cliente comprou no total R$" + total.ToString("F2") + ", pagou R$" + recebido.ToString("F2") + " e portanto o seu troco é de R$" + troco.ToString("F2"));
}
else
{
    troco = troco * -1; // Artifício que retira o sinal de negativo
    Console.Write("Dinheiro insuficiente. Faltam R$" + troco.ToString("F2"));
}