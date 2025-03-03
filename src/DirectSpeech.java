import java.io.*;
import java.util.Scanner;

public class DirectSpeech {
    public static void main(String[] args) {

        String fileAdress = "game-list.txt";

        Scanner scanner = new Scanner(System.in);
        System.out.print("Type the wanted line: ");
        int wantedLine = scanner.nextInt();

        int lineNumber = 1;

        try {
            FileReader fileReader = new FileReader(fileAdress);
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            String line;
            boolean lineFound = false;

            while ((line = bufferedReader.readLine()) != null) {
                if (lineNumber == wantedLine) {
                    System.out.println("The game of the line " + wantedLine + " is: " + line);
                    lineFound = true;
                    break;
                }
                lineNumber++;

            }
            if (!lineFound) {
                System.out.println("The line " + wantedLine + " was not found");
            }

            bufferedReader.close();
            fileReader.close();

        } catch (IOException e) {
            System.out.println("Oops! Something went wrong");
        }
    }
}

