#include <iostream>
using namespace std;
int main()
{
    int a, i;
    for (i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout<<i<<endl;
    }
    
    cout<<endl<<"*************************************************************"<<endl;
    
    for(i=0;i<10;i++)
    {
        if(i == 5)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}