// Variáveis
double salario, porcentagem, aumento, novoSalario;

// Entrada de dados
Console.Write("Digite o salário da pessoa: ");
salario = double.Parse(Console.ReadLine());

// Condicional
if (salario <= 1000)
{
    porcentagem = 0.2;
    aumento = salario * porcentagem;
    novoSalario = salario + aumento;
    Console.Write("O novo salário é de R$" + novoSalario.ToString("F2") + ", o aumento foi de R$" + aumento.ToString("F2") + ", pois foi acrescentado " + porcentagem*100 + "%.");
}

else if (salario <= 3000)
{
    porcentagem = 0.15;
    aumento = salario * porcentagem;
    novoSalario = salario + aumento;
    Console.Write("O novo salário é de R$" + novoSalario.ToString("F2") + ", o aumento foi de R$" + aumento.ToString("F2") + ", pois foi acrescentado " + porcentagem * 100 + "%.");
}

else if (salario <= 8000)
{
    porcentagem = 0.1;
    aumento = salario * porcentagem;
    novoSalario = salario + aumento;
    Console.Write("O novo salário é de R$" + novoSalario.ToString("F2") + ", o aumento foi de R$" + aumento.ToString("F2") + ", pois foi acrescentado " + porcentagem * 100 + "%.");
}

else
{
    porcentagem = 0.05;
    aumento = salario * porcentagem;
    novoSalario = salario + aumento;
    Console.Write("O novo salário é de R$" + novoSalario.ToString("F2") + ", o aumento foi de R$" + aumento.ToString("F2") + ", pois foi acrescentado " + porcentagem * 100 + "%.");
}