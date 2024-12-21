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

int main(){
    Student s1("Rahul", 20, "123");

    s1.getInfo();
}