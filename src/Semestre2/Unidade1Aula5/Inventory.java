package Semestre2.Unidade1Aula5;

import javax.sound.sampled.Port;
import java.util.ArrayList;
import java.util.List;
import java.util.PropertyPermission;

public class Inventory {
    private List<Product> products = new ArrayList<>();
    int nextId = 1;

    private Product getProductById(int id) {
        for (Product product : products) {
            if (product.getId() == id) {
                return product;
            }
        }
        return null; // nulo se não encontrar
    }

    public void addProduct(String name, int initialQuantity, double price) {
        Product newProduct = new Product(nextId, name, initialQuantity, price);
        products.add(newProduct);
        System.out.println("✅ Product '" + newProduct.getName() + "' added with the ID " + newProduct.getId() + ".");
        nextId++;
    }

    public void registerSale(int productId, int soldQuantity) {
        Product product = getProductById(productId);

        if (product == null) {
            System.out.println("❌ Error: Product with ID: " + productId + " not found.");
            return;
        }

        if (product.getQuantityInStock() >= soldQuantity) {
            int newInventoryQty = product.getQuantityInStock() - soldQuantity;
            product.setQuantityInStock(newInventoryQty);
            System.out.println("Sale of " + soldQuantity + " units of '" + product.getName() + "' registered.");
            System.out.println("Current stock : " + product.getQuantityInStock());
        } else {
            System.out.println("❌ Error: Insufficient stock for '" + product.getName() + "'.");
            System.out.println("Available quantity: " + product.getQuantityInStock() + ", sale try: " + soldQuantity + " units.");
        }
    }

    public void addQuantity(int productId, int addedQuantity) {
        Product product = getProductById(productId);

        if (product != null) {
            product.setQuantityInStock(product.getQuantityInStock() + addedQuantity);
            System.out.println("📥 Entry of " + addedQuantity + " unit(s) of " + product.getName() + " registered.");
            System.out.println("Current stock: " + product.getQuantityInStock() + " unit(s)");
        } else {
            System.out.println("❌ Error: Product with ID: " + productId + " not found.");
        }
    }

    public void listProducts() {
        if (products.isEmpty()) {
            System.out.println("⚠️ Stock is empty.");
            return;
        }

        System.out.println("\n--- PRODUCTS  LIST ---");
        for (Product product : products) {
            System.out.println(product.toString());
        }
        System.out.println("-------------------------\n");
    }
}
