#include <iostream>
using namespace std;

class Medicine
{
private:
    int quantity = 0;
    float pricePerUnit = 0.0;
public:
    string medicineName;
    string companyName;

    Medicine(string MN, string CN) {
        medicineName = MN;
        companyName = CN;
    }

    void setQuantity(int q) {
        if (q < 0) {
            cout << "Invalid quantity." << endl;
            return;
        }
        else {
            quantity = q;
        }
    }

    int getQuantity() {
        return quantity;
    }

    void setPricePerUnit(float p) {
        if (p < 0) {
            cout << "Invalid price per unit." << endl;
            return;
        }
        else {
            pricePerUnit = p;
        }
    }

    float getPricePerUnit() {
        return pricePerUnit;
    }

    float getTotalPrice() {
        float totalPrice = quantity * pricePerUnit;
        return totalPrice;
    }

    void showInfo() {
        cout << endl << "Medicine Name: " << medicineName << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per Unit: " << pricePerUnit << endl;
    }

};

int main() {
    string medicineName1, companyName1;
    cout << "Enter first medicine name: ";
    cin >> medicineName1;
    cout << "Enter first company name: ";
    cin >> companyName1;

    Medicine* m1 = new Medicine(medicineName1, companyName1);
    int quantity1;
    float pricePerUnit1;

    cout << "Enter quantity: ";
    cin >> quantity1;
    m1->setQuantity(quantity1);

    cout << "Enter price per unit: ";
    cin >> pricePerUnit1;
    m1->setPricePerUnit(pricePerUnit1);



    string medicineName2, companyName2;
    cout << endl << "Enter second medicine name: ";
    cin >> medicineName2;
    cout << "Enter second company name: ";
    cin >> companyName2;

    Medicine* m2 = new Medicine(medicineName2, companyName2);
    int quantity2;
    float pricePerUnit2;

    cout << "Enter quantity: ";
    cin >> quantity2;
    m2->setQuantity(quantity2);

    cout << "Enter price per unit: ";
    cin >> pricePerUnit2;
    m2->setPricePerUnit(pricePerUnit2);

    m1->showInfo();
    cout << "Price of First Medicine: " << m1->getTotalPrice() << endl;

    m2->showInfo();
    cout << "Price of Second Medicine: " << m2->getTotalPrice() << endl;

    cout << endl <<"Combined Total Price: " <<( m2->getTotalPrice()+ m1->getTotalPrice() ) << endl;

    delete m1;
    delete m2;

    return 0;   
}