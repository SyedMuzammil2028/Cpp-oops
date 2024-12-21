#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(string n, int a){
            name = n;
            age = a;
        }
};

class Student : public Person{
    public:
        string rollno;

        Student (string n, int a, string r) : Person(n, a){
            rollno = r;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "rollno: " << rollno << endl;
        }
};

class Teacher : public Person{
    public:
        string subject;

        Teacher(string n, int a, string s) : Person(n, a){
            subject = s;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Subject: " << subject << endl;
        }
};

int main(){
    Student s1("Rahul", 20, "5510");
    Teacher t1("Ali", 24, "Maths");
    
    cout << "Student Info:" << endl;
    s1.getInfo();
    cout << endl;
    cout << "Teacher Info:" << endl;
    t1.getInfo();
}