#include <iostream>
#include <string>
using namespace std;

class Teacher {
    public:
    // properties //attributes 
    string name;
    string dept;
    string subject;
    float salary;

    Teacher(){
        name = "";
        dept = "";
        subject = "";
        salary = 0;
    }

    Teacher(string name, string dept, string subject, int salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    

    //methods // members function 
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main(){
    Teacher t1;
    t1.name = "Hennery Clark";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.salary = 11000;

    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Salary: $" << t1.salary << endl;
    return 0;
}