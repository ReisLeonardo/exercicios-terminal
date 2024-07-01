// Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes números.

import java.util.Scanner;

public class soma {

	public static void main(String[] args) {
		
		// Variáveis
		int x, y, soma;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Digite o valor de x: ");
		x = sc.nextInt();
		System.out.print("Digite o valor de y: ");
		y = sc.nextInt();
		
		// Algoritmo matemático
		soma = x + y;
		
		// Saída de dados
		System.out.print("A soma de " + x + " + " + y + " é igual a " + soma + ".");
		
		sc.close(); // Boa prática de programação
	}
}