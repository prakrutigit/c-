/* A mid-sized retail store faced challenges in efficiently managing its inventory of items. The store's
management sought to build a system that could keep track of individual items, including details like
a unique item ID, item name, price, and the quantity available in stock. The need for a streamlined
process arose due to frequent stock discrepancies, which led to issues with customer satisfaction and
operational efficiency.
To address this, the store hired a team of developers to create a digital inventory management system.
The envisioned solution would allow for the initialization of item details, either with default values or
specific attributes like ID, name, price, and starting quantity. This system needed to handle operations
like increasing stock levels when new shipments arrived and decreasing stock when items were sold,
ensuring sufficient inventory was available for each transaction. Additionally, the system would
provide clear, detailed summaries of each item's status, aiding in decision-making and reporting.
The developers faced real-world scenarios where they had to manage multiple inventory items
simultaneously. They planned to design an array of inventory items and simulate common tasks such
as adding stock, processing sales transactions, and displaying the current inventory details. Handling
edge cases, such as attempting to sell more items than available in stock, became a critical part of the
implementation to ensure reliability. */

#include <iostream>
using namespace std;

class Item {
    int itemID;
    string name;
    float price;
    int quantity;

public:

    Item(int id = 0, string n = "Unknown", float p = 0.0, int q = 0)
        : itemID(id), name(n), price(p), quantity(q) {}

    void addStock(int amount) {
        quantity += amount;
    }


    void sell(int amount) {
        if (amount <= quantity)
            quantity -= amount;
        else
            cout << "Not enough stock for item: " << name << endl;
    }

    void display() {
        cout << "ID: " << itemID << ", Name: " << name
             << ", Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {

    Item i1, i2(101, "Laptop", 45000, 10), i3(102, "Mouse", 500, 50);


    i1.display();
    i2.addStock(5);
    i2.sell(3);
    i2.display();

    i3.sell(60);
    i3.display();

    return 0;
}


