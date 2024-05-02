#include <iostream>
using namespace std;

class A
{
public:
    int x;

private:
    int y;

public:
    void setdata(int x, int y)
    {
        cout << "X = ";
        cin >> x;
        cout << "Y= ";
        cin >> y;
        
    }
    int getdata(int x, int y)
    {
        cout << x << endl;
        cout << y << endl;
    }
};

// void A :: void setdata(int x, int y)
// {
//     cout<< "X = ";
//     cin>> x;
//     cout << "Y= ";
//     cin >> y;
// }

int main()
{
    int x1, y1;
    A a;
    a.setdata(x1, y1);
    a.getdata(x1,y1);
}