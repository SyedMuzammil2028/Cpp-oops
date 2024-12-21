#include<iostream>
using namespace std;
class Teacher{
    public:
        string subject;
        int salary;

        Teacher(string s, int sa){
            subject = s;
            salary = sa;
        }
};

class Student{
    public:
        string name;
        int rollno;

        Student(string n, int r){
            name = n;
            rollno = r;
        }
};

class TA : public Student, public Teacher{
    public:
        TA(string n, int r, string s, int sa): Student (n, r), Teacher(s, sa){
            
        }

    void getInfo(){
            cout << "Name: " << name << endl;
            cout << "rollno: " << rollno << endl;
            cout << "Subject: " << subject << endl;
            cout << "salary: " << salary << endl;
        }
};

int main(){
    TA t("John", 1, "Maths", 50000);
    t.getInfo();
}