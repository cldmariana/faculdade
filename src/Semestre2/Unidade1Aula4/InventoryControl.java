package Semestre2.Unidade1Aula4;

import java.util.Scanner;

public class InventoryControl {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("What is the current quantity of products? ");
        int currentProductsQuantity = scanner.nextInt();

        System.out.print("Product entry number: ");
        int entryProductsNumber = scanner.nextInt();

        System.out.print("Product output number: ");
        int outputProductsNumber = scanner.nextInt();

        currentProductsQuantity = currentProductsQuantity + entryProductsNumber - outputProductsNumber;

        System.out.println("The current quantity of products in inventory is " + currentProductsQuantity + " products.");
    }
}
