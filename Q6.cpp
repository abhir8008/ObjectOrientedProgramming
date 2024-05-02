// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
//  Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
private:
    int l, b, h;

public:
    //void hypo(int l, int b, int h);
    void hypo();
    void side();
};

//void triangle ::hypo(int l, int b, int h)
void triangle ::hypo()
{
    if (h == sqrt((l * l) + (b * b)))
    {
        cout << " triangle is right triangle" << endl;
    }
    else if (l == b || b == h || h == l)
    {
        cout << " triangle is  isosceles" << endl;
    }
    else
    {
        cout << " it is scalene" << endl;
    }
}
void triangle::side()
{
    cout << "enter the base value: ";
    cin >> b;
    cout << "enter the hypoteneous value: ";
    cin >> h;
    cout << "enter the length value: ";
    cin >> l;
    //hypo(l,b,h);
}

int main()
{
    triangle t;
    t.side();
    t.hypo();
}