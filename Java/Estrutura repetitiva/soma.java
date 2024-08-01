// Biblioteca
import java.util.Scanner;

public class soma {

	public static void main(String[] args) {
		// Variável
		int troca, soma, i, num1, num2;
		
		soma = 0;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite um número: ");
		num1 = sc.nextInt();
		
		System.out.print("Digite outro número: ");
		num2 = sc.nextInt();
		
		// Estrutura condicional
		if (num1 > num2) {
			troca = num1;
			num1 = num2;
			num2 = troca;
		}
		
		// Estrutura repetitiva
		for (i = num1+1; i < num2; i++) {
			// Estrutura condicional
			if (i % 2 != 0) {
				soma += i;
			}
		}
		
		// Saída de dados
		System.out.print("A soma dos ímpares é " + soma);
		
		sc.close(); // Boa prática de programação
	}
}