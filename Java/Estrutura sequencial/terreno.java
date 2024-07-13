// Importando biblioteca
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