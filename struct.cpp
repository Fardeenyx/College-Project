#include <iostream>
using namespace std;

// Class to represent a rectangle
class Rectangle
{
    int length, width;   // data members

public:
    // function to set values
    void setData(int l, int w)
    {
        length = l;
        width = w;
    }

    // inline function to calculate area
    inline int area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;
    int l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    r.setData(l, w);   // setting values

    cout << "Area of rectangle is: " << r.area();  // calling inline function

    return 0;
}