// Biblioteca
import java.util.Scanner;

public class divisao {

	public static void main(String[] args) {
		// Variável
		int quant, i, num, den;
		double divisao;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite quantos casos você vai digitar: ");
		quant = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = 1; i <= quant; i++) {
			// Entrada de dados
			System.out.print("Entre com o numerador: ");
			num = sc.nextInt();
			System.out.print("Entre com o denominador: ");
			den = sc.nextInt();
			
			// Estrutura condicional
			if (den == 0) {
				System.out.println("Divisão impossível!");
			}
			else {
				// Algoritmo matemático
				divisao = (double) num / den;
				System.out.println("A divisão entre " + num + " e " + den + " = " + String.format("%.2f", divisao));
			}
		}
		
		sc.close(); // Boa prática de programação
	}
}