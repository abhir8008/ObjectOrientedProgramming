//  Write a C++ program to create a class called Person that has private member variables for name, age and country.
// Implement member functions to set and get the values of these variables.

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setData(string name1, int age1, string country1);
    void getData()
    {
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
        cout << "Country: " << country<<endl;
    }
};

void Person ::setData(string name1, int age1, string country1)
{
    name = name1;
    age = age1;
    country = country1;
}

int main()
{
    Person p;
    p.setData("Alice", 10, "USA");
    p.getData();
}