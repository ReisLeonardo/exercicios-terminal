// Importando biblioteca
import java.util.Scanner;

public class lanchonete {

	public static void main(String[] args) {
		
		// Variável
		double pagar;
		int quantidade, codigo;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o código do produto comprado: ");
		codigo = sc.nextInt();

		System.out.print("Digite a quantidade: ");
		quantidade = sc.nextInt();
		
		// Condicional
		if (codigo == 1) {
			pagar = 5 * quantidade;
			System.out.print("O valor total a ser pago pelo produto é de R$" + String.format("%.2f", pagar));
		}
		
		else if (codigo == 2) {
			pagar = 3.5 * quantidade;
			System.out.print("O valor total a ser pago pelo produto é de R$" + String.format("%.2f", pagar));
		}
		
		else if (codigo == 3) {
			pagar = 4.8 * quantidade;
			System.out.print("O valor total a ser pago pelo produto é de R$" + String.format("%.2f", pagar));
		}
		
		else if (codigo == 4) {
			pagar = 8.9 * quantidade;
			System.out.print("O valor total a ser pago pelo produto é de R$" + String.format("%.2f", pagar));
		}
		
		else if (codigo == 5) {
			pagar = 7.32 * quantidade;
			System.out.print("O valor total a ser pago pelo produto é de R$" + String.format("%.2f", pagar));
		}
		
		else {
			System.out.print("Error!");
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}