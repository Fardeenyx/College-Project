#include <iostream>
using namespace std;

class B;

class A
{
private:
    int x;

public:
    A(int a)
    {
        x = a;
    }
    void show() { cout << "Class A: " << x << endl; }
    friend void swapData(A &, B &);
};

class B
{
private:
    int y;

public:
    B(int b)
    {
        y = b;
    }
    void show() { cout << "Class B: " << y << endl; }
    friend void swapData(A &, B &);
};

void swapData(A &a, B &b)
{
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main()
{
    A a(5);
    B b(10);

    cout << "Before swap:\n";
    a.show();
    b.show();

    swapData(a, b);

    cout << "After swap:\n";
    a.show();
    b.show();

    return 0;
}