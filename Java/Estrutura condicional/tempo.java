// Importando biblioteca
import java.util.Scanner;

public class tempo {

	public static void main(String[] args) {
		
		// Variável
		int horaInicial, horaFinal, hora;
		
		// Para facilitar a leitura
		Scanner sc = new Scanner(System.in);
		
		// Entrada de dados
		System.out.print("Digite a hora inicial: ");
		horaInicial = sc.nextInt();
		
		System.out.print("Digite a hora final: ");
		horaFinal = sc.nextInt();
		
		// Algoritmo matemático
		hora = (24 - horaInicial) + horaFinal;
		
		// Condicional
		 if (horaInicial == 0 && horaFinal == 0) {
			 System.out.print("O jogo durou 24 horas.");
		 }
		 
		 else if (hora > 24) {
			 hora = hora - 24;
			 System.out.print("O jogo durou " + hora + " hora(s).");
		 }
		 
		 else {
			 System.out.print("O jogo durou " + hora + " hora(s).");
		 }
		
		sc.close(); // Boa prática de programação em Java
	}
}