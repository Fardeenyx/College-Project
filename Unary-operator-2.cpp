#include <iostream>
using namespace std;

class Counter {
    private:
        int count;
    public:

    Counter(int a){
        count = a;
    }
    
    void operator++(){
        count++;
    }

    void show(){
        cout << "Value: " << count << endl;
    }

};

int main(){
    Counter n(10);

    cout << "Before: " << endl;
    n.show();

    ++n;

    cout << "After: " << endl;
    n.show();

    return 0;
}