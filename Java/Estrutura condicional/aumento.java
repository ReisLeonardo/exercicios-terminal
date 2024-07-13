// Importando biblioteca
import java.util.Scanner;

public class aumento {

	public static void main(String[] args) {
		
		// Variável
		double salario, porcentagem, aumento, novosalario;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite o salário da pessoa: ");
		salario = sc.nextDouble();
		
		// Condicional
		 if (salario <= 1000) {
			 porcentagem = 0.2;
			 aumento = salario * porcentagem;
			 novosalario = salario + aumento;
			 System.out.print("O novo salário é de R$" + String.format("%.2f", novosalario) + ", o aumento foi de R$" + String.format("%.2f", aumento) + ", pois foi acrescentado " + porcentagem*100 + "%.");
		 }
		 
		 else if (salario <= 3000) {
			 porcentagem = 0.15;
			 aumento = salario * porcentagem;
			 novosalario = salario + aumento;
			 System.out.print("O novo salário é de R$" + String.format("%.2f", novosalario) + ", o aumento foi de R$" + String.format("%.2f", aumento) + ", pois foi acrescentado " + porcentagem*100 + "%.");
		 }
		 
		 else if (salario <= 8000) {
			 porcentagem = 0.1;
			 aumento = salario * porcentagem;
			 novosalario = salario + aumento;
			 System.out.print("O novo salário é de R$" + String.format("%.2f", novosalario) + ", o aumento foi de R$" + String.format("%.2f", aumento) + ", pois foi acrescentado " + porcentagem*100 + "%.");
		 }
		 
		 else {
			 porcentagem = 0.05;
			 aumento = salario * porcentagem;
			 novosalario = salario + aumento;
			 System.out.print("O novo salário é de R$" + String.format("%.2f", novosalario) + ", o aumento foi de R$" + String.format("%.2f", aumento) + ", pois foi acrescentado " + porcentagem*100 + "%.");
		 }
		
		sc.close(); // Boa prática de programação em Java
	}
}