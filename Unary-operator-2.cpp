#include <iostream>
using namespace std;

class Counter {
    private:
        int count;
    public:

    Counter(int a){
        count = a;
    }
    
    void operator++(){ // Unary increment operator
        count++;
    }

    void operator--(){ // Unary decrement function operator
        count--;
    }

    void show(){
        cout << "Value: " << count << endl;
    }

};

int main(){
    Counter n(10);
    Counter x(20);

    cout << "Before: " << endl;
    n.show();
    x.show();

    ++n; // Unary increment operator called
    --x; // Unary decrement operator called

    cout << "After: " << endl;
    n.show();
    x.show();

    return 0;
}