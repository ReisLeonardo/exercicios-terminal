// Faça um programa para ler uma duração de tempo em segundos, daí imprima na tela esta duração no formato horas:minutos:segundos.

import java.util.Scanner;

public class duracao {

	public static void main(String[] args) {
		
		// Variáveis
		int duracao, hora, resto, minuto, segundo;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Digite a duração em segundos: ");
		duracao = sc.nextInt();
		
		// Algoritmo matemático
		hora = duracao / 3600;
		resto = duracao % 3600;
		minuto = resto / 60;
		segundo = resto % 60;
		
		// Saída de dados
		System.out.print(hora + ":" + minuto + ":" + segundo);
		
		sc.close(); // Boa prática de programação
	}
}