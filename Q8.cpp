//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
//Include member functions to set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;

class Date
{
    private:
    int day, month, year;

    public:
    void setDate()
    {
        cout<< "enter date:"<<endl;
        cin >> day;
        cout<< "enter month:"<<endl;
        cin >> month;
        cout<< "enter date:"<<endl;
        cin >> year;
    }
    void getDate()
    {
        cout<< " entered Day: "<< day<< endl;;
        cout<< " entered month: "<< month<<endl;
        cout<< " entered year: "<< year<<endl;
        cout<<"date: "<< to_string(day) <<"/"<<to_string(month)<<"/"<<to_string(year)<<endl;
    }
};

// void Date :: setDate(int day1,  int month1, int year1)
// {
    
//     day = day1;
//     month =  month1;
//     year = year1;
// }

int main()
{
    Date d;
    //d.setDate(04,04,2024);
    d.setDate();
    //cout<< "the date is: " << d.getDate()<<endl;
    d.getDate();
}