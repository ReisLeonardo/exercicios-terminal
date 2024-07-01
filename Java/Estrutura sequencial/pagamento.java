// Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma mensagem explicativa.

import java.util.Scanner;

public class pagamento {

	public static void main(String[] args) {
		
		// Variáveis
		String nome;
		double valorHora, pagamento;
		int horaTrabalhada;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Nome: ");
		nome = sc.nextLine();
		System.out.print("Valor por hora: ");
		valorHora = sc.nextDouble();
		System.out.print("Horas trabalhadas: ");
		horaTrabalhada = sc.nextInt();
		
		// Algoritmo matemático
		pagamento = valorHora * horaTrabalhada;
		
		// Saída de dados
		System.out.print("O pagamento para " + nome + " deve ser R$" + pagamento +  ".");
		
		sc.close(); // Boa prática de programação
	}
}