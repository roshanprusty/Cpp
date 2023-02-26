#include <iostream>
using namespace std;
int main()
{
    string cars[] = {"Volvo", "BMW", "Ford"}; // size of array is always 3
    string cars2[] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int j = 0; j <= 4; j++)
    {
        cout << cars2[j] << endl;
    }
    cars[3] = "mahindra"; //you can add like this by reffering the index
    cars[4] = "tata";
    for (int j = 0; j <= 4; j++)
    {
        cout << cars[j] << endl;
    }

    return 0;
}