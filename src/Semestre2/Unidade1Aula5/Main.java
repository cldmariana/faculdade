package Semestre2.Unidade1Aula5;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Inventory inventory = new Inventory();
        Scanner scanner = new Scanner(System.in);

        inventory.addProduct("Apple", 50, 2.50);
        inventory.addProduct("Milk", 30, 4.00);
        inventory.addProduct("Bread", 100, 0.50);

        while (true) {
            System.out.println("\n--- INVENTORY MANAGEMENT ---");
            System.out.println("1. List products");
            System.out.println("2. Register new product");
            System.out.println("3. Register sale");
            System.out.println("4. Add to Inventory (Entry)");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");

            try {
                int option = scanner.nextInt();
                scanner.nextLine(); // Consome a quebra de linha deixada pelo nextInt()

                switch (option) {
                    case 1:
                        inventory.listProducts();
                        break;
                    case 2:
                        System.out.print("Product name: ");
                        String name = scanner.nextLine();
                        System.out.print("Initial Quantity: ");
                        int qty = scanner.nextInt();
                        System.out.print("Unit price: ");
                        double price = scanner.nextDouble();
                        inventory.addProduct(name, qty, price);
                        break;
                    case 3:
                        System.out.print("Product ID to be sold: ");
                        int saleId = scanner.nextInt();
                        System.out.print("Quantity to be sold: ");
                        int saleQty = scanner.nextInt();
                        inventory.registerSale(saleId, saleQty);
                        break;
                    case 4:
                        System.out.print("Product ID to be add in stock: ");
                        int entryId = scanner.nextInt();
                        System.out.print("Quantity to be added: ");
                        int entryQty = scanner.nextInt();
                        inventory.addQuantity(entryId, entryQty);
                        break;
                    case 5:
                        System.out.println("Exiting the system...");
                        return;
                    default:
                        System.out.println("❌ Invalid option! Try again.");
                        break;
                }
            } catch (InputMismatchException e) {
                System.out.println("❌ Error: Invalid Entry. Please, type a number.");
                scanner.next(); // Limpa o buffer do scanner
            }
        }
    }
}
