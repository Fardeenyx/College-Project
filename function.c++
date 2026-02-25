#include <iostream>
using namespace std;

class cal{
    public:
    int num1, num2;

    int add(int num1, int num2){
        int x;
        x = num1 + num2;
        return x;
    }

    int sub(int num1, int num2){
        int x;
        x = num1 - num2;
        return x;
    }
};

int main(){
    cal n;
    char op;

    cout << "\n" << "Enter first number: ";
    cin >> n.num1;
    cout << "Enter the operator (+, -): ";
    cin  >> op;
    cout << "Enter second number: ";
    cin >> n.num2;

    switch(op){
        case '+':
            cout << "Result: " << n.add(n.num1, n.num2) << endl;
        break;
        case '-':
            cout << "Result: " << n.sub(n.num1, n.num2) << endl;
        break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}