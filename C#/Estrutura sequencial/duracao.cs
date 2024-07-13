// Variáveis
int duracao, hora, resto, minuto, segundo;

// Entrada de dados
Console.Write("Digite a duração em segundo(s): ");
duracao = int.Parse(Console.ReadLine());

// Algoritmo matemático
hora = duracao / 3600;
resto = duracao % 3600;
minuto = resto / 60;
segundo = resto % 60;

// Saída de dados
Console.Write(hora +":" + minuto + ":" + segundo);