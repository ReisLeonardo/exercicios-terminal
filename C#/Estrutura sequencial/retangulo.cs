// Variáveis
double baSe, altura, area, perimetro, diagonal;

// Entrada de dados
Console.Write("Base do retângulo: ");
baSe = double.Parse(Console.ReadLine());
Console.Write("Altura do retângulo: ");
altura = double.Parse(Console.ReadLine());

// Algoritmo matemático
area = baSe * altura;
perimetro = 2 * (baSe + altura);
diagonal = Math.Sqrt(Math.Pow(baSe, 2) + Math.Pow(altura, 2));


// Saída de dados
Console.Write("A área do retângulo é " + area.ToString("F4") + ", seu perímetro é " + perimetro.ToString("F4") + " e a diagonal é " + diagonal.ToString("F4"));