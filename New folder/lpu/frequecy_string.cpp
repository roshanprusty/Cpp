#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char str[25];
    char freq;
    int k = 0;

    cout << "enter your name\n";
    gets(str);
    cout << "enter the character to check\n";
    cin >> freq;

    for (int i = 0; i < 25; i++)
    {
        if (freq == str[i])
        {
        k++;
        }
    }
    if(k>1)
    {
        cout<<"the given character is present"<<endl;
        cout<<"the given chracter is present "<<k<<" times";

    }
    else{
        cout<<"the given character is not present";
    }


    return 0;
}