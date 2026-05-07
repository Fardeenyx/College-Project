#include <iostream>
using namespace std;

void swapData(int &a, int &b) { // reference variable as argument 
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swap data: \n";
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    swapData(a, b);

    cout << "After swap data: \n";
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    return 0;
}