// Variáveis
double largura, comprimento, metroQuadrado, area, preco;

// Entrada de dados
Console.Write("Digite a largura do terreno: ");
largura = double.Parse(Console.ReadLine());
Console.Write("Digite a comprimento do terreno: ");
comprimento = double.Parse(Console.ReadLine());
Console.Write("Digite o valor do metro quadrado do terreno: ");
metroQuadrado = double.Parse(Console.ReadLine());

// Algoritmo matemático
area = largura * comprimento;
preco = area * metroQuadrado;

// Saída de dados
Console.Write("A área do terreno é " + area.ToString("F2") + "m² e o seu preço é de R$" + preco.ToString("F2"));