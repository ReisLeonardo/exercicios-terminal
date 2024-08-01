// Biblioteca
import java.util.Scanner;

public class dentro {

	public static void main(String[] args) {
		// Variável
		int dentro, fora, quant, i, num;
		
		dentro = 0;
		fora = 0;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Quantos números você vai digitar? ");
		quant = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = 1; i <= quant; i++) {
			// Entrada de dados
			System.out.print("Digite um número: ");
			num = sc.nextInt();
			
			// Estrutura condicional
			if (num > 20 || num < 10) {
				fora += 1;
			}
			else {
				dentro += 1;
			}
		}
		
		// Saída de dados
		System.out.print("Existem " + dentro + " dentro e " + fora + " fora.");
		
		sc.close(); // Boa prática de programação
	}
}