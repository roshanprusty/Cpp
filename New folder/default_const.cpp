#include <iostream>
using namespace std;
int sbi(int money, float i = 4.10)

{
    float total = money * (i / 100);
    return money + total;
}
int hdfc(int money, float i = 4.10)
{
    float total = money * (i / 100);
    return money + total;
}
int main()
{
    const int a = 55; // this  value cannot be changed from now this const tag mainly used in pointer
    int monthly;
    cout << "enter your monthly income" << endl;
    cin >> monthly;
    cout << "if you deposit in sbi bank after 1 month the money will become " << sbi(monthly) << "" << endl;
    //by default you can keep or else you can pass value as done in next step
    //if you want give default value then first write those value which you want pass --->than default value
    cout << "if you deposit in hdfc bank after 1 month the money will become " << hdfc(monthly, 6.21) << "" << endl;

    return 0;
}