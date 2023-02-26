#include <iostream>
#include <string> // we have to Include the string library
using namespace std;
int main()
{
    string hmm = "hello world";

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName; //String Concatenation-->The + operator can be used between strings to add them together to make a new string.

    string fathername = "kishor";
    string mothername = "anita";
    string fmname = fathername.append(mothername); //Append--> You can also concatenate strings with the append() function

    // It is up to you whether you want to use + or append(). The major difference between the two, is that the append() function is much faster. However, for testing and such, it might be easier to just use +.

    string x = "10";
    string y = "20";
    string z = x + y; // output will be concatenate (1020) it will not added

    // int num=20;
    // string sum=x+num; // it will throw an error bcz int and string can be added.


    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string myString = "Hello";
    myString[0] = 'J'; //To change the value of a specific character in a string, refer to the index number, and use in single quotes
    

    cout << hmm << endl;
    cout << fullName << endl;
    cout << fmname << endl;
    cout << z << endl;

    cout << "The length of the txt string is: " << txt.length() << endl; //To get the length of a string we use the length() function
    cout << "The length of the txt string is: " << txt.size() << endl;   // size() function to get the length of a string
    //its up to us what we want to use to get length of string.

    cout << hmm[0]; //we can access the characters in a string by referring to its index number inside square brackets [].
    cout << myString; //it will jello instead of hello.
    return 0;
}
