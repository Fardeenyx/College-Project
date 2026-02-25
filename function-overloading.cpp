#include <iostream>
using namespace std;

int add(int a){
    return a+a;
}

int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

int main(){
    add(10);
    add(10, 20);
    add(10, 20, 30);

    return 0;
}