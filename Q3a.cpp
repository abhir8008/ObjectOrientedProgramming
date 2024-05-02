//  Write a C++ program to create a class called Person that has private member variables for name, age and country.
// Implement member functions to set and get the values of these variables.



//_______________________________________________NOT Working_________________________________________



#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setName(string name)
    {
        string n;
        name = n;
    }

    void setage(int age)
    {
        int a;
        age = a;
    }

    void setcountry(string country)
    {
        string c;
        country = c;
    }

    string getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    string getcountry()
    {
        return country;
    }
};

int main()
{
    Person p;
    p.setName("Alice");
    cout<< "name: "<<p.getname()<<endl;
    p.setage(25);
    cout<< "Age: " << p.getage()<<endl;
    p.setcountry("USA");
    cout<< " Country: "<< p.getcountry()<<endl;
}