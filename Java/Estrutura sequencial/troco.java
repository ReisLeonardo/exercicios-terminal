// Importando biblioteca
import java.util.Scanner;

public class troco {

	public static void main(String[] args) {
		
		// Variáveis
		double precoUnitario, precoTotal, dinheiroRecebido, troco;
		int quantidade;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Preço unitário do produto: ");
		precoUnitario = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiroRecebido = sc.nextDouble();
		
		// Algoritmo matemático
		precoTotal = precoUnitario * quantidade;
		troco = dinheiroRecebido - precoTotal;
		
		// Saída de dados
		System.out.print("O troco que o cliente deve receber é de R$" + String.format("%.2f", troco) + ".");
		
		sc.close(); // Boa prática de programação
	}
}