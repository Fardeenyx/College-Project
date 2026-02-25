#include <iostream>
using namespace std;

void inc(int &x);

int main(){
    int a;

    cout << "Enter a number: ";
    cin >> a;

    inc(a);

    cout << "Increment: " << a << endl;
    return 0;
}

void inc(int &x){
    x = x + 1;
}