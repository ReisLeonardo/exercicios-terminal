// Importando biblioteca
import java.util.Scanner;

public class operadora {

	public static void main(String[] args) {
		
		// Variável
		int minutos, pagar, gasto;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a quantidade de minutos: ");
		minutos = sc.nextInt();
		
		
		// Algoritmo matemático
		
		
		// Condicional
		if (minutos <= 100) {
			pagar = 50;
			System.out.print("O(a) cliente deve pagar R$" + pagar + " por ter consumido " + minutos + " minuto(s).");
		}
		
		else {
			gasto = 2 * (minutos - 100);
			pagar = 50 + gasto;
			System.out.print("O(a) cliente deve pagar R$" + pagar + " por ter consumido " + minutos + " minuto(s).");
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}