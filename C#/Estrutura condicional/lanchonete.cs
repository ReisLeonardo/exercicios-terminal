// Variáveis
double pagar;
int quantidade, codigo;

// Entrada de dados
Console.Write("Digite o codigo: ");
codigo = int.Parse(Console.ReadLine());

Console.Write("Digite a quantidade: ");
quantidade = int.Parse(Console.ReadLine());

// Condicional
if (codigo == 1)
{
    pagar = 5 * quantidade;
    Console.Write("O valor total a ser pago pelo produto é de R$" + pagar.ToString("F2"));
}

else if (codigo == 2)
{
    pagar = 3.5 * quantidade;
    Console.Write("O valor total a ser pago pelo produto é de R$" + pagar.ToString("F2"));
}

else if (codigo == 3)
{
    pagar = 4.8 * quantidade;
    Console.Write("O valor total a ser pago pelo produto é de R$" + pagar.ToString("F2"));
}

else if (codigo == 4)
{
    pagar = 8.9 * quantidade;
    Console.Write("O valor total a ser pago pelo produto é de R$" + pagar.ToString("F2"));
}

else if (codigo == 5)
{
    pagar = 7.32 * quantidade;
    Console.Write("O valor total a ser pago pelo produto é de R$" + pagar.ToString("F2"));
}

else
{
    Console.Write("O código não existe!");
}