#include <iostream>
using namespace std;

class square {
    public:
        int num;
};

int main(){
    square b;
    int x;
    b.num;

    cout << "\n" << "Enter a number: ";
    cin >> b.num;
    
    x = b.num * b.num;

    cout << "The square of the number: " << x  << "\n" << endl;

    return 0;
}