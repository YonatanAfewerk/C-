#include<iostream> //input and output
#include<vector> 
#include<iomanip> //this sets the width eg.setw(3)
#include<string> //string manipulation 
#include<bits/stdc++.h>
#include<cmath>
#include<fstream>  //file manipulation
#include<string> // Needed to use strings
#include<cstdlib> // Needed to use random numbers
#include<ctime> //to use the random number generator rnad(time())
#include<list> //lets you include string list store {"one","two","three"}

using namespace std;

int main()
{
    int h = 9;

    for (int i = h; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << setw(1) << j;
        } cout << endl;
    }

    // system("pause >0");
    return 0;
}
    