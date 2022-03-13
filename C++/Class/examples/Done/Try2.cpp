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

// structure form defining 
struct student
{
    string name;
    string department;
    int id;
    int age;
};

int main()
{ 
    student stu1 = {"Yonatan Afewerk", "Software engineering", 917, 22};

    cout << "Name: " << stu1.name << endl;
    cout << "Deparment: " << stu1.department << endl;
    cout << "Id: " << stu1.id << endl;
    cout << "Age: " << stu1.age << endl;

    //system("pause > 0");
    return 0;  
}