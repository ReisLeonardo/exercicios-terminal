// Importando biblioteca
import java.util.Scanner;

public class menor {

	public static void main(String[] args) {
		
		// Variável
		int valor1, valor2, valor3, menor;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o primeiro valor: ");
		valor1 = sc.nextInt();
		
		System.out.print("Digite o segundo valor: ");
		valor2 = sc.nextInt();
		
		System.out.print("Digite o terceiro valor: ");
		valor3 = sc.nextInt();
		
		// Algoritmo matemático
		
		
		// Condicional
		if (valor1 < valor2 && valor1 < valor3) {
			menor = valor1;
			System.out.print("O menor valor é " + menor);
		}
		
		else if (valor2 < valor1 && valor2 < valor3) {
			menor = valor2;
			System.out.print("O menor valor é " + menor);
		}
		
		else {
			menor = valor3;
			System.out.print("O menor valor é " + menor);
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}