#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number of days: ";
    int Num_of_Days;
    cin >> Num_of_Days;

    int Total_Savings = 0;
    for (int i = 1; i <= Num_of_Days; i++) {
        Total_Savings += i;
    }

    cout << "Total savings: " << Total_Savings << endl;
    return 0;
}