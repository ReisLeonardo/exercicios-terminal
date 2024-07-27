// Biblioteca
import java.util.Scanner;

public class quadrante {

	public static void main(String[] args) {
		// Variável
		int x, y;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o valor de X: ");
		x = sc.nextInt();
		
		System.out.print("Digite o valor de Y: ");
		y = sc.nextInt();
		
		// Estrutura condicional
		if (x != 0 && y != 0) {
			// Estrutura repetitiva
			while (x != 0 && y != 0) {
				// Estrutura condicional
				if (x > 0 && y > 0) {
					System.out.print("Suas coordenadas pertencem ao primeiro quadrante (Q1).\n");
				}
				else if (x < 0 && y > 0) {
					System.out.print("Suas coordenadas pertencem ao segundo quadrante (Q2).\n");
				}
				else if (x < 0 && y < 0) {
					System.out.print("Suas coordenadas pertencem ao terceiro quadrante (Q3).\n");
				}
				else {
					System.out.print("Suas coordenadas pertencem ao quarto quadrante (Q4).\n");
				}
				
				// Entrada de dados da estrutura repetitiva
				System.out.print("Digite o valor de X: ");
				x = sc.nextInt();
				
				System.out.print("Digite o valor de Y: ");
				y = sc.nextInt();
			}
		}
		
		// Saída de dados
		System.out.print("O programa foi terminado!");
		
		sc.close(); // Boa prática de programação
	}
}