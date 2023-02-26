#include <iostream>
using namespace std;
int main()
{
//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
// To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
    string cars[4];
    string cars2[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};

    cars2[0] = "Opel";  //by this way we can change specific element by giving the index number
    cout << cars2[0];


    return 0;
}