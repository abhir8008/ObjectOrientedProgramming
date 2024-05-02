// Write a C++ program to implement a class called Circle that has private member variables for radius.
// Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <cmath>
using namespace std;

class circle
{
private:
    float r;
    // void radius (void);

public:
    void area(void);
    void circum(void);

    void setData(int r);
    void getRadius()
    {
        cout << " raduis is: " << r << endl;
    }
};

void circle ::area(void)
{
    cout << " area of circle: " << (3.14 * pow(r, 2.0)) << endl;
}

void circle ::circum(void)
{
    cout << " circumference of circle: " << (3.14 * r * 2.0) << endl;
}

void circle ::setData(int r1)
{
    r = r1;
}

int main()
{
    circle c;

    float r;
    c.setData(4.0);
    c.getRadius();

    c.area();
    c.circum();
}
