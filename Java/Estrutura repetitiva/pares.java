// Biblioteca
import java.util.Scanner;

public class pares {

	public static void main(String[] args) {
		// Variável
		int soma, numero;
		
		soma = 0;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite um número inteiro: ");
		numero = sc.nextInt();
		
		// Estrutura repetitiva
		while (numero != 0) {
			// Estrutura condicional
			if (numero %2 != 0) {
				numero = numero + 1;
			}
			
			// Algoritmo matemático
			soma = 5 * numero + 20; // É igual a: número + número + 2 + número + 4 + número + 6 + número + 8
			
			// Saída de dados da estrutura repetitiva
			System.out.println("A soma consecutiva dos 5 pares é " + soma);
			
			// Entrada de dados da estrutura repetitiva
			System.out.print("Digite um número inteiro: ");
			numero = sc.nextInt();
			
		}
		
		sc.close(); // Boa prática de programação
	}
}