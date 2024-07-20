// Importando biblioteca
import java.util.Scanner;

public class media {

	public static void main(String[] args) {
		// Variável
		int soma, contador, idade;
		double media;
		soma = 0;
		contador = 0;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a(s) idade(s): ");
		idade = sc.nextInt();
		
		// Estrutura condicional
		if (idade < 0) {
			System.out.print("Impossível calcular uma idade negativa!");
		}
		
		else {
			// Estrutura repetitiva
			while (idade >= 0) {
				soma = soma + idade;
				contador = contador + 1;
				idade = sc.nextInt();
			}
			
			// Saída de dados da estrutura repetitiva
			media = (double) soma / contador;
			System.out.print("A média das idades " + contador + " pessoas é de " + String.format("%.2f", media));
		}
		
		sc.close(); // Boa prática de programação
	}
}
