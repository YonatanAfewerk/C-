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
    /*  Input: nums = [2,7,11,15], target = 9
        Output: [0,1]
        Output: Because nums[0] + nums[1] == 9, we return [0, 1]. */

    int num[4], last_d = 0, index = 0, find, sum;
    cout << "Input Numbers: " << endl;
    for(int i = 0; i < 4; i++)
    {
        cin >> num[i];
    }  
    cout << "Target: ";
    cin >> find;

    for(int j = 0; j < 4; j++)
    {
        sum = find - num[j];
        for(int k = 0; k < 4; k++)
        {
            if(sum == num[k] && j != k) 
            {
                cout << "[" << j << ", "<< k << "]";
                return 0;
            }
        }
    }

    

    /* while(num != 0)
    {
        last_d = num % 10;
        num /= 10;
        if(last_d == find)
        {
            cout << "Index: " << index;
        }
        index++;
    } */

    // system("pause >0");
    return 0;
}