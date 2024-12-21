#include <iostream> 
using namespace std;

class Employee {
public :
string Name;
int Age;
float Salary;

Employee (string n, int A, float S) {
Name = n;
Age = A;
Salary = S;
}

void display () {
cout << "Name : " << Name << endl;
cout << "Age : " << Age << endl;
cout << "Salary : " << Salary << endl;
}

};

class Manager : public Employee {
public:
string Department;

Manager (string n, int A, float S, string D) : Employee(n, A, S) {
Department = D;
}

void display_M (){
display();
cout << "Department : " << Department << endl;

}
};

int main() {

Employee E ("Ali" , 18, 20000.00);

Manager M("Ahsan", 18, 30000.00, "Cybersecurity");

E.display();

cout << endl;

M.display_M ();

return 0;
}