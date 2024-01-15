#include "Employee.h"

int main() {
    const int numberOfEmployees = 5;
    Employee employees[numberOfEmployees];

    employees[0] = Employee("Smith", 1985, "Manager", 50000.0, "Bachelor's Degree");
    employees[1] = Employee("Johnson", 1990, "Software Developer", 75000.0, "Master's Degree");
    employees[2] = Employee("Williams", 1988, "Accountant", 60000.0, "Bachelor's Degree");
    employees[3] = Employee("Jones", 1960, "HR Specialist", 55000.0, "Bachelor's Degree");
    employees[4] = Employee("Brown", 1955, "Marketing Coordinator", 48000.0, "Associate's Degree");

    for (int i = 0; i < numberOfEmployees; ++i) {
        cout << "Employee #" << i + 1 << ":\n";
        employees[i].displayInfo();
        cout << endl;
    }

    return 0;
}