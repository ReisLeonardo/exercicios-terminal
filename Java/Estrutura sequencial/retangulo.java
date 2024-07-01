// Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor da área, perímetro e diagonal deste retângulo, com quatro casas decimais.

import java.util.Scanner;

public class retangulo {

	public static void main(String[] args) {
		
		// Variáveis
		double base, altura, area, perimetro, diagonal;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Base do retângulo: ");
		base = sc.nextDouble();
		System.out.print("Altura do retângulo: ");
		altura = sc.nextDouble();
		
		// Algoritmo matemático
		area = base * altura;
		perimetro = 2*(base+altura);
		diagonal = Math.sqrt(Math.pow(base, 2) + Math.pow(altura, 2));
		
		// Saída de dados
		System.out.print("A área do retângulo é de " + String.format("%.4f", area) + ", o seu perímetro é de " + String.format("%.4f", perimetro) + " e a sua diagonal é de " + String.format("%.4f", diagonal));
		
		sc.close(); // Boa prática de programação
	}

}