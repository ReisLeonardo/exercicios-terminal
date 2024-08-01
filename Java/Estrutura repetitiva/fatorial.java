// Biblioteca
import java.util.Scanner;

public class fatorial {

	public static void main(String[] args) {
		// Variável
		int fat, n, i;
		
		fat = 1;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite um valor entre 0 a 15: ");
		n = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = n; i > 0; i--) {
			// Algoritmo matemático
			fat *= i;
		}
		
	    // Saída de dados
		System.out.println("O fatorial de " + n + "! é " + fat);
		
		sc.close(); // Boa prática de programação
	}
}