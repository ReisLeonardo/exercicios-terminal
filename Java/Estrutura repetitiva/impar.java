// Biblioteca
import java.util.Scanner;

public class impar {

	public static void main(String[] args) {
		// Variável
		int quant, i, num;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite quantos números você vai digitar: ");
		quant = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = 1; i <= quant; i++) {
			// Entrada de dados
			System.out.print("Digite um número: ");
			num = sc.nextInt();
			
			// Estrutura condicional
			if (num < 0 && num % 2 != 0) {
				System.out.println("Ímpar negativo!");
			}
			else if (num < 0 && num % 2 == 0) {
				System.out.println("Par negativo!");
			}
			else if (num == 0) {
				System.out.println("Nulo!");
			}
			else if (num > 0 && num % 2 != 0) {
				System.out.println("Ímpar positivo!");
			}
			else {
				System.out.println("Par positivo!");
			}
		}
		
		sc.close(); // Boa prática de programação
	}
}