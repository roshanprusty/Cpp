#include <iostream>
using namespace std;
class kia
{
    int price;
    string color;
    int model;

public:
    // Default Constructor
    kia()
    {
        price = 800000;
        color = "red";
    }
    void display_data()
    {
        cout << "price = " << price << "";
        cout << "color = " << color << "";
        cout << "model no = " << model << "";
    }
};
kia::kia()
{
    model = 24;
}
int main()
{
    kia k;
    k.display_data();

    return 0;
}