#include <iostream>
using namespace std;

class Meal {
    private:
    float price;

    public:
    string mealName;
    char size;

    Meal(string MN, char S) {
        this->mealName = MN;
        this->size = S;
    }

    void setPrice(float p) {
        this->price = p;
    }
    float getPrice() {
        return this->price;
    }
    void showInfo() {
        cout << "Meal Name: " << this->mealName << endl;
        cout << "Size: " << this->size << endl;
        cout << "Price: " << this->price << endl;
    }

};

int main() {
    string mealName1, mealName2;
    char sizem1, sizem2;
    cout << "Enter first meal name: ";
    cin >> mealName1;
    cout << "Enter size (S/M/L): ";
    cin >> sizem1;

    Meal* m1 = new Meal(mealName1, sizem1);
    float price1;
    cout << "Enter price: ";
    cin >> price1;

    m1->setPrice(price1);
    m1->showInfo();

    cout << "Enter second meal name: ";
    cin >> mealName2;
    cout << "Enter size (S/M/L): ";
    cin >> sizem2;


    Meal* m2 = new Meal(mealName2, sizem2);
    float price2;
    cout << "Enter price: ";
    cin >> price2;
    m2->setPrice(price2);
    m2->showInfo();

    return 0;
}