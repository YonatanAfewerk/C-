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

struct address 
{
    int kebele;
    char kefle_ketema[10];
    char road_name[10];
};


struct student
{
    int age;
    string name;
    float grade;
    //using a struct in another struct as a data type;
    address stu_address;

} a[10];


int main()
{
    student stu1;

    cout << "Enter Your Information: " << endl;
        cout << "Student Name: ";
        cin >> stu1.name;
        cout << "Student Age: ";
        cin >> stu1.age;
        cout << "Student Grade: ";
        cin >> stu1.grade;
        cout << "Kebele: ";
        cin >> stu1.stu_address.kebele;
        cout << "Kefele ketama: ";
        cin >> stu1.stu_address.kefle_ketema;

        cout << endl;
 

    cout << stu1.stu_address.kebele;
    cout << stu1.stu_address.kefle_ketema;
   

    cout << a[2].name;


    // system("pause > 0");
    return 0;  
}
