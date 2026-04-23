#include <iostream>
using namespace std;

class Medicine
{
private:
    int quantity;
    float pricePerUnit;
public:
    string medicineName;
    string companyName;

    Medicine(string MN, string CN) {
        this->medicineName = MN;
        this->companyName = CN;
    }

    void setQuantity(int q) {
        if (q < 0) {
            cout << "Invalid quantity." << endl;
            return;
        }
        else {
            this->quantity = q;
        }
    }

    int getQuantity() {
        return this->quantity;
    }

    void setPricePerUnit(float p) {
        if (p < 0) {
            cout << "Invalid price per unit." << endl;
            return;
        }
        else {
            this->pricePerUnit = p;
        }
    }

    float getPricePerUnit() {
        return this->pricePerUnit;
    }

    float getTotalPrice() {
        float totalPrice = this->quantity * this->pricePerUnit;
        return totalPrice;
    }

    void showInfo() {
        cout << endl << "Medicine Name: " << this->medicineName << endl;
        cout << "Company Name: " << this->companyName << endl;
        cout << "Quantity: " << this->quantity << endl;
        cout << "Price per Unit: " << this->pricePerUnit << endl;
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

    return 0;   

}