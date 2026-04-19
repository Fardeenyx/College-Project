#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int width;

    public:

    void setData(){
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    int area(){
        return length * width;
    }

    int perimeter(){
        return 2 * (length + width);
    }

    void showData(){
        cout << "Area of rectangle: " << area() << endl;
        cout << "Perimeter of rectangle: " << perimeter() << endl;
    }
};

int main(){
    Rectangle r1;

    r1.setData();
    r1.showData();

    return 0;
}