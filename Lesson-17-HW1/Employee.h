#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string lastName;
    int birthYear;
    string position;
    double salary;
    string education;

public:
    Employee();
    Employee(string lastName, int birthYear, string position, double salary, string education);
    ~Employee();

    string getLastName() const;
    void setLastName(string lastName);

    int getBirthYear() const;
    void setBirthYear(int birthYear);

    string getPosition() const;
    void setPosition(string position);

    double getSalary() const;
    void setSalary(double salary);

    string getEducation() const;
    void setEducation(string education);

    void displayInfo() const;
};
