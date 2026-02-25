#include <iostream>
using namespace std;

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divide(int num1, int num2);
int remainder(int num1, int num2);

int main(){

    char op;
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter the second number";
    cin >> num2;
    
    switch (op)
    {
    case '+':
        cout << "Result: " << add(num1, num2);
        break;
    case '-':
        cout << "Result: " << sub(num1, num2);
        break;
    case '*':
        cout << "Result: " << mul(num1, num2);
        break;
    case '/':
        int choice;
        cout << "1) Divide" << endl;
        cout << "2) Remainder" << endl;
        cout << "Enter you'r choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Result: " << divide(num1, num2);
        }
        else if(choice == 2){
            cout << "Result: " << remainder(num1, num2);
        }
        else {
            cout << "Invalid choice" << "\n";
        }
    
    default:
        cout << "Invalid operator!" << "\n";
        break;
    }


    return 0;
}


int add(int num1, int num2){
    return num1 + num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

int mul(int num1, int num2){
    return num1 * num2;
}

int divide(int num1, int num2){
    return num1 / num2;
}

int remainder(int num1, int num2){
    return num1 % num2;
}