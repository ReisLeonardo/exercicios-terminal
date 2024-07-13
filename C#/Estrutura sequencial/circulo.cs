// Variáveis
double raio, area;

// Entrada de dados
Console.Write("Digite o valor do raio do círculo: ");
raio = double.Parse(Console.ReadLine());

// Algoritmo matemático
area = Math.PI * Math.Pow(raio, 2);

// Saída de dados
Console.Write("A área do círculo é " + area.ToString("F3"));