#include <iostream>
using namespace std;
int fibonacci(int f2)
{
    if(f2<2)
    return 1;
    return fibonacci(f2-2)+fibonacci(f2-1);
}
//1--> 0+1=1
//2--> 1+1=2
//3--> 1+2=3
//4--> 2+3=5

int factorial(int f)
{
    if (f <= 1)
        return 1;
    return f * factorial(f - 1);
}

// step by step of factorial of given number (as a e.g we are taking=4) 
// factorial(4)=4*factorial(3);
// factorial(4)=4*3*factorial(2);
// factorial(4)=4*3*2*factorial(1);
// factorial(4)=4*3*2*1;
// factorial(4)=24

int main()
{
    int fact,fab;
    //n!=n*n(n-1)
    cout << "for which number you want factorial" << endl;
    cin >> fact;
    cout<<"enter the number for fibonacci series"<<endl;
    cin >> fab;
    cout << "the factorial of given number " << fact << " is : " << factorial(fact) << ""<<endl;
    cout<<"the term in fibonacci sequence at postion "<<fab<<" is "<<fibonacci(fab)<<"";
    return 0;
}