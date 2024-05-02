#include <iostream>
using namespace std;

class Record
{
private:
    string college;

public:
    string name;
    int batch;
    int CGPA;
    string branch;
    string plan;
    void BatchDuration(void);
    void read(void);
    void Future(void);

    void setData(string name1, int batch1, int CGPA1, string branch1);
    void getData()
    {
        cout << " Student name: " << name << endl;
        cout << " Entry year: " << batch << endl;
        cout << " Student CGPA: " << CGPA << endl;
        cout << " Student branch: " << branch << endl;
    }
};

void Record ::setData(string name1, int batch1, int CGPA1, string branch1)
{
    name = name1;
    batch = batch1;
    CGPA = CGPA1;
    branch = branch1;
}

void Record ::read(void)
{
    cout << "enter the name of college: " << endl;
    cin >> college;
}

void Record ::BatchDuration(void)
{
    cout << " Termination of your course: " << batch + 4 << endl;
}

void Record ::Future(void)
{
    cout << "what is your future plans: ";
    cin >> plan;
}

int main()
{
    Record Alice;
    Alice.read();
    Alice.setData("Alice", 2010, 8.4, "ECE");
    Alice.getData();
    Alice.BatchDuration();
    Alice.Future();

    cout << endl;
    cout << "Data for next student" << endl;
    cout << endl;

    Record Rishi;
    Rishi.read();
    Rishi.setData("Rishi", 2011, 9.4, "CSE");
    Rishi.getData();
    Rishi.BatchDuration();
    Rishi.Future();

    return 0;
}
