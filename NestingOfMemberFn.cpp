// OOPs - classes and objects

// c++ --> initailly called --> C with classes
//  class --> exension of strutures (in C)
//  structure had limitations  --> members are public
//                              --> No methods

// classes = structures + more
//  classes --> can have methods and properties
//  classes --> can make few members as public and few as private
//  structures in c++ are typedefed
//  you can declare objects along with the class declaration

/* class Employee{
      class defination
 }; harry, rohan, lavish; */

// harry.salary = 8 makes no sense if salary is private
// Nesting of member function

#include <iostream>
#include <string>
using namespace std;

class binary
{//private
    string s; // by default everything in class is private unless mentioned public
    //chk_bin() --> it will become orivate no one use it.
public:
    void read(void); // void as it is sting and it doenot take any input
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    //chk_bin() one can use this from here also without using it from int main() --> nesting of member functions
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << " displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}