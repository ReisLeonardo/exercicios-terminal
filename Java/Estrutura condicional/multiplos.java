// Importando biblioteca
import java.util.Scanner;

public class multiplos {

	public static void main(String[] args) {
		
		// Variável
		int x, y;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o primeiro número: ");
		x = sc.nextInt();

		System.out.print("Digite o segundo número: ");
		y = sc.nextInt();
		
		// Condicional
		 if (x % y == 0 || y % x == 0) {
			 System.out.print("Eles são múltiplos!");
		 }
		 
		 else {
			 System.out.print("Eles NÃO são múltiplos!");
		 }
		
		sc.close(); // Boa prática de programação em Java
	}
}