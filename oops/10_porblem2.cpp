#include <iostream>
using namespace std;
class Person{
private:
    string name;
    int age;

public:
    void set_p_n_a(string n, int a){
        name = n;
        age = a;
    }
    string get_p_n(){
        return name;
    }
    int get_p_a(){
        return age;
    }

    Person(){
        name = "Ali";
        age = 20;
    }

    Person(string n, int a){
        name = n;
        age = a;
    }

    string doWork(){
        cout << "I am working on it" << endl;
    }

    string doWork(string assignedWork){
        cout << "I am working on: " << assignedWork << endl;
    }

    // string doWork(string assignedWork){
    //     return assignedWork;
    // }
    // Note: Function having same parameters
};

class Student : public Person{
private:
    char grade;

public:
    void set_s_g(string n, int a, char g){
        set_p_n_a(n, a);
        grade = g;
    }
    int get_s_g(){
        return grade;
    }
};

class Teacher : public Person{
private:
    string subject;

public:
    void set_t_s(string n, int a, string s){
        set_p_n_a(n, a);
        subject = s;
    }
    string get_t_s(){
        return subject;
    }
};

class HOD : public Teacher{
private:
    string dept;

public:
    void set_h_d(string n, int a, string s, string d){
        set_t_s(n, a, s);
        dept = d;
    }
    string get_h_d(){
        return dept;
    }
};

class Director : public Teacher{
private:
    int yoe;

public:
    void set_d_y(string n, int a, string s, int y){
        set_t_s(n, a, s);
        yoe = y;
    }
    int get_d_y(){
        return yoe;
    }

    void displayDetails(){
        cout << "=== Director Details ===" << endl;
        cout << "Name: " << get_p_n() << endl;
        cout << "Age: " << get_p_a() << endl;
        cout << "Subject: " << get_t_s() << endl;
        cout << "Years of Experience: " << get_d_y() << endl;
    }
};

int main(){
    Person p1;
    cout << "Default constructor ..." << endl;
    cout << "Name: " << p1.get_p_n() << endl;
    cout << "Age: " << p1.get_p_a() << endl;
    Person p2;
    p2.set_p_n_a("John", 25);
    cout << "Parametrized constructor ..." << endl;
    cout << "Name: " << p2.get_p_n() << endl;
    cout << "Age: " << p2.get_p_a() << endl;

    Person p3;
    // p3.doWork();
    p3.doWork("ICT Assignment");    
   
    Director d1;
    d1.set_d_y("John", 25, "ICT", 5);
    d1.displayDetails();

}