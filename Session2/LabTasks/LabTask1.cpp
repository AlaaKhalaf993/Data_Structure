#include <iostream>
using namespace std;

class Employee {
    private:
        int salary = 0;
    
    public:
        string name;
        string jobTitle;

        Employee (string Name) {
            name = Name;
        }

        Employee (string Name, string JobTitle) {
            name = Name;
            jobTitle = JobTitle;
        }

        int GetSalary() {
            return salary;
        }

        void SetSalary(int s) {
            if (s >= 0){
                salary = s;
            }
            else {
                cout << "invalid salary \n";
            }
        }

        void showInfo() {
            cout << "Employee's Name :" << name << endl;
            cout << "Employee's Job Title :" << jobTitle << endl;
            cout << "Employee's Salary :" << salary << endl;
        }

};

int main() {
    string em1, em2;
    string jobTitle1;
    int salary1, salary2;

    cout << "Enter the employee's name :";
    cin >> em1;
    
    cout << "Enter the employee's job Title :";
    cin >> jobTitle1;

    Employee* employee1 = new Employee(em1, jobTitle1);

    cout << "Enter the employee's salary :";
    cin >> salary1;

    employee1->SetSalary(salary1);


    cout << "Enter the employee's name :";
    cin >> em2;

    Employee* employee2 = new Employee(em2);

    cout << "Enter the employee's salary :";
    cin >> salary2;

    employee2 ->SetSalary(salary2);

    employee1 -> showInfo();
    employee2 ->showInfo();    

}