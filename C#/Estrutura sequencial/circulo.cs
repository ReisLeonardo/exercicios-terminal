// Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do círculo com três casas decimais. Você pode usar o valor de pi fornecido pela biblioca, ou então, se preferir, use diretamente o valor 3.14159.

// Variáveis
double raio, area;

// Entrada de dados
Console.Write("Digite o valor do raio do círculo: ");
raio = double.Parse(Console.ReadLine());

// Algoritmo matemático
area = Math.PI * Math.Pow(raio, 2);

// Saída de dados
Console.Write("A área do círculo é " + area.ToString("F3"));