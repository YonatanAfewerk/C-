#include<iostream>
#include<vector>
#include<iomanip>
#include <string>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void stu_report_card(string name, double grade, double id, string email)
{
   cout << "Report card" << endl;
   cout << "======================================================" << endl;
   cout << "Full Name: " << name << endl;
   cout << "Grade|CGPA|: " << grade << endl;
   cout << "Id Number: " << id << endl;
   cout << "Email: " << email << endl;
   
}

void get_info()
{

}

void login_stu()
{
   cout << "Not ready yet!";
}

void signup_stu()
{
   cout << "Not ready yet!";
}

int main()
{
   string name, email;
   double grade, id;

   cout << "HARAMAYA UNIVERSTY"<< endl;
   cout <<"STUDENT GRADE MANAGEMENT"<< endl;
   cout << "======================================================";


   cout << endl;
   cout << endl;

   cout << "Name: ";
   getline(cin , name);
   cout << "Email: ";
   getline(cin , email);
   cout << "CGPA: ";
   cin >> grade;
   cout << "Id number: ";
   cin >> id;
   


   int  a;
   cout << "Menu:" << endl;
   cout << "|1| login: \n";
   cout << "|2| sign up: \n";
   cout << "|3| Report card: \n";
   cin >> a;
   
   cout << " " << endl;
   cout << "======================================================" << endl;
   cout << "======================================================"<< endl;


   switch(a)
   {
      case 1:
            login_stu();
            break;
      case 2:
            signup_stu();
            break;
      case 3:
            stu_report_card(name, grade, id, email);
            break;
      default:
            cout << "Unknown card";

   }


  
   return 0; 
}

