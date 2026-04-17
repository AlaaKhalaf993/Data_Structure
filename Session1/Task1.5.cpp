#include <iostream>
using namespace std;

int addition(int a, int b, int result) {
    result = a + b;
    return result;
}
int subtraction(int a, int b, int result) {
    if (a >= b) {
        result = a - b;
    } 
    else {
        result = b - a;
    }
    return result;
}
int multiplication(int a, int b, int result) {
    result = a * b;
    return result;
}
int division(int a, int b, int result) {
    if (b != 0) {
        result = a / b;
        return result;
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
        addition(item1, item2, result);
    } 
    else if (operation == '-') {
        subtraction(item1, item2, result);
    } 
    else if (operation == '*') {
        multiplication(item1, item2, result);
    } 
    else if (operation == '/') {
        division(item1, item2, result);
    }     
    else {
        cout << "Invalid operation." << endl;
        return 1; 
    }
    cout << "The result is: " << result << endl;
    return 0;
}