// Faça um programa para ler os três coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, calcule e mostre os valores das raízes x1 e x2 da equação com quatro casas decimais. Se a equação não possuir raízes reais, mostre uma mensagem.

// Importando biblioteca
import java.util.Scanner;

public class baskara {

	public static void main(String[] args) {
		
		// Variável
		double a, b, c, delta, x1, x2;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o coeficiente A: ");
		a = sc.nextDouble();
		
		System.out.print("Digite o coeficiente B: ");
		b = sc.nextDouble();
		
		System.out.print("Digite o coeficiente C: ");
		c = sc.nextDouble();
		
		// Algoritmo matemático
		delta = Math.pow(b, 2) - 4 * a * c;
		
		// Condicional
		if (a == 0 || delta < 0) {
			System.out.print("Essa equação não possui raízes.");
		}
		else {
			x1 = (-b + Math.sqrt(delta)) / (2 * a);
			x2 = (-b - Math.sqrt(delta)) / (2 * a);
			System.out.print("O x1 é = " + String.format("%.4f", x1) + " e o x2 é = " + String.format("%.4f", x2));
		}
		
		sc.close(); // Boa prática de programação em Java
	}
}
