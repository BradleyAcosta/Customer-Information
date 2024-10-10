#include <iostream>
#include <string>
using namespace std;

class PerSon
{
private:
    int age;
    string name;
    string address;
    int Days;
    int Month;
    int Years;

public:
    const int no_age = 17;  // Const since it doesn't change

    // Constructors
    PerSon();
    PerSon(string n, string a, int g, int m, int d, int y);

    // Setters
    void setAge(int g) { age = g; }
    void setName(const string& n) { name = n; }
    void setAddress(const string& a) { address = a; }
    void setDays(int d) { Days = d; }
    void setMonth(int m) { Month = m; }
    void setYears(int y) { Years = y; }

    // Getters
     int getAge() const { return age; }
    string getName() const { return name; }
    string getAddress() const { return address; }
    int getDays() const { return Days; }
    int getMonth() const { return Month; }
    int getYears() const { return Years; }

    // Methods
    int setInvalidDate();
    bool CanMarry();

    // Overloaded I/O operators
    friend ostream &operator<<(ostream &output, PerSon &p);
    friend istream &operator>>(istream &input, PerSon &p);
};

class Employee : public PerSon
{
private:
    string Department;
    string NINumber;
    string Position;

public:
    // Constructors
    Employee();
    Employee(string d, string n, string p);

    // Setters
    void setDepartment(const string& d) { Department = d; }
    void setNINumber(const string& ni) { NINumber = ni; }
    void setPosition(const string& p) { Position = p; }

    // Getters
    string getDepartment() const { return Department; }
    string getNINumber() const { return NINumber; }
    string getPosition() const { return Position; }

    // Overloaded I/O operators for Employee
    friend ostream &operator<<(ostream &output, Employee &e);
    friend istream &operator>>(istream &input, Employee &e);
};