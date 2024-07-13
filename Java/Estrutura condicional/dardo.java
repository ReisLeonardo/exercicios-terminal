// Importando biblioteca
import java.util.Scanner;

public class dardo {

	public static void main(String[] args) {
		
		// Variável
		double distancia1, distancia2, distancia3, maior;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a primeira distância: ");
		distancia1 = sc.nextDouble();
		
		System.out.print("Digite a segunda distância: ");
		distancia2 = sc.nextDouble();
		
		System.out.print("Digite a terceira distância: ");
		distancia3 = sc.nextDouble();

		// Condicional
		if (distancia1 > distancia2 && distancia1 > distancia3) {
			maior = distancia1;
		}
		
		else if (distancia2 > distancia1 && distancia2 > distancia3) {
			maior = distancia2;
		}
		
		else {
			maior = distancia3;
		}
		
		// Saída de dados
		System.out.print("A maior distância foi de " + String.format("%.2f", maior));
		
		sc.close(); // Boa prática de programação em Java
	}
}