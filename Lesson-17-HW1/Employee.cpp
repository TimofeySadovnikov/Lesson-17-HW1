#include "Employee.h"

Employee::Employee()
    : lastName(""), birthYear(0), position(""), salary(0.0), education("") {}

Employee::Employee(string lastName, int birthYear, string position, double salary, string education)
    : lastName(lastName), birthYear(birthYear), position(position), salary(salary), education(education) {}

Employee::~Employee() {}

string Employee::getLastName() const {
    return lastName;
}

void Employee::setLastName(string lastName) {
    this->lastName = lastName;
}

int Employee::getBirthYear() const {
    return birthYear;
}

void Employee::setBirthYear(int birthYear) {
    this->birthYear = birthYear;
}

string Employee::getPosition() const {
    return position;
}

void Employee::setPosition(string position) {
    this->position = position;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double salary) {
    this->salary = salary;
}

string Employee::getEducation() const {
    return education;
}

void Employee::setEducation(string education) {
    this->education = education;
}

void Employee::displayInfo() const {
    cout << "Last Name: " << lastName << endl;
    cout << "Birth Year: " << birthYear << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: " << salary << endl;
    cout << "Education: " << education << endl;
}