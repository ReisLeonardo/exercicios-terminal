// Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do círculo com três casas decimais. Você pode usar o valor de pi fornecido pela biblioca, ou então, se preferir, use diretamente o valor 3.14159.

import java.util.Scanner;

public class circulo {

	public static void main(String[] args) {
		
		// Variáveis
		double r, area;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Digite o valor do raio do círculo: ");
		r = sc.nextDouble();
		
		// Algoritmo matemático
		area = 3.14159 * Math.pow(r, 2);
		// Saída de dados
		System.out.print("A área do círculo de raio " + r + " é " +String.format("%.3f", area) + ".");
		
		sc.close(); // Boa prática de programação
	}
}