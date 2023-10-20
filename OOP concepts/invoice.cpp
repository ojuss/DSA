#include <iostream>
#include <string>

using namespace std;

class Invoice {
    int itemCode;
    string itemName;
    int quantity;
    double pricePerItem;

public:

    void inputItemDetails() {
        cout << "Enter item code: ";
        cin >> itemCode;
        cout << "Enter item name: ";
        cin >> itemName;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price per item: $";
        cin >> pricePerItem;
    }

    double calculateTotalPrice() {
        return quantity * pricePerItem;
    }

    void generateInvoice() {
        double total = calculateTotalPrice();
        
        cout << "Item Code: " << itemCode << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price of " << quantity << " " << itemName << ": " << total << endl;
    }
};

int main() {
    Invoice invoices[3];
    double totalAmount{};

    for (int i = 0; i < 3; ++i) {
        invoices[i].inputItemDetails();
    }

    cout << "\nInvoice List:" << endl;
    for (int i = 0; i < 3; ++i) {
        invoices[i].generateInvoice();
    }

    for (int i=0; i<3; i++) {
        totalAmount = totalAmount + invoices[i].calculateTotalPrice();
    }
    cout << "\nTotal Price: " << totalAmount;
        
    return 0;
}
