#include<iostream>
#include<string>
using namespace std;

class Car {
    private:
    string brand;
    int year;

public:
    Car() { // Default constructor
        brand = "Unknown";
        year = 0;
        cout << "Default Constructor called\n";
    }

    Car(string b, int y) { // parameterized constructor
        brand = b;
        year = y;
        cout << "Parameterized Constructor called\n";
    }

    Car(const Car &c) { // copy constructor
        brand = c.brand;
        year = c.year;
        cout << "Copy Constructor called\n";
    }

    void display() {
        cout << brand << " - " << year << "\n";
    }

    ~Car() { // destructor
        cout << "Destructor called for " << brand << "\n";
    }
};

int main() {
    Car c1; // Default constructor called
    Car c2("Toyota", 2022); // Parameterized constructor called
    Car c3(c2); // Copy constructor called

    c1.display();
    c2.display();
    c3.display();

    return 0;
}