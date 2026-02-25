#include <iostream>
using namespace std;

inline int add(int a, int b){
    return a + b;
}

inline int multiply(int a, int b){
    return a * b;
}

int main(){
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "The sum: " << add(a, b) << endl;
    cout << "The product: " << multiply(a, b) << endl;

    return 0;
}