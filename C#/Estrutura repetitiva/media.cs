// Variável
int soma, contador, idade;
double media;
soma = 0;
contador = 0;

// Entrada de dados
Console.Write("Digite a(s) idade(s): ");
idade = int.Parse(Console.ReadLine());

// Estrutura condicional
if (idade < 0)
{
    Console.Write("Impossível calcular uma idade negativa!");
}

else
{
    // Estrutura repetitiva
    while (idade >= 0)
    {
        soma = soma + idade;
        contador = contador + 1;
        idade = int.Parse(Console.ReadLine());
    }

    // Saída de dados
    media = (double)soma / contador;
    Console.Write("A média das idades das pessoas é de " + media.ToString("F2"));
}
