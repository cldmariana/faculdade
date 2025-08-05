package Semestre2.Unidade1Aula3;

import java.util.Scanner;

public class Curtains {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("What is the current time? ");
        int currentTime = scanner.nextInt();

        System.out.print("What time the curtains must open? ");
        int openTime = scanner.nextInt();

        System.out.print("What time the curtains must close? ");
        int closeTime = scanner.nextInt();

        boolean isCurtainsOpen = false;

        if (currentTime >= openTime && currentTime < closeTime) {
            isCurtainsOpen = true;
        }

        //System.out.println("Curtains open time: " + openTime + "h00");
        //System.out.println("Curtains close time: " + closeTime + "h00");

        if (isCurtainsOpen) {
            System.out.println("The curtains are open (open time " + openTime + "h00)");
        } else if (currentTime < openTime) {
            System.out.println("The curtains are not open yet (open only at " + openTime + "h00)");
        } else if (currentTime > closeTime) {
            System.out.println("The curtains already closed (close at " + closeTime + "h00)");
        }

    }
}
