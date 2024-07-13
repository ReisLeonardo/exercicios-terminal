// Importando biblioteca
import java.util.Scanner;

public class glicose {

	public static void main(String[] args) {
		
		// Variável
		double glicose;
		String classificacao;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a medida da glicose: ");
		glicose = sc.nextDouble();

		// Condicional
		if (glicose <= 100) {
			classificacao = "normal";
		}
		
		else if (glicose > 100 && glicose <= 140) {
			classificacao = "elevado";
		}
		
		else {
			classificacao = "diabético(a)";
		}
		
		// Saída de dados
		System.out.print("Sua glicose foi classificacao como " + classificacao);
		
		sc.close(); // Boa prática de programação em Java
	}
}