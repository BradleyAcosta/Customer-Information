#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

// PerSon class constructors
PerSon::PerSon()
{
    setName(" ");
    setAddress(" ");
    setAge(0);
    setMonth(0);
    setDays(0);
    setYears(0);
}

PerSon::PerSon(string n, string a, int g, int m, int d, int y)
{
    setName(n);
    setAddress(a);
    setAge(g);
    setMonth(m);
    setDays(d);
    setYears(y);
}

// Overloaded output operator
ostream &operator<<(ostream &output, PerSon &p)
{
    output << "Your Information: " << endl;
    output << "My name is " << p.getName() << " and my age is " << p.getAge()
           << " and my address is " << p.getAddress() << endl;
    output << "This is your date of birth: " << p.getMonth() << "/" << p.getDays() << "/" << p.getYears() << endl;

    if (p.setInvalidDate() == -1) // Call to validate date
    {
        output << "ERROR: Invalid date detected!" << endl;
    }
    return output;
}

// Overloaded input operator
istream &operator>>(istream &input, PerSon &p)
{
    string name, address;
    int age, month, day, year;

    cout << "Enter name, age, address, month, day, year (space separated): ";
    input >> name >> age >> address >> month >> day >> year;

    p.setName(name);
    p.setAge(age);
    p.setAddress(address);
    p.setMonth(month);
    p.setDays(day);
    p.setYears(year);

    return input;
}


// CanMarry function (corrected)
bool PerSon::CanMarry()
{
    return getAge() > no_age; // Check if age is greater than no_age
}

// setInvalidDate function (corrected)
int PerSon::setInvalidDate()
{
    try
    {
        if (getMonth() > 12 || getMonth() < 1)
        {
            throw "Month is invalid.";
        }
        if (getDays() > 31 || getDays() < 1)
        {
            throw "Days are invalid.";
        }
        if (getYears() > 2021 || getYears() < 1900)
        {
            throw "Year is invalid.";
        }
        return 0; // Valid date
    }
    catch (const char *errMsg)
    {
        cout << errMsg << endl;
        return -1; // Invalid date
    }
}

// Employee class constructors
Employee::Employee()
{
    setDepartment(" ");
    setNINumber(" ");
    setPosition(" ");
}

Employee::Employee(string d, string n, string p)
{
    setDepartment(d);
    setNINumber(n);
    setPosition(p);
}

// Overloaded output operator for Employee
ostream &operator<<(ostream &output, Employee &e)
{
    output << "Your Department is: " << e.getDepartment() << endl;
    output << "Your National Insurance is: " << e.getNINumber() << endl;
    output << "Your Position is: " << e.getPosition() << endl;
    return output; // Return output for chaining
}

// Overloaded input operator for Employee
istream &operator>>(istream &input, Employee &e)
{
    string department, ninumber, position;

    cout << "Enter Department, National Insurance, Position (space separated): ";
    input >> department >> ninumber >> position;

    e.setDepartment(department);
    e.setNINumber(ninumber);
    e.setPosition(position);

    return input; // Return input for chaining
}
