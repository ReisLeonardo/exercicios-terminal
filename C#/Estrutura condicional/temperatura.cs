// Variáveis
string escala;
double celsius, celsiustof, fahrenheit, fahrenheittoc;

// Entrada de dados
Console.Write("Escolha a escala (C/F): ");
escala = Console.ReadLine();

// Condicional
if (escala == "F")
{
    Console.Write("Digite a temperatura em Fahrenheit: ");
    fahrenheit = double.Parse(Console.ReadLine());
    celsiustof = (5.0 / 9.0) * (fahrenheit - 32);
    Console.Write("A temperatura equivale a " +  celsiustof.ToString("F2") + "ºC.");
}

else if (escala == "C")
{
    Console.Write("Digite a temperatura em Celsius: ");
    celsius = double.Parse(Console.ReadLine());
    fahrenheittoc = celsius * 1.8 + 32;
    Console.Write("A temperatura equivale a " + fahrenheittoc.ToString("F2") + "ºF.");
}

else
{
    Console.Write("A escala é inválida!");
}