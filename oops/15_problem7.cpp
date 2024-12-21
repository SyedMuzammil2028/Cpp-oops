#include<iostream>
using namespace std;
class Employee{
    public:
        string name;
        int age;
        int salary;

        Employee( string n, int a, int s ){
            name = n;
            age = a;
            salary = s;
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
        
        Manager(string n, int a, int s , string d): Employee(n,a,s){
                dept = d;
            }

        void managerdetail(){
            employeedetail();
            cout << "Department: " << dept << endl;
            }

};

int main(){
    Employee e1( "John", 25, 50000 );
    Manager m1( "Rahul", 30, 60000, "HR" );
    e1.employeedetail();
    m1.managerdetail();
}