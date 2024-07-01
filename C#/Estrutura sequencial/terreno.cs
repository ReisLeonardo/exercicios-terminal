// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado (m²) do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

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