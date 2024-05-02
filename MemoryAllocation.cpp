#include <iostream>
using namespace std;

class Shop
{
private:
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void);
    void setPrice(void);
    void getPrice(void); // display price
};

void Shop ::setPrice(void)
{
    cout << " enter the product id: " << endl;
    cin >> itemID[counter];
    cout << "enter the MRP of product: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::getPrice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << " MRP of Product id " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

void Shop :: initCounter(void)
{
    counter = 0;
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.getPrice();

    return 0;
}