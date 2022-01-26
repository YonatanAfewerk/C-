#include<iostream> //input and output
#include<vector> 
#include<iomanip>
#include<string> //string manipulation 
#include<bits/stdc++.h>
#include<cmath>
#include<fstream>  //file manipulation
#include<string> // Needed to use strings
#include<cstdlib> // Needed to use random numbers
#include<ctime>

using namespace std;

void welcome();


void bmiinfo();

int main()
{
    welcome();//Welcome the user 

    //chose the type
    int x;
    cout << "Welcome to the BMI calculator: \n (1) Standard \n (2) Metric \n input: ";
    cin >> x;

    double height, weight;
    double bmi;
    if (x == 2)
    {
        cout << "=============================   Metric   =================================  \n";
        cout << "Your Height(meters): ";
        cin >> height;
        cout << "Your Weight(Killograms): ";
        cin >> weight;
        bmi = weight / (height * height);
    }else if(x == 1)
    {
        cout << "=============================   Standard   =================================  \n";
        cout << "Your Height(inches): ";
        cin >> height;
        cout << "Your Weight(pounds): ";
        cin >> weight;
        double h;
        h = height * height;
        bmi =  (weight / h) * 703;
    } 
    


    system("cls");
    cout << "========================================================================== \n";
    cout << "========================================================================== \n";
    cout << "Your result is BMI: "<< bmi << endl;

    //info
    bmiinfo();

  

   
    // system("pause >0");
    return 0;
}

void welcome()
{

    cout << "========================================================================== \n";
    cout << "==============================   BMI   =================================== \n";
    cout << "============================= calculator ================================= \n";
    
}



void bmiinfo()
{
    cout << endl;
    cout << endl;

    cout << "           BMI INFO: \n";
    cout << "BMI                    Category" << endl;
    cout << "<16.0                 Severely Underweight" << endl;
    cout << "16.0 - 18.4            Underweight" << endl;
    cout << "18.5 - 24.9            Normal" << endl;
    cout << "25.0 - 29.9            Overweight" << endl;
    cout << "30.0 - 34.9            Moderately Obese" << endl;
    cout << "35.0 - 39.9            Severly Obese" << endl;
    cout << ">40.0                  Morbidly Obese" << endl;

}

