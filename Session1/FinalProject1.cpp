#include <iostream>
using namespace std;

int currentCars = 0;

void parkCar(int Garage[], int n) {
    cout << "Parking a car..." << endl;
    if (currentCars >= n) {
        cout << "Garage is full. Cannot park more cars." << endl;
        return;
    }
    cout << "Enter the car's plate number: ";
    int Plate;
    cin >> Plate; 

    Garage[currentCars] = Plate;
    cout << "Car parked successfully." << endl;
    currentCars++;
    return;    
}

void removeCar(int Garage[], int n) {
    cout << "Removing a car..." << endl;
    if (currentCars <= 0) {
        cout << "Garage is empty. No cars to remove." << endl;
        return;
    }
    cout << "Enter the car's plate number to remove: ";
    int Plate;
    cin >> Plate; 

    for (int i = 0; i < currentCars; i++) {
        if (Garage[i] == Plate) {
            for (int j = i; j < currentCars - 1; j++) {
                Garage[j] = Garage[j + 1];
            }
            currentCars--;
            cout << "Car removed successfully." << endl;
            return;
        }
    }
    cout << "Car not found in the garage." << endl;
}

int displayCars(int Garage[], int n) {
    cout << "Cars currently in the garage:" << endl;
    for (int i = 0; i < currentCars; i++) {
        cout << Garage[i] << " ";
    }
    cout << endl;
    return 0;
}

void searchCar(int Garage[], int n) {
    cout << "Searching for a car..." << endl;
    cout << "Enter the car's plate number to search: ";
    int Plate;
    cin >> Plate; 

    for (int i = 0; i < currentCars; i++) {
        if (Garage[i] == Plate) {
            cout << "Car found in the garage." << endl;
            return 1;
        }
    }
    cout << "Car not found in the garage." << endl;
}

void showStatistics(int Garage[], int n) {
    cout << "Garage capacity: " << n << endl;
    cout << "Current number of cars: " << currentCars << endl;
    cout << "Available spaces: " << n - currentCars << endl;
}

int main() {
    int Garage_Capacity;
    cout << "Enter the garage capacity: ";
    cin >> Garage_Capacity;

    int *Garage = new int[Garage_Capacity];

    int choice;
    cout << "Enter the task number you want to run (1-5): ";
    do{
        cout << "Select the feature you want to run: \n"
        << "1. Park Car \n"
        << "2. Remove Car \n"
        << "3. Display Cars \n"
        << "4. Search Car \n"
        << "5. Show Statistics \n"
        << "0. Exit \n";
        << "Enter your choice: ";
        cin >> choice;
            if (choice == 1) {
                parkCar(Garage, Garage_Capacity);
            } 
            else if (choice == 2) {
                removeCar(Garage, Garage_Capacity);
            } 
            else if (choice == 3) {
                displayCars(Garage, Garage_Capacity);
            } 
            else if (choice == 4) {
                searchCar(Garage, Garage_Capacity);
            } 
            else if (choice == 5) {
                showStatistics(Garage, Garage_Capacity);
            } 
            else if (choice == 0) {
                cout << "Exiting the program." << endl;
            } 
            else {
                cout << "Invalid choice. Please try again." << endl;
            }

    } while (choice != 0);
    
    delete[] Garage;
    return 0;
}