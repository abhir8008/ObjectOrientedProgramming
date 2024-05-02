// Write a C++ program to create a class called Rectangle that has private member variables for length and width.
// Implement member functions to calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float l, b;

public:
    void area(void);
    void dimension(void);
    void perimeter(void);
};

void Rectangle ::dimension(void)
{
    cout << "enter the length: ";
    cin >> l;
    cout << "enter the width: ";
    cin >> b;
}

void Rectangle ::area(void)
{
    cout << "area of rectangle: " << l * b << endl;
}
void Rectangle ::perimeter(void)
{
    cout << "perimeter of rectangle: " << 2 * (l + b);
}

int main()
{
    Rectangle r;
    r.dimension();
    r.area();
    r.perimeter();
}