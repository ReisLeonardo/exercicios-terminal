// Variáveis
int horaInicial, horaFinal, hora;

// Entrada de dados
Console.Write("Digite a hora inicial: ");
horaInicial = int.Parse(Console.ReadLine());

Console.Write("Digite a hora final: ");
horaFinal = int.Parse(Console.ReadLine());

// Algoritmo matemático
hora = (24 - horaInicial) + horaFinal;

// Condicional
if (horaInicial == 0 && horaFinal == 0)
{
    Console.Write("O jogo durou 24 horas");
}

else if (hora > 24)
{
    hora = hora - 24;
    Console.Write("O jogo durou " + hora + " horas.");
}

else
{
    Console.Write("O jogo durou " + hora + " hora(s).");
}