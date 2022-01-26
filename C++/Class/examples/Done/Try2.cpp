#include<iostream> //input and output
#include<vector>
#include<iomanip>
#include<string> //string manipulation 
#include<bits/stdc++.h>
#include<cmath>
/* fstream header file for ifstream, ofstream,
fstream classes */
#include <fstream> 
#include<string> // Needed to use strings
#include<cstdlib> // Needed to use random numbers
#include<ctime>

using namespace std;

float line(float x, float m, float b)
{
    int y;

    y = (m * x) + b;

    cout << y << " = " << m << "x" << x << " + " << b << endl;
    cout << "Line: " << y;

    return y;
}

int main()
{   
    int x_inter, slope, y_inter;
    //  x       m       b

    cout << "Enter The x , y-intercept and slope to find the line of a function" << endl;
    cout << "y-intercept: ";
    cin >> y_inter;
    cout << "x-coordinate: ";
    cin >> x_inter;
    cout << "Slope: ";
    cin >> slope;

    line(x_inter, slope, y_inter);


    //system("pause > 0");
    return 0;  
}