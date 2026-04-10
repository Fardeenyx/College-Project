#include <iostream>
using namespace std;

class Number {
    private:
        int x;
    public:
        Number(int a){
            x = a;
        }

        void operator-(){
            x = -x;
        }

        void show(){
            cout << "Value: " << x << endl;
        }
};

int main(){

    Number n(10);

    cout << "Before: " << endl;
    n.show();

    -n;

    cout << "After: " << endl;
    n.show();

    return 0;
}