// Given an array nums of integers, return how many of them contain an even number of digits.
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// this que we can do in two way -
//1. converting int into string then count no of digits
//2. normal way --- by dividing the number by 10  till the num is less than 0


#include <iostream>
using namespace std;

int fun(int num)
{
	int count = 0;
	if (num < 0)
	{
		num = -1 * num;
	}
	if (num == 0)
	{
		count = 1;
	}
	while (num > 0)
	{
		count++;
		num = num / 10;
	}
	return count;
}
int main()
{
	int arr[] = {12, 345, 2, 6, 7896};
	int count = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		// count = 0;
		int check = fun(arr[i]);
		if (check % 2 == 0)
		{
			cout << "" << arr[i] << " contains " << check << " digits (even number of digits). \n";
			count++;
		}
		else
		{
			cout << "" << arr[i] << " contains " << check << " digits (odd number of digits). \n";
		}
	}
	cout <<"total no of even digits in given array : "<<count;

	return 0;
}