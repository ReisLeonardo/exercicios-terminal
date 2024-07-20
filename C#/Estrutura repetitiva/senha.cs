// Variável
int senha;

// Entrada de dados
Console.Write("Digite a senha: ");
senha = int.Parse(Console.ReadLine());

// Estrutura repetitiva
while (senha != 2024)
{
    Console.Write("Senha inválida! Tente novamente: ");
    senha = int.Parse(Console.ReadLine());
}

// Saída de dados
Console.WriteLine("Acesso permitido!");
