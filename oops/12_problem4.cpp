#include<iostream>
using namespace std;
class Employee{
    public:
        string name;
        int age;
        int salary;

        Employee( ){
            name = "Ali";
            age = 23;
            salary = 90000;
        }

        void employeedetail(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager : public Employee{
    public:
        string dept;
    Manager(string d): Employee(){
            dept = d;
        }

    void managerdetail(){
        employeedetail();
        cout << "Department: " << dept << endl;
        }

};

int main(){
    Employee e1;
    Manager m1("HR");
    e1.employeedetail();
    m1.managerdetail();
}