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
    int x, y;

    cout << "weather 2nd number is multiple of the 1st one or not: \n";
    cout << "========================================================= \n";

    cout << "Second number: ";
    cin >> x; // eg. x = 5
    cout << "First number: ";
    cin >> y; // eg. y = 15

    int k;
    k = x % y;

    if(k == 0)
    {
        cout << x << " Is a Multiple of "<< y << endl;
    }else
    {
        cout << "Not a Multiple" << endl;
    }

    // system("pause >0");
    return 0;
}

