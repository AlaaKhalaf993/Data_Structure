#include <iostream>
using namespace std;

class Delivery {
    private:
    int deliveryOrders = 0;

    public:
    string name;
    string area;
    Delivery(string N, string A) {
        name = N;
        area = A;
    }

    void setDeliveryOrders(int DO) {
        if (DO < 0) {
            cout << "Invalid number of delivery orders." << endl;
            return;
        }
        else {
            this->deliveryOrders = DO;
        }
    }

    int getDeliveryOrders() {
        return deliveryOrders;
    }


    void addOrder() {
        deliveryOrders += 1;
    }

    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "Area: " << area << endl;
        cout << "Delivery Orders: " << deliveryOrders << endl;
    }

};

int main() {
    string driverName1, deliveryArea1;

    cout << "Enter first delivery driver name: ";
    cin >> driverName1;
    cout << "Enter first delivery area: ";
    cin >> deliveryArea1;

    Delivery* d1 = new Delivery(driverName1, deliveryArea1);
    d1->addOrder();

    string driverName2, deliveryArea2;
    cout << "Enter second delivery driver name: ";
    cin >> driverName2;
    cout << "Enter second delivery area: ";
    cin >> deliveryArea2;

    Delivery* d2 = new Delivery(driverName2, deliveryArea2);
    d2->addOrder();

    cout << "\nFirst Delivery Driver Information:" << endl;
    d1->showInfo();
    cout << "\nSecond Delivery Driver Information:" << endl;
    d2->showInfo();

    delete d1;
    delete d2;
    
    return 0;
}
