
#include<iostream>
using namespace std;


class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;

        
    void setData(int a1,int  b1, int c1); //Declaration
    void getData()
        {
            cout<< "enter value of a: " << a<< endl;
            cout<< "enter value of b: " << b<< endl;
            cout<< "enter value of c: " << c<< endl;
            cout<< "enter value of d: " << d<< endl;
            cout<< "enter value of e: " << e<< endl;
        }

};

void Employee :: setData(int a1,int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    //harry.a = 123;  --> this will give error as a is private data and can only be handeled on harry.setdata
    harry.d = 34; // --> public data can be change anywhere
    harry.e = 89;
    harry.setData(1,2,4);
    harry.getData();
    return 0;
}