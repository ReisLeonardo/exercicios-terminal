// Biblioteca
import java.util.Scanner;

public class experiencias {

	public static void main(String[] args) {
		// Variável
		int quantCoSoma, quantCoeSoma, quantRaSoma, quantSaSoma, quant, i, quantCo, totalCo;
		double percCoe, percRa, percSa;
		char tipoCo;
		
		quantCoSoma = 0;
		quantCoeSoma = 0;
		quantRaSoma = 0;
		quantSaSoma = 0;
		totalCo = 0;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a quantidade de casos que você vai trabalhar: ");
		quant = sc.nextInt();
		
		// Estrutura repetitiva
		for (i = 0; i < quant; i++) {
			// Entrada de dados
			System.out.print("Quantidade de cobaia(s): ");
			quantCo = sc.nextInt();
			
			System.out.print("Tipo de cobaia (C/R/S): ");
			tipoCo = sc.next().charAt(0);
			
			// Algoritmo matemático
			quantCoSoma += quantCo;
			
			// Estrutura condicional
			if (tipoCo == 'C') {
				quantCoeSoma += quantCo;
			}
			else if (tipoCo == 'R') {
				quantRaSoma += quantCo;
			}
			else if (tipoCo == 'S') {
				quantSaSoma += quantCo;
			}
		}
		
		// Algoritmo matemático
		totalCo = quantCoeSoma + quantRaSoma + quantSaSoma;
	    percCoe = (double) quantCoeSoma / totalCo * 100;
	    percRa = (double) quantRaSoma / totalCo * 100;
	    percSa = (double) quantSaSoma / totalCo * 100;
	    
	    // Saída de dados
	    System.out.print("Relatório final:\nTotal: " + quantCoSoma + " de cobaias.\nTotal de coelhos: " + quantCoeSoma + ".\nTotal de ratos: " + quantRaSoma + ".\nTotal de sapos: " + quantSaSoma + ".\nPercentual de coelhos: " + String.format("%.2f", percCoe) + "%\nPercentual de ratos: " + String.format("%.2f", percRa) + "%\nPercentual de sapos: " + String.format("%.2f", percSa) + "%");
		
		sc.close(); // Boa prática de programação
	}
}