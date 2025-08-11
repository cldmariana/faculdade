package Semestre2.Unidade1Aula5;

public class Product {

    private int id;
    private String name;
    private int quantityInStock;
    private double price;

    public Product(int id, String name, int quantityInStock, double price) {
        this.id = id;
        this.name = name;
        this.quantityInStock = quantityInStock;
        this.price = price;
    }

    //  getters (para obter valores)
    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public int getQuantityInStock() {
        return quantityInStock;
    }

    public double getPrice() {
        return price;
    }

    // setter (modificar valores)
    public void setQuantityInStock(int quantityInStock) {
        this.quantityInStock = quantityInStock;
    }

    @Override
    public String toString() {
        return "ID: " + id + " | Product: " + name + " | Qty: " + quantityInStock + " | Price: $" + String.format("%.2f", price);
    }
}
