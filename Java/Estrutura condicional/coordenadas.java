// Importando biblioteca
import java.util.Scanner;

public class coordenadas {

	public static void main(String[] args) {
		
		// Variável
		double x, y;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o valor X: ");
		x = sc.nextDouble();
		
		System.out.print("Digite o valor Y: ");
		y = sc.nextDouble();
		
		// Condicional
		if (x == 0 && y == 0) {
			System.out.print("Suas coordendas pertencem a ORIGEM.");
		}
		
		else if (x > 0 && y == 0) {
			System.out.print("Suas coordendas pertencem ao Eixo X.");
		}
		
		else if (y > 0 && x == 0) {
			System.out.print("Suas coordendas pertencem ao Eixo Y.");
		}
		
		else if (x > 0 && y > 0) {
			System.out.print("Suas coordendas pertencem ao primeiro quadrante (Q1).");
		}
		
		else if (x < 0 && y > 0) {
			System.out.print("Suas coordendas pertencem ao segundo quadrante (Q2).");
		}
		
		else if (x < 0 && y < 0) {
			System.out.print("Suas coordendas pertencem ao terceiro quadrante (Q3).");
		}
		
		else {
			System.out.print("Suas coordendas pertencem ao quarto quadrante (Q4).");
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}