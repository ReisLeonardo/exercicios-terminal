// # Fazer um programa para ler três medidas A, B, C. Em seguida, calcular e mostrar (imprimir os dados com quatro casas decimais): 
// A) a área do quadrado que tem lado A (A²)
// B) a área do triângulo retângulo que tem base A e altura B
// C) a área do trapézio que tem bases A e B, e altura C

// Variáveis
double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

// Entrada de dados
Console.Write("Digite a medida A: ");
a = double.Parse(Console.ReadLine());
Console.Write("Digite a medida B: ");
b = double.Parse(Console.ReadLine());
Console.Write("Digite a medida C: ");
c = double.Parse(Console.ReadLine());

// Algoritmo matemático
areaQuadrado = Math.Pow(a, 2);
areaTriangulo = (a * b) / 2;
areaTrapezio = (a + b) * c / 2;

// Saída de dados
Console.Write("A área do quadrado é " + areaQuadrado.ToString("F4") + ", do triângulo " + areaTriangulo.ToString("F4") + " e do trapézio é " + areaTrapezio.ToString("F4"));