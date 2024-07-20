// Variáveis
double distancia1, distancia2, distancia3, maior;

// Entrada de dados
Console.Write("Digite a primeira distância: ");
distancia1 = double.Parse(Console.ReadLine());

Console.Write("Digite a segunda distância: ");
distancia2 = double.Parse(Console.ReadLine());

Console.Write("Digite a terceira distância: ");
distancia3 = double.Parse(Console.ReadLine());

// Condicional
if (distancia1 > distancia2 && distancia1 > distancia3)
{
    maior = distancia1;
}

else if (distancia2 > distancia1 && distancia2 > distancia3)
{
    maior = distancia2;
}

else
{
    maior = distancia3;
}

// Saída de dados
Console.Write("A maior distância foi de " + maior.ToString("F2"));