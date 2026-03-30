#include <iostream>
using namespace std;
int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    for (int i = 1; i <= numEmployees; ++i) {
        double basicSalary;
        cout << "Enter basic salary for Employee " << i << ": ";
        cin >> basicSalary;

        double bonus = basicSalary * 0.12;
        double netSalary = basicSalary + bonus;

        cout << "Employee " << i << " - Basic Salary: " << basicSalary 
             << " Bonus: " << bonus 
             << " Net Salary: " << netSalary << endl;
    }
    return 0;
}