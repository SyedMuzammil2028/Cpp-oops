#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void get_p(string na, int ag)
    {
        name = na;
        age = ag;
    }
    string set_p_n()
    {
        return name;
    }
    int set_p_a()
    {
        return age;
    }
    Person()
    {
        name = "muzammil";
        age = 18;
    }
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    string doWork()
    {
        cout << "I am working on it" << endl;
    }
    string doWork(string ass_work)
    {
        cout << "I am working on it : " << ass_work << endl;
    }
    //    string doWork (string ass_work) {
    //      return ass_work;
    //      }
    //    doWork having the same parameters
};
class Teacher : public Person
{
private:
    string subject;

public:
    void get_t_s(string nam, int a, string sub)
    {
        get_p(nam, a);
        subject = sub;
    }
    string set_t_s()
    {
        return subject;
    }
};
class Student : public Person
{
private:
    string grade;

public:
    void get_s_g(string nam, int a, string ga)
    {
        get_p(nam, a);
        grade = ga;
    }
    string set_s_g()
    {
        return grade;
    }
};
class Hod : public Teacher
{
private:
    string department;

public:
    void get_h_d(string nam, int a, string sub, string dep)
    {
        get_t_s(nam, a, sub);
        department = dep;
    }
    string set_h_d()
    {
        return department;
    }
};
class Director : public Teacher
{
private:
    int years;

public:
    void get_d_y(string nam, int a, string sub, int yrs)
    {
        get_t_s(nam, a, sub);
        years = yrs;
    }
    int set_d_y()
    {
        return years;
    }
    void displayDetails()
    {
        cout << "name : " << set_p_n() << endl;
        cout << "age : " << set_p_a() << endl;
        cout << "subject : " << set_t_s() << endl;
        cout << "years of experience : " << set_d_y() << endl;
    }
};
int main()
{
    Person p1;
    Person p2("Ali", 19);
    cout << "default constructor = " << p1.set_p_n() << " " << p1.set_p_a() << endl;
    cout << "parametrized constructor = " << p2.set_p_n() << " " << p2.set_p_a() << endl;
    Person p3;
    // p3.doWork();
    // p3.doWork("Aliyan");
    Director d1;
    cout << "=====Director details=====" << endl;
    d1.get_d_y("Zulfiqar", 35, "OOPS", 20);
    d1.displayDetails();
    return 0;
}