#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;
    
        Person(){
            cout << "Parent constructor called ..."<< endl;
    }
};

class Student : public Person{
    public:
        string rollno;

        Student(){
            cout << "Son constructor called ... "<< endl;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "rollno: " << rollno << endl;
        }

};

int main(){
    Student t1;
    
    t1.name = "John";
    t1.age = 25;
    t1.rollno = "1234";

    t1.getInfo();
    
}