// Importando biblioteca
import java.util.Scanner;

public class notas {

	public static void main(String[] args) {
		
		// Variável
		double nota1, nota2, soma;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a primeira nota: ");
		nota1 = sc.nextDouble();
		
		System.out.print("Digite a segunda nota: ");
		nota2 = sc.nextDouble();
		
		// Algoritmo matemático
		soma = nota1 + nota2;
		
		// Condicional
		if (soma < 60) {
			System.out.print("A sua nota final foi de " + soma + ", você foi reprovado(a).");
		}
		else {
			System.out.print("A sua nota final foi de " + soma);
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}
