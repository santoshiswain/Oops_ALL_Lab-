#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void accept() {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "Product ID   : " << productID << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Subtotal     : " << price * quantity << endl;
    }

    float getCost() {
        return price * quantity;
    }
};

class ShoppingCart {
private:
    Product *products;
    int n;

public:
    ShoppingCart(int size) {
        n = size;
        products = new Product[n];
    }

    void acceptProducts() {
        for (int i = 0; i < n; i++) {
            cout << "\nEnter details of Product " << i + 1 << endl;
            products[i].accept();
        }
    }

    void displayProducts() {
        cout << "\n--- Shopping Cart ---\n";

        for (int i = 0; i < n; i++) {
            cout << "\nProduct " << i + 1 << endl;
            products[i].display();
        }
    }

    float calculateTotal() {
        float total = 0;

        for (int i = 0; i < n; i++) {
            total += products[i].getCost();
        }

        return total;
    }

    void displayTotal() {
        cout << "\nTotal Amount = " << calculateTotal() << endl;
    }

    ~ShoppingCart() {
        delete[] products;
        cout << "\nDynamically allocated memory released." << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    ShoppingCart cart(n);

    cart.acceptProducts();
    cart.displayProducts();
    cart.displayTotal();

    return 0;
}