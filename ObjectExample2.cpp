#include <iostream>
#include <vector>
using namespace std;

class MenuItem {
  private:
    string name;
    double price;

  public:
    MenuItem(string name, double price) {
        this->name = name;
        this->price = price;
    }

    string get_name() {
        return name;
    }

    double get_price() {
        return price;
    }
};

class Order {
  private:
    vector<MenuItem> items;

  public:
    void add_item(MenuItem item) {
        items.push_back(item);
    }

    void print_receipt() {
        double total = 0.0;
        cout << "----------------------\n" ;
        cout << "Receipt:" << endl;
        for (int i = 0; i < items.size(); i++) {
            cout << "- " << items[i].get_name() << ": " << items[i].get_price() << " $" << endl;
            total += items[i].get_price();
        }
        cout << "Total: " << total << " $" << endl;
    }
};

int main() {
    MenuItem pizza("Pizza", 25.0);
    MenuItem coke("Coke", 5.0);
    MenuItem salad("Salad", 12.0);

    Order order;

    char choice = '0';
    while (choice != '3') {
    	cout << "----------------------";
        cout << "\nSelect an option: " << endl;
        cout << "1. Add item" << endl;
        cout << "2. Print receipt" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;

        if (choice == '1') {
            string name;
            double price;
            cout << "Enter item name: ";
            cin >> name;
            cout << "Enter item price: ";
            cin >> price;
            MenuItem item(name, price);
            order.add_item(item);
        }
        else if (choice == '2') {
            order.print_receipt();
        }
        else if (choice != '3') {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}