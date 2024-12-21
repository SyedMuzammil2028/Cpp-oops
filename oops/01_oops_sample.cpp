#include <iostream>
using namespace std;
class teachers{
private:
    double salary;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;

    // methods / member functions
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter function
    void setSalary(double newSalary){
        salary = newSalary;
    }

    // getter function
    double getSalary(){
        return salary;
    }
};
int main(){
    teachers t1;
    t1.name = "Sharda";
    t1.dept = "Cyber";
    t1.subject = "Data foriencic";
    // t1.salary = 50000.0; // private variable cannot be accessed directly
    t1.setSalary(150000);

    t1.changeDept("AI"); // changing department of teacher t1 without getter and setter as it is public directry

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;
}