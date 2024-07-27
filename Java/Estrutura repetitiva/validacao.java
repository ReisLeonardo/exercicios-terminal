// Biblioteca
import java.util.Scanner;

public class validacao {

	public static void main(String[] args) {
		// Variável
		double nota1, nota2, media;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a primeira nota: ");
		nota1 = sc.nextDouble();
		
		// Estrutura repetitiva
		while (nota1 < 0 || nota1 > 10) {
			System.out.print("Valor inválido! Tente novamente: ");
			nota1 = sc.nextDouble();
		}
		
		// Entrada de dados
		System.out.print("Digite a segunda nota: ");
		nota2 = sc.nextDouble();
				
		// Estrutura repetitiva
		while (nota2 < 0 || nota2 > 10) {
			System.out.print("Valor inválido! Tente novamente: ");
			nota2 = sc.nextDouble();
		}
		
		// Estrutura condicional
		if (nota1 == 0 && nota2 == 0) {
			System.out.print("Programa terminado!");
		}
		
		else {
			media = (nota1 + nota2) / 2;
			System.out.print("A média entre os " + nota1 + " e " + nota2 + " é de " + String.format("%.2f", media) + ".\n");
			// Estrutura repetitiva
			while (nota1 != 0 && nota2 != 0) {
				// Entrada de dados
				System.out.print("Digite a primeira nota: ");
				nota1 = sc.nextDouble();
				
				// Estrutura repetitiva
				while (nota1 < 0 || nota1 > 10) {
					System.out.print("Valor inválido! Tente novamente: ");
					nota1 = sc.nextDouble();
				}
				
				// Entrada de dados
				System.out.print("Digite a segunda nota: ");
				nota2 = sc.nextDouble();
						
				// Estrutura repetitiva
				while (nota2 < 0 || nota2 > 10) {
					System.out.print("Valor inválido! Tente novamente: ");
					nota2 = sc.nextDouble();
				}
				
				// Estrutura condicional
				if (nota1 == 0 && nota2 == 0) {
					System.out.print("Programa terminado!");
				}
				
				else {
					media = (nota1 + nota2) / 2;
					System.out.print("A média entre os " + nota1 + " e " + nota2 + " é de " + String.format("%.2f", media) + ".\n");
				}
			}
		}
		
		sc.close(); // Boa prática de programação
	}
}