#include <iostream>
using namespace std;

// Product class to represent a product in the system
class Product {
public:
    int serialNumber;
    string name;
    double price;

    // Constructor
    Product(int sn = 0, string nm = "", double pr = 0.0) {
        serialNumber = sn;
        name = nm;
        price = pr;
    }

    // Display product details
    void display() const {
        cout << serialNumber << ". " << name << " - K" << price << endl;
    }
};

//TellerMachine class to manage the shopping process
class TellerMachine {
private:
    Product products[20];        // All available products
    Product selected[5];         // Selected products
    int selectedQuantities[5];   // Quantity of selected products
    int count;                   // Number of selected products

public:
    // Constructor to initialize products
    TellerMachine() {
        products[0] = Product(1, "Water", 1.50);
        products[1] = Product(2, "Soda", 2.00);
        products[2] = Product(3, "Chips", 1.00);
        products[3] = Product(4, "Candy", 0.50);
        products[4] = Product(5, "Juice", 2.50);
        products[5] = Product(6, "Cookies", 1.75);
        products[6] = Product(7, "Chocolate", 1.25);
        products[7] = Product(8, "Gum", 0.75);
        products[8] = Product(9, "Ice Cream", 3.00);
        products[9] = Product(10, "Cake", 4.00);
        products[10] = Product(11, "Mealie Meal", 1.50);
        products[11] = Product(12, "Bread", 4.50);
        products[12] = Product(13, "Chilli", 1.40);
        products[13] = Product(14, "Apples", 1.60);
        products[14] = Product(15, "Oranges", 4.50);
        products[15] = Product(16, "Garlic", 8.50);
        products[16] = Product(17, "Onions", 9.50);
        products[17] = Product(18, "Peppers", 2.50);
        products[18] = Product(19, "Mints", 4.50);
        products[19] = Product(20, "Eggs", 1.75);
        count = 0;
    }

    // Display available products
    void displayProducts() const {
        cout << "List of available products:\n\n";
        for (int i = 0; i < 20; i++) {
            products[i].display();
        }
        cout << "--------------------------------------------" << endl;
    }

    //  Select products based on user input
    void selectProducts() {
        int serialNumber, quantity;
        while (count < 5) {
            cout << count + 1 << ". Enter the serial number of the product: ";
            cin >> serialNumber;
            cout << count + 1 << ". Enter the quantity: ";
            cin >> quantity;

            bool found = false;
            for (int i = 0; i < 20; i++) {
                if (products[i].serialNumber == serialNumber) {
                    selected[count] = products[i];
                    selectedQuantities[count] = quantity;
                    count++;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Invalid serial number, please try again.\n";
            }
        }
    }

    // Display receipt and calculate total
    void printReceipt() const {
        double grandTotal = 0;

        cout << "\n--------------------------------------------\n";
        cout << "You have selected the following products:\n";
        cout << left<< "#" 

        <<" "<< "NAME" 
        <<" "<< "QUANTITY" 
        <<" "<< "UNIT PRICE" 
        <<" "<< "TOTAL" << endl;
        cout << "................................................................\n";

        for (int i = 0; i < 5; i++) {
            double total = selected[i].price * selectedQuantities[i];
            grandTotal += total;
            cout << left<< (i + 1)
                 << selected[i].name
                 << selectedQuantities[i]
                 << "K"<< selected[i].price
                 << "K" << total << endl;
        }

        cout << "--------------------------------------------\n";
        cout << "Grand Total: K" << grandTotal << endl;
        cout << "--------------------------------------------\n";
    }
};

// Main function to run the Teller Machine
int main() {
    cout << "👋 Hello! Welcome to TellZed\n\n";
    cout<<"\n\n\n"<<endl;

    TellerMachine machine;
    machine.displayProducts();
    machine.selectProducts();
    machine.printReceipt();

    return 0;
}
