//A payroll system maintains employee salary records. Implement a solution to accept salary of 
//10 employees in an array, compute total salary and average salary, then display the result. 
#include <iostream>
using namespace std;    
int main(){
    const int no_of_employees = 10;
    double salaries[no_of_employees];
    cout << "Enter the salaries of " << no_of_employees << " employees:" << endl;
    for(int i = 0; i < no_of_employees; i++) {
        cin >> salaries[i];
    }
    double total_salary = 0;
    for(int j = 0; j < no_of_employees; j++) {
        total_salary += salaries[j];
    }
    double average_salary = total_salary / no_of_employees;
    cout << "Total Salary: " << total_salary << endl;
    cout << "Average Salary: " << average_salary << endl;    
    return 0;
}