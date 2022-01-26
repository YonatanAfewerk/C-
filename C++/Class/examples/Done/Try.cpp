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
    int x , y ,z;

    x = 10;
    y = 10;
    z = 10;

    if (x > y && x > z)
        cout << "Greatest number is x = " << x << endl;
    else if (y > x && y > z)
        cout << "Greatest number is y = " << y << endl;
    else if (z > x && z > y)
        cout << "Greatest number is z = " << z << endl;
    else
        cout << "There Equal -> " << x << " = " << y << " = "<< z << endl;

    // system("pause >0");
    return 0;
}
    