// Importando biblioteca
import java.util.Scanner;

public class troco {

	public static void main(String[] args) {
		
		// Variável
		double unidade, recebido, total, troco;
		int quantidade;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Qual é o preço unitário do produto? R$");
		unidade = sc.nextDouble();
		
		System.out.print("Quantas quantidades? ");
		quantidade = sc.nextInt();
		
		System.out.print("Quanto o(a) cliente pagou? ");
		recebido = sc.nextDouble();
		
		
		// Algoritmo matemático
		total = unidade * quantidade;
		troco = recebido - total;
		
		// Condicional
		if (troco > 0) {
			System.out.print("O(a) cliente comprou no total R$" + String.format("%.2f", total) + ", pagou R$" + String.format("%.2f", recebido) + " e portanto o seu troco é de R$" + String.format("%.2f", troco));
		}
		
		else {
			troco = troco * -1; // Artifício que retira o sinal negativo
			System.out.print("Dinheiro insuficiente. Faltam R$" + String.format("%.2f", troco));
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}