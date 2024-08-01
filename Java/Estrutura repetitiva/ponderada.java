// Biblioteca
import java.util.Scanner;

public class ponderada {

	public static void main(String[] args) {
		// Variável
		int quant, i;
		double num1, num2, num3, media;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a quantidade de casos: ");
		quant = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = 1; i <= quant; i++) {
			// Entrada de dados
			System.out.print("Digite o primeiro número: ");
			num1 = sc.nextDouble();
			System.out.print("Digite o segundo número: ");
			num2 = sc.nextDouble();
			System.out.print("Digite o terceiro número: ");
			num3 = sc.nextDouble();
			
			// Algoritmo matemático
			media = (num1 * 2 + num2 * 3 + num3 * 5) / 10;
			
			// Saída de dados
			System.out.println("A média é " + String.format("%.1f", media));
		}
		
		sc.close(); // Boa prática de programação
	}
}