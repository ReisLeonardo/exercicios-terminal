// Importando biblioteca
import java.util.Scanner;

public class medidas {

	public static void main(String[] args) {
		
		// Variáveis
		double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Digite a medida A: ");
		a = sc.nextDouble();
		System.out.print("Digite a medida B: ");
		b = sc.nextDouble();
		System.out.print("Digite a medida B: ");
		c = sc.nextDouble();
		
		// Algoritmo matemático
		areaQuadrado = Math.pow(a, 2);
		areaTriangulo = (a*b)/2;
		areaTrapezio = (a+b)*c/2;
		
		// Saída de dados
		System.out.print("A área do quadrado é " + String.format("%.4f", areaQuadrado) +  ", do triângulo é " + String.format("%.4f", areaTriangulo) + " e do trapézio é " + String.format("%.4f", areaTrapezio));
		
		sc.close(); // Boa prática de programação
	}
}