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
};

class GradStudent : public Student{
    public:
        string researchArea;

        GradStudent(string n, int a, string r, string ra): Student ( n, a, r){
            researchArea = ra;
        }

    void getInfo(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "rollno: " << rollno << endl;
            cout << "Research Area: " << researchArea << endl;
        }
};

int main(){
    GradStudent s1("Rahul", 20, "123", "Datafirm");

    s1.getInfo();
}