#include<iostream>
using namespace std;
class teachers{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
       
        void setSalary(double newSalary){
            salary = newSalary;
        }

        double getSalary(){
            return salary;
        } 

        teachers(){
            cout <<"Techers constructor "<< endl;
            dept = "Education";
        }

        teachers(string n,string d, string s, double sal){
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
            cout << "Subject: " << subject << endl;
            cout << "Salary: " << getSalary() << endl;
        }
};

int main(){
    teachers t1("John", "Maths", "Algebra", 50000);
    teachers t2(t1); // default copy constructer
    teachers t3;

    // t1.getInfo();
    t2.getInfo();
    
}