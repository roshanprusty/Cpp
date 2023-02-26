// Richest Customer Wealth
// https://leetcode.com/problems/richest-customer-wealth/

#include <iostream>
using namespace std;

void max_wealth(int rows, int col,int arr[][2])
{
    int wealth = 0, prev_wealth = 0;
    for (int i = 0; i < rows; i++)
    {
        wealth = 0;
        for (int j = 0; j < col; j++)
        {
            wealth += arr[i][j];
        }
        if (wealth > prev_wealth)
        {
            prev_wealth = wealth;
        }
    }
    cout << prev_wealth;
}
int main()
{
    int arr[4][2] = {
        {3, 4},
        {9, 5},
        {7, 1},
        {2, 1}};
    int rows = sizeof(arr) / sizeof(arr[0]); // returns rows
    int col = sizeof(arr[0]) / sizeof(int);  // returns col
    max_wealth(rows,col,arr);
    return 0;
}