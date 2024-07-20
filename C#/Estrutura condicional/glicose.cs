// Variáveis
double glicose;
string classificacao;

// Entrada de dados
Console.Write("Digite a medida da glicose: ");
glicose = double.Parse(Console.ReadLine());

// Condicional
if  (glicose <= 100)
{
    classificacao = "normal";
}

else if (glicose > 100 && glicose <= 140)
{
    classificacao = "elevado";
}

else
{
    classificacao = "diabético(a)";
}

// Saída de dados
Console.Write("Sua glicose foi classificada como " + classificacao);