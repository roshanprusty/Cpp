// there are two types of header file
// 1.sytem header file ------ it comes with the compiler
#include<iostream>
// 2.user defined header file ----- it is written by the programmer
// #include<this.h>-------this will produce error if it is not present in current directory file
// if you want ---- than make a file by keeping the name this.h
using namespace std;
int main()
{
    cout<<"hello world";
    return 0;
}