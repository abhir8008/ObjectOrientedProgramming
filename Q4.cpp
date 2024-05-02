// Write a C++ program to create a class called Car that has private member variables for company, model, and year.
// Implement member functions to get and set these variables.


#include <iostream>
using namespace std;

class Car
{
private:
    string company;
    int year;
    string model;

public:
    void getData()
    {
        cout << "company: " << company<<endl;
        cout << "year: " << year<<endl;
        cout << "Model: " << model<<endl;
    }
    void setData(string company1, int year1, string model1);
};

void Car ::setData(string company1, int year1, string model1)
{
    company = company1;
    year = year1;
    model = model1;
}

int main()
{
    Car c;
    c.setData("Ford Mustang Mach 1", 1969 , "USA");
    c.getData();
}