#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

//default parameter
void mycountry(string country="india")
{
    cout<<country<<endl;
}
int main()
{
    int num1 = 24;
    int num2 = 9;

    cout << sum(num1, num2)<<endl;

    mycountry("usa");
    mycountry("france");
    mycountry();

    return 0;
}