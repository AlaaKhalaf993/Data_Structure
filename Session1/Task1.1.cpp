#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int N;
    cin >> N;
   
    if (N % 2 == 0) {
      cout << "Door opens" << endl;
    } 
    else {
      cout << "Door stays closed" << endl;
    }
}