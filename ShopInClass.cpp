#include <iostream>
using namespace std;

class Shop
{
    int itemId[10];
    int itemPrice[10];
    int counter;

public:
    void initCounter() { counter = 0; }

    void setPrice()
    {
        cout << "enter id of your item:" << counter + 1 << endl;
        cin >> itemId[counter];
        cout << "enter Price of your item:" << endl;
        cin >> itemPrice[counter];
        counter++;
    }

    void displayPrice()
    {
        for (int i = 0; i < counter; i++)
        {
            cout << "the price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
        }
    }
};

int main()
{
    Shop dokan;
    dokan.initCounter();
    for (int i = 0; i < 2; i++)
    {
        dokan.setPrice();
    }
    dokan.displayPrice();
    return 0;
}