// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance.
// Include member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int balance = 100, bin, bout;

public:
    void PTrans(void);
    void NTrans(void);
};

void BankAccount ::PTrans(void)
{
    cout << "current balance" << balance << endl;
    cout << " please enter the amount to add: " << endl;
    cin >> bin;
    balance += bin;
    cout << "current balance after transaction" << balance << endl;
}

void BankAccount ::NTrans(void)
{
    cout << "current balance" << balance << endl;
    cout << " please enter the amount to Remove: " << endl;
    cin >> bout;
    balance -= bout;
    cout << "current balance after transaction" << balance << endl;
}

int main()
{
    BankAccount BA;
    string Deposit, Withdraw, Job;
    cout << " Enter Deposit or Withdraw" << endl;
    cin >> Job;

    if (Job == "Deposit")
    {
        BA.PTrans();
        
    }
    else if (Job == "Withdraw")
    {
        BA.NTrans();
    }
    else
    {
        cout << " wrong input" << endl;
    }
}
