package Semestre2.Unidade1Aula4;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.Stream;

public class BasicAlgorithm {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

//        String name = "mariana";
//        int age = 19;
//        float salary = 0.0f;
        boolean student;

        student = true;

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        System.out.print("What is your salary? $");
        float salary = scanner.nextFloat();

        System.out.println();
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Salary $" + salary);
        System.out.println("Is " + name + " a student? " + student);
        System.out.println("The opposite of true is " + !student);

        if (age >= 18) {
            System.out.println("You are at legal age.");
        } else {
            System.out.println("You are still a minor.");
        }

        System.out.println("==============================================");
        System.out.println();


        //  MANIPULAÇÃO DE STRINGS :
        //
        //  EXTRAÇÃO DOS PRIMEIROS CARACTERES
        String text = "aqui tem um breve texto para servir de busca de caracteres";
        String part = text.substring(0, 23);
        System.out.println(part);
        System.out.println();


        //  TIPO INT PORQUE ELE RETORNA A POSIÇÃO EM QUE A SUBSTRING COMEÇA
        int position = text.indexOf("texto");
        System.out.println("a palavra 'texto' começa na posição " + position);
        System.out.println("==============================================");
        System.out.println();


        //  MANIPULAÇÃO DE LISTAS/ARRAYS
        String[] Jogos = {"Minecraft", "The Sims", "GTA V", "Valorant"};
        System.out.println("minha lista de jogos é: " + Arrays.toString(Jogos));
        String jogo3 = Jogos[2];
        System.out.println("o terceiro jogo da minha lista é '" + jogo3 + "'");
        System.out.println("==============================================");
        System.out.println();


        //  CONVERSÃO DE TIPOS
        String str = "123";
        int numero = Integer.parseInt(str);

        System.out.println("string to integer " + numero);
        System.out.println();

        int intNumber = 321;
        String integerNumber = Integer.toString(intNumber);
        System.out.println("integer to string " + integerNumber);
        System.out.println("==============================================");
        System.out.println();


        //  ESTRUTURA DE REPETIÇÃO "for"
        System.out.println("For Loop");
        for (int i = 1; i <= 10; i++) {
            System.out.println("Counter is " + i);
        }
    }
}
