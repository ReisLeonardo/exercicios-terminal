// Biblioteca
import java.util.Scanner;

public class combustivel {

	public static void main(String[] args) {
		// Variável
		int codigo, alcool, gasolina, diesel;
		
		alcool = 0;
		gasolina = 0;
		diesel = 0;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Informe um código (1. Álcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ");
		codigo = sc.nextInt();
		
		
		// Estrutura repetitiva
		while (codigo != 4) {
			// Estrutura condicional
			if (codigo == 1 ) {
				alcool = alcool + 1;
			}
			else if (codigo == 2) {
				gasolina = gasolina + 1;
			}
			else if (codigo == 3) {
				diesel = diesel + 1;
			}
			
			// Entrada de dados da estrutura repetitiva
			System.out.print("Informe um código (1. Álcool, 2. Gasolina, 3. Diesel) ou 4 para parar: ");
			codigo = sc.nextInt();
		}
		
		// Saída de dados
		System.out.println("Muito obrigado!");
		System.out.print("Álcool: " + alcool + "\nGasolina: " + gasolina + "\nDiesel: " + diesel);
		
		sc.close(); // Boa prática de programação
	}
}