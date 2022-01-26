#include<iostream> //input and output
#include<vector> 
#include<iomanip> //this sets the width setw()
#include<string> //string manipulation 
#include<bits/stdc++.h>
#include<cmath>
#include<fstream>  //file manipulation
#include<string> // Needed to use strings
#include<cstdlib> // Needed to use random numbers
#include<ctime>

using namespace std;


int main()
{
    /*  Given an integer x, return true if x is palindrome integer.
        An integer is a palindrome when it reads the same backward as forward.
        For example, 121 is a palindrome while 123 is not. 
        Example 2:

    Input: x = -121
    Output: false
    Explanation: From left to right, it reads -121. From right to left, it becomes 121-. 
    Therefore it is not a palindrome.*/
    long int num, last_d, rev;
    cout << "Enter: ";
    cin >> num; // 121
    int safe = num;

    while(num != 0)
    {
        rev *= 10; // rev = 120
        last_d = num % 10; // last_d = 1
        rev += last_d; // rev = 120 + 2 -> 121
        num /= 10; // num = 1
    }
    if(safe == rev)
    {
        cout << "true" << endl;
    }else
    {
        cout << "false" << endl;
    }
        cout << safe << endl;
        cout << rev;
    // system("pause >0");
    return 0;
}