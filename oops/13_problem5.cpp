#include <iostream>
using namespace std;
class cnic {
    private:
    string name;
    string fathername;
    public:
    string setfathername(string fn)
    {
        fathername = fn;
        return fathername;
    }
    private:
    string dob;
    string gender;
    int age;

    public:
    void set_c(string user, string user_dob, string user_gender, int user_age){
        name = user;
        dob = user_dob;
        gender = user_gender;
        age = user_age;
    }

    string get_n()
    {
        return name;
    }
    string get_dob()
    {
        return dob;
    }
    string get_g(){
        return gender;
    }

    int get_a(){
        return age;
    }

    void display2(){
        cout << "Name of User : " << name << endl;
        cout << "Date of Birth  : " << dob << endl;
        cout << "Gender of User : " << gender << endl;
        cout << "Age of User : " << age << endl;
        cout << "Father's Name : " << fathername << endl;
    }

};

class drivers_license : public cnic {
    private:
    string unique_id;

    public:
    drivers_license (string user_name, string user_dob, string user_gender, int user_age, string id) {
     set_c(user_name, user_dob, user_gender, user_age);
     unique_id = id;
    }

    drivers_license() {
        set_c("NULL", "NULL", "NULL", 0);
        unique_id = "NULL";
    }

    string get_id(){
        return unique_id;
    }

    void display()
    {
        display2();
        cout << "Unique ID of User : " << unique_id << endl;
    }

};

int main()
{
        cnic zumair;
        cout << zumair.setfathername("Ali") << endl;
        zumair.set_c("Zumair", "18-05-2004", "male", 19);
        zumair.display2();
        drivers_license ahsan;
        ahsan.display(); 
        cout << "UNique ID OF THE BKL" << ahsan.get_id();


        return 0;    
}