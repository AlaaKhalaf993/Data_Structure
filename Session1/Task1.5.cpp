#include <iostream>
using namespace std;

int addition(int a, int b) {
    return a + b;
}
int subtraction(int a, int b) {
    if (a >= b) {
        return a - b;
    } 
    else {
        return b - a;
    }
}
int multiplication(int a, int b) {
    return a * b;
}
int division(int a, int b) {
    if (b != 0) {
        return a / b;
    } 
    else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0; 
    }
}

int main() {
    int item1 , item2;
    cout << "Enter the price of the first item: ";
    cin >> item1;
    cout << "Enter the price of the second item: ";
    cin >> item2;
    
    cout << "What is the opperation you want to perform? (Enter + for addition, - for subtraction, * for multiplication, / for division): ";
    char operation;
    cin >> operation;
    
    int result;
    if (operation == '+') {
        result = addition(item1, item2);
    } 
    else if (operation == '-') {
        result = subtraction(item1, item2);
    } 
    else if (operation == '*') {
        result = multiplication(item1, item2);
    } 
    else if (operation == '/') {
        result = division(item1, item2);
    }     
    else {
        cout << "Invalid operation." << endl;
        return 1; 
    }
    cout << "The result is: " << result << endl;
    return 0;
}