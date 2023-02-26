#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name="beau-ti-ful";
    int count = 0;
   // cout << "enter your name" << endl;
   // cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        if (name.at(i) == '-')
        {
            count++;
        }
    }
    cout << "the number of syllables in given name is " << count;

    return 0;
}
// int numberSyllables(std::string word) {
// 	int ans = 1;
// 	for (int i = 0; i < word.length(); i++)
// 	{
// 		if (word[i] == '-')
// 			ans++;
// 	}
// 	return ans;
// }