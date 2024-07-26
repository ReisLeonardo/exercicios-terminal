// Variável
int codigo, alcool, gasolina, diesel;

alcool = 0;
gasolina = 0;
diesel = 0;

// Entrada de dados
Console.Write("Informe um código (1. Álcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ");
codigo = int.Parse(Console.ReadLine());

// Estrutura repetitiva
while (codigo != 4)
{
    // Estrutura condicional
    if (codigo == 1)
    {
        alcool = alcool + 1;
    }

    else if (codigo == 2)
    {
        gasolina = gasolina + 1;
    }

    else if (codigo == 3)
    {
        diesel = diesel + 1;
    }

    // Entrada de dados da estrutura repetitiva
    Console.Write("Informe um código (1. Álcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ");
    codigo = int.Parse(Console.ReadLine());
}

// Saída de dados
Console.WriteLine("Muito obrigado!");
Console.Write("Álcool: " + alcool + "\nGasolina: " + gasolina + "\nDiesel: " + diesel);