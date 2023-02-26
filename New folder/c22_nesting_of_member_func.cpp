#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read()
    {
        cout << "enter the binary number" << endl;
        cin >> s;
    }
    void check();
    void swap(void);
    void dispaly();
};
// void binary::read()
// {
//     cout << "enter the binary number" << endl;
//     cin >> s;
// }
void binary::check()
{
    for (int i = 0; i < s.length(); i++)
    //from s.length ---> we can know length of the string
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        // or you can do this way also--->if (s[i] != '0' && s[i] != '1')
        //can be used to extract characters by characters from a given string
        {
            cout << "incorrect binary format";
            exit(0); //Exit Success: Exit Success is indicated by exit(0) statement which means successful termination of the program, i.e. program has been executed without any error or interrupt.
        }
    }
    cout << "correct binary format" << endl;
}
void binary::swap()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}
void binary::dispaly()
{
    cout << "displaying binary number after modification" << endl;
    for (int i = 0; i < s.length(); i++)
    {

        cout << s[i];
    }
}
int main()
{
    binary b;
    b.read();
    b.check();
    b.swap();
    b.dispaly();

    return 0;
}