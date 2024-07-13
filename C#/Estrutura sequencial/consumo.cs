// Variáveis
int distanciaPercorrida;
double combustivelGasto, consumoMedio;

// Entrada de dados
Console.Write("Distância percorrida: ");
distanciaPercorrida = int.Parse(Console.ReadLine());
Console.Write("Combustível gasto: ");
combustivelGasto = double.Parse(Console.ReadLine());

// Algoritmo matemático
consumoMedio = distanciaPercorrida / combustivelGasto;

// Saída de dados
Console.Write("O consumo médio foi de " + consumoMedio.ToString("F3") + "km.");