// 2. Write a program in C++ to open and read the contents of the Text1.txt using the file stream class.
// Close the file and again open to update the contents of given file Text1.txt.
// Text1.txt : I am enjoying learning OOPS concepts
// After update
// Text1.txt: I am enjoying learning OOPS concepts
//  Now learnt C++; Java is my next target
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ofstream myfile;
//     myfile.open("Text1.txt");
//     myfile << "Now learnt C++; Java is my next target.\n";
//     myfile.close();
//     return 0;
// }
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string line;
    ifstream myfile("Text1.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";

    string filename("Text1.txt");
    ofstream file_out;

    file_out.open(filename, std::ios_base::app);
    file_out << "Now learnt C++; Java is my next target." << endl;
    return EXIT_SUCCESS;
}