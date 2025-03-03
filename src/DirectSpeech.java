import java.io.*;
import java.util.Scanner;

public class DirectSpeech {
    public static void main(String[] args) {

        String fileAdress = "lista-de-jogos.txt";

        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite a linha desejada: ");
        int wantedLine = scanner.nextInt();

        int lineNumber = 1;

        try {
            FileReader fileReader = new FileReader(fileAdress);
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            String line;
            boolean lineFound = false;

            while ((line = bufferedReader.readLine()) != null) {
                if (lineNumber == wantedLine) {
                    System.out.println("o jogo da linha " + wantedLine + " é: " + line);
                    lineFound = true;
                    break;
                }
                lineNumber++;

            }
            if (!lineFound) {
                System.out.println("A linha " + wantedLine + " não foi encontrada");
            }

            bufferedReader.close();
            fileReader.close();

        } catch (IOException e) {
            System.out.println("Ocorreu um erro ao ler o arquivo");
        }
    }
}

