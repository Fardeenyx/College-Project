#include <iostream>
using namespace std;

class Num {
public:
    int val;

    Num(int v) {
        val = v;
    }

    // overloading + operator
    Num operator+(Num n) {
        return Num(val + n.val);
    }
};

int main() {
    Num a(5), b(3);
    Num c = a + b;

    cout << "Answer = " << c.val << endl;

    return 0;
}