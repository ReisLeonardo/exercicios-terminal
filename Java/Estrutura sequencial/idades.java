// Importando biblioteca
import java.util.Scanner;

public class idades {

	public static void main(String[] args) {
		
		// Variáveis
		String nome1, nome2;
		int idade1, idade2;
		double mediaidade;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.println("Dados da primeira pessoa:");
		System.out.print("Nome: ");
		nome1 = sc.nextLine();
		System.out.print("Idade: ");
		idade1 = sc.nextInt();
		
		System.out.println("Dados da segunda pessoa:");
		System.out.print("Nome: ");
		sc.nextLine(); // Limpeza de buffer
		nome2 = sc.nextLine();
		System.out.print("Idade: ");
		idade2 = sc.nextInt();
		
		// Algoritmo matemático
		mediaidade = (double) (idade1+idade2)/2; // Converter para casas flutuantes
		
		// Saída de dados
		System.out.print("A idade média de " + nome1 + " e " + nome2 + " é de " + String.format("%.1f", mediaidade) + " anos.");
		
		sc.close(); // Boa prática de programação
	}
}