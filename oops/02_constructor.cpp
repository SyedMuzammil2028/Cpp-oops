#include<iostream>
using namespace std;
class teachers{
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
       
        // void setSalary(double newSalary){
        //     salary = newSalary;
        // }

        // double getSalary(){
        //     return salary;
        // } 

        // non-parameterized constructer
        teachers(){
            cout <<"Techers constructor "<< endl;
            dept = "Education";
        }

        // parameterized constructor
        teachers(string n,string d, string s, double sal){
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }

        // Note: constructor is of same name as class but of different parameters 
        
        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
            cout << "Subject: " << subject << endl;
            cout << "Salary: " << salary << endl;
        }
        
        // destructor deleats the object in memory
        ~teachers(){
            cout << "Data attributes of class teachers are deleted in memory" << endl;
        }
};

int main(){
    teachers t1("John", "Maths", "Algebra", 50000);
    teachers t2("Emma", "Science", "Biology", 60000);
    teachers t3;

    t1.getInfo();
    t2.getInfo();
}