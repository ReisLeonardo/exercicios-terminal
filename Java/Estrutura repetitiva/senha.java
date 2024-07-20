// Importando biblioteca
import java.util.Scanner;

public class senha {

	public static void main(String[] args) {
		// Variável
		int senha;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a senha: ");
		senha = sc.nextInt();
		
		// Estrutura repetitiva
		while (senha != 2024) {
			System.out.print("Senha inválida! Tente novamente: ");
			senha = sc.nextInt();
		}
		
		// Saída de dados
		System.out.print("Acesso permitido!");
		
		sc.close(); // Boa prática de programação
	}
}
