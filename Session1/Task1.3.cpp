#include <iostream>
using namespace std;

int max_grade(int Grades[], int Num_of_Students) {
    cout << "Finding the maximum grade..." << endl;
    int max = Grades[0];
    for (int i = 1; i < Num_of_Students; i++) {
        if (Grades[i] > max) {
            max = Grades[i];
        }
    }
    return max;
}   

int main () {
    cout << "Enter the number of students: ";
    int Num_of_Students;
    cin >> Num_of_Students;

    int *Grades = new int[Num_of_Students];
    cout << "Enter the grades of the students: ";
    for (int i = 0; i < Num_of_Students; i++) {
        cin >> Grades[i];
    }
    int max = max_grade(Grades, Num_of_Students);
    cout << "The maximum grade is: " << max << endl;
    delete[] Grades;
}