// Importando biblioteca
import java.util.Scanner;

public class temperatura {

	public static void main(String[] args) {
		
		// Variável
		double celsius, celsiustof, fahrenheit, fahrenheittoc;
		char escala;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Escolha uma escala (C/F): ");
		escala = sc.next().charAt(0);

		// Condicional
		if (escala == 'F' || escala == 'f') {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			fahrenheit = sc.nextDouble();
			celsiustof = (5.0 / 9.0) * (fahrenheit - 32);
			System.out.print("A temperatura equivale a " + String.format("%.2f", celsiustof) + "ºC.");
		}
		
		else if (escala == 'C' || escala == 'c') {
			System.out.print("Digite a temperatura em Celsius: ");
			celsius = sc.nextDouble();
			fahrenheittoc = celsius * 1.8 + 32;
			System.out.print("A temperatura equivale a " + String.format("%.2f", fahrenheittoc) + "ºF.");
		}
		
		else {
			System.out.print("Escala incorreta.");
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}