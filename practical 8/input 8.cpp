#include <iostream>
#include <string>
using namespace std;

class basic_info
{
protected:
    string name;
    int age;

public:
    void accept()
    {
        cout << "Enter employee name: ";
        getline(cin, name);

        cout << "Enter employee age: ";
        cin >> age;
        cin.ignore();
    }

    void display()
    {
        cout << "\nName of employee: " << name << endl;
        cout << "Age of employee: " << age << endl;
    }
};

class dept_info
{
protected:
    string deptName;
    string natureOFwork;

public:
    void accept1()
    {
        cout << "Enter department name: ";
        getline(cin, deptName);

        cout << "Enter nature of work: ";
        getline(cin, natureOFwork);
    }

    void display1()
    {
        cout << "Department: " << deptName << endl;
        cout << "Nature of work: " << natureOFwork << endl;
    }
};

class employee : public basic_info, public dept_info
{
protected:
    int employee_id;
    double salary;

public:
    void accept2()
    {
        accept();
        accept1();

        cout << "Enter employee ID: ";
        cin >> employee_id;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display2()
    {
        display();
        display1();

        cout << "Employee ID: " << employee_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    employee e;

    e.accept2();
    cout << "\n--- Employee Information ---\n";
    e.display2();

    return 0;
}