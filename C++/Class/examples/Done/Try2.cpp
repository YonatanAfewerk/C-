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

    //Global variables 
    string n;
    string d;
    int i;
    int a;
    float g;

struct student
{
    string name;
    string department;
    int id;
    int age;
    float grade;
}stu1={"Yonatan", "Software", 917, 22, 4.00};

int main()
{  
    cout << stu1.name << endl;
    cout << stu1.department << endl;
    cout << stu1.id << endl;
    cout << stu1.age << endl;
    cout << stu1.grade << endl;

    //system("pause > 0");
    return 0;  
}