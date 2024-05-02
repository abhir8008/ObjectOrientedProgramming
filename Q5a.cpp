// Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance.
// Include member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int balance;

public:
    BankAccount() : balance(100)
    {
    }
    void Deposit(int amount);
    void Withdraw(int amount);
    int getBalance();
};

void BankAccount ::Deposit(int amount)
{
    balance += amount;
    cout << " Deposit Successful. Current balance: " << balance << endl;
}

void BankAccount ::Withdraw(int amount)
{
    if (amount > balance)
    {
        cout << "insufficient balance" << endl;
    }
    else
    {
        balance -= amount;
        cout << " withdraw successsful. current balance: " << balance << endl;
    }
}

int BankAccount ::getBalance()
{
    return balance;
}

int main()
{
    BankAccount BA;
    string Job;
    int amount;
    cout << " Enter Deposit or Withdraw" << endl;
    cin >> Job;

    if (Job == "Deposit")
    {
        cout << "enter amount to deposite: ";
        cin >> amount;
        BA.Deposit(amount);
    }
    else if (Job == "Withdraw")
    {
        cout << "enter the amount to withdraw: " << endl;
        cin >> amount;
        BA.Withdraw(amount);
    }
    else
    {
        cout << " wrong input" << endl;
    }
    return 0;
}
