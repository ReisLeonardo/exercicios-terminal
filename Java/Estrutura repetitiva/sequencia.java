// Biblioteca
import java.util.Scanner;

public class sequencia {

	public static void main(String[] args) {
		// Variável
		int x, i;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o valor de X: ");
		x = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = 1; i <= x; i++) {
			// Estrutura condicional
			if (i % 2 != 0) {
				// Saída de dados
				System.out.println(i);
			}
		}
		
		sc.close(); // Boa prática de programação
	}
}