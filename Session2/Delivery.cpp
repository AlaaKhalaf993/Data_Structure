#include <iostream>
using namespace std;

class Delivery {
    private:
    int deliveryOrders;

    public:
    string name;
    string area;
    Delivery(string N, string A) {
        this->name = N;
        this->area = A;
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
        return this->deliveryOrders;
    }


    void addOrder() {
        this->deliveryOrders += 1;
    }

    void showInfo() {
        cout << "Name: " << this->name << endl;
        cout << "Area: " << this->area << endl;
        cout << "Delivery Orders: " << this->deliveryOrders << endl;
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
    d1->showInfo();

    string driverName2, deliveryArea2;
    cout << "Enter second delivery driver name: ";
    cin >> driverName2;
    cout << "Enter second delivery area: ";
    cin >> deliveryArea2;

    Delivery* d2 = new Delivery(driverName2, deliveryArea2);
    d2->addOrder();
    d2->showInfo();
    
    return 0;
}