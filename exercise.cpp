#include <iostream>
using namespace std;

class CSE2025{
    private:
    int rollNo;  // data members
    int yearOfAdmission; // data members

    public:
    void input(){ // member functions
        cout << "Enter your roll Number: ";
        cin >> rollNo;
        cout << "Enter your year of admission: ";
        cin >> yearOfAdmission;
    }

    void display(){ // member functions
        cout << "Roll Number: " << rollNo << endl;
        cout << "Year of Admission: " << yearOfAdmission << endl;
    }
};

int main(){
    CSE2025 student;
    student.input();
    student.display();

    return 0;
}