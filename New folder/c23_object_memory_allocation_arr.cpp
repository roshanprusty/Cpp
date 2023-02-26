#include <iostream>
using namespace std;
class shop
{
    int item_id[100];
    int item_price[100];
    int tp;

public:
   
    void setprice();
    void displayprice();
};

void shop::setprice()
{
    for (int i = 0; i <5 ; i++)
    {
        cout << "enter the item id of your item no" << i + 1 << endl;
        cin >> item_id[i];
        cout << "enter the price of the " << item_id[i] << "" << endl;
        cin >> item_price[i];
        // counter++;
    }
}
void shop::displayprice()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "the price of " << item_id[i] << " is " << item_price[i] << " " << endl;
    }
}
int main()
{
    shop s;
    s.setprice();
    s.displayprice();

    return 0;
}