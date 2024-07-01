// Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma casa decimal, bem como o valor do metro quadrado (m²) do terreno com duas casas decimais. Em seguida, o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com duas casas decimais.

import java.util.Scanner;

public class terreno {

	public static void main(String[] args) {
		
		// Variáveis
		double largura, comprimento, metroQuadrado, area, preco;

		Scanner sc = new Scanner(System.in); // Para facilitar a leitura de dados
		
		// Entrada de dados
		System.out.print("Digite a largura do terreno: ");
		largura = sc.nextDouble();
		System.out.print("Digite o comprimento: ");
		comprimento = sc.nextDouble();
		System.out.print("Digite o valor do metro quadrado: ");
		metroQuadrado = sc.nextDouble();
		
		// Algoritmo matemático
		area = largura * comprimento;
		preco = area * metroQuadrado;
		
		// Saída de dados
		System.out.print("A área do terreno é de " + String.format("%.2f", area) + "m² e o seu preço é de R$" + String.format("%.2f", preco));
		
		sc.close(); // Boa prática de programação
	}

}