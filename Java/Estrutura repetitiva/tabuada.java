// Biblioteca
import java.util.Scanner;

public class tabuada {

	public static void main(String[] args) {
		// Variável
		int n, i, tabuada;
		
		tabuada = 0;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Deseja a tabuada para qual valor? ");
		n = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = 1; i <= 10; i++) {
			// Algoritmo matemático
			tabuada = n * i;
			System.out.println(n + " x " + i + " = " + tabuada);
		}
		
		sc.close(); // Boa prática de programação
	}
}