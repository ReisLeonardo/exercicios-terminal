// Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente para o troco). Seu programa deve mostrar o valor do troco a ser devolvido ao cliente.

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