// Importando bibloteca
import java.util.Scanner;

public class crescente {

	public static void main(String[] args) {
		// Variável
		int x, y;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite dois números: ");
		x = sc.nextInt();
		y = sc.nextInt();
		
		// Estrutura repetitiva
		while (x != y) {
			// Estrutura condicional
			if (x > y) {
				System.out.println("Decrescente, afinal " + x + " é maior que " + y);
			}
			
			else {
				System.out.println("Crescente, afinal " + x + " é menor que " + y);
			}
			
			// Leitura de dados da estrutura repetitiva
			System.out.print("Digite dois números: ");
			x = sc.nextInt();
			y = sc.nextInt();
		}
		
		sc.close(); // Boa prática de programação
	}
}
