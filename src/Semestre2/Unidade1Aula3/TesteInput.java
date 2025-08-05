package Semestre2.Unidade1Aula3;

public class TesteInput {
    public static void main(String[] args) {

        System.out.print("Type a number: ");

        //usar system.console se programa sempre for executado a partir de um terminal, caso contrario, usar java scanner
        int number = Integer.parseInt(System.console().readLine());

        number = number + 1;

        System.out.println("The number incremented number is: " + number);

    }
}
