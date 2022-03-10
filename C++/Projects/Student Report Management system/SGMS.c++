#include<iostream>
#include<vector>
#include<iomanip>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>

using namespace std;

   //Global variable's
   string name, email, course_name, Final_grade, comment;
   double grade, id, t_g;
   int  a;
   fstream login_file;
   int mid_grade, ass_grade, final_grade;
   char check_torepeat, check_torepeat2, check_tosave;

   // Declaration of function 
   void stu_report_card(string name, double grade, double id, string email, string course_name, int mid_grade, int final_grade, int ass_grade, double t_g, string Final_grade, string comment);
   void get_info();
   void save_stu();
   void read_stu();
   void welcome();
   void menu();
   void calculation();


// Main Function
int main()
{
   // Welcome 
   welcome();
   
   cout << endl;
   cout << endl;

   // Get information
   get_info();

   cout << endl;
   cout << endl;
   
      do
      {
         // Menu
         menu();

         switch(a)
         {
            case 1:
                  calculation();
                  break; 
            case 2:
                  save_stu();
                  break;
                  
            case 3:
                  read_stu();
                  break;
            case 4:
                  stu_report_card(name, grade, id, email,course_name, mid_grade,final_grade,ass_grade,t_g,Final_grade, comment);
                  break;
            default:
                  cout << "Unknown card";
         }

         cout << "\n\n";
         cout << "=======================================================================\n\n";
         cout << "To get back to the Menu Enter 'Y' For YES and 'Other key' For NO " << endl;
         cin >> check_torepeat2;
         cout << "=======================================================================\n";
     
      } while(check_torepeat2 == 'Y');
   
      cout << "Thank You For using our simple Program. \n";

   return 0; 
}

// Defining Funcation

// Welcome function (Function 1)
void welcome()
{
   cout << "               HARAMAYA UNIVERSTY"<< endl;
   cout << "            STUDENT GRADE MANAGEMENT"<< endl;
   cout << "======================================================";
}

// Menu (Funcation 2)
void menu()
{
      cout << "                     Menu: \n";
      cout << "======================================================" << endl;
      cout << "                  |1| Calculation: \n";
      cout << "                  |2| To Save: \n";
      cout << "                  |3| To Read Full Document: \n";
      cout << "                  |4| Single Report card: \n";
      cout << "                     Enter : ";
      cin >> a;
      
      
   
}

// Get information from user (Funcation 2)
void get_info()
{
   cout << "Name: ";
   getline(cin , name);
   cout << "Email: ";
   getline(cin , email);
   cout << "CGPA: ";
   cin >> grade;
   cout << "Id number: ";
   cin >> id;
}

// save function (Function 3)
void save_stu()
{
document_file.open("student.txt", ios::out | ios::app);
   char check;
   cout << "Do you want to sign up with your current information?(Y-yes)(N-no) : ";
   cin >> check;

   if(check == 'Y' || check == 'y')
   {
      if(login_file.is_open())
      {
      document_file << "\n\n";
      document_file << "                           Report card " << endl;
      document_file << "======================================================================="<< endl;
      document_file << "Full Name: " << name << endl;
      document_file << "Grade|CGPA|: " << grade << endl;
      document_file << "Id Number: " << id << endl;
      document_file << "Email: " << email << endl;
      document_file << "Course Name: " << course_name << endl;
      document_file << "Mid Mark(30): " << mid_grade << endl;
      document_file << "Assignment Mark(20): " << ass_grade << endl;
      document_file << "Final Mark(50): " << final_grade << endl;
      document_file << "Final Mark(100): " << t_g << endl;
      document_file << endl;
      document_file << "=======================================================================\n";
      document_file << "Final Grade:       -> " << Final_grade << endl;
      document_file << "Comment            -> " << comment << endl;
      document_file << "=======================================================================\n";
      document_file.close();
      }
   }else
   {
      cout << "Not signed up! " << endl;
   }
}

// read full Document function (Function 4)
void read_stu()
{
document_file.open("student.txt", ios::in);

    if(login_file.is_open())
    {
        string line;
        while (getline(login_file, line))
        {
            cout << line << endl;
        }
     document_file.close();
    }
}

// Single Report card function (Funcation 5)
void stu_report_card(string name, double grade, double id, string email, string course_name, int mid_grade, int final_grade, int ass_grade, double t_g, string Final_grade, string comment)
{
   cout << "                           Report card" << endl;
   cout << "=======================================================================\n";
   cout << "Full Name: " << name << endl;
   cout << "Grade|CGPA|: " << grade << endl;
   cout << "Id Number: " << id << endl;
   cout << "Email: " << email << endl;
   cout << "Course Name: " << course_name << endl;
   cout << "Mid Mark(30): " << mid_grade << endl;
   cout << "Assignment Mark(20): " << ass_grade << endl;
   cout << "Final Mark(50): " << final_grade << endl;
   cout << "Final Mark(100): " << t_g << endl;
   cout << endl;
   cout << "=======================================================================\n";
   cout << "Final Grade:       -> " << Final_grade << endl;
   cout << "Comment            -> " << comment << endl;
   cout << "=======================================================================\n";
   
}

// calculate you grade based on the term 
void calculation()
{
   // To Enable the Program to compute other course grades use do-while loop
    do
    {
        cout << "Enter Course Name: ";
        cin >> course_name;


        // Get grade inputs with limited privileges

        // Mid
        do
        {
            cout << "Enter Mid Mark(30): ";
            cin >> mid_grade;
        } while(mid_grade <= 0 || mid_grade >= 31);

        // Assignment
         do
        {
            cout << "Enter Assignment Mark(20): ";
            cin >> ass_grade;
        } while(ass_grade <= 0 || ass_grade >= 21);

        // Final
         do
        {
            cout << "Enter Final Mark(50): ";
            cin >> final_grade;
        } while(final_grade <= 0 || final_grade >= 51);

    // Get the computations for the Total Grade
        t_g = mid_grade + ass_grade + final_grade;

    //For A 
    switch (t_g >= 90 && t_g < 100)
    {
        
            case 1:
                Final_grade = " A";
                comment = "Excellent ";
                break;
            case 0:
            //For B
                switch(t_g >= 80 && t_g < 90)
                {
                        case 1:
                            Final_grade = " B";
                            comment = "Good ";
                            break;
                        case 0:
                            //For C
                            switch(t_g >= 70 && t_g < 80)
                            {
                                    case 1:
                                        cout<<"your grade is C";
                                        comment = "Satisfactory ";
                                        break;
                                    case 0:
                                        //For D
                                        switch (t_g >= 60 && t_g < 70)
                                        {
                                                case 1:
                                                    Final_grade = " D";
                                                    comment = "poor. Taking the course again is Recommended!";
                                                    break;
                                                case 0:
                                                    //For F
                                                    switch (t_g >= 50 && t_g < 60)
                                                    {
                                                            case 1:
                                                                Final_grade = " F";
                                                                comment = "Very Poor. Taking the course again is Mandatory!";
                                                                break;
                                                            case 0:
                                                                Final_grade = " No Grade";
                                                                comment = "You have Dropped the course Taking it again is Mandatory!";
                                                                break;
                                                    }
                                                    break;
                                        }
                                        break;
                            }
                            break;
                }
                break;
    }
    cout << "=======================================================================\n";
    cout << "To Save This Grade 'Y' to delete 'N' " << endl;
    cin >> check_tosave;

    if (check_tosave == 'Y')
    {
     document_file.open("student.txt", ios::out | ios::app);
         if(login_file.is_open())
         {
         document_file << "                           Report card " << endl;
         document_file << "=======================================================================" << endl;
         document_file << "Full Name: " << name << endl;
         document_file << "Grade|CGPA|: " << grade << endl;
         document_file << "Id Number: " << id << endl;
         document_file << "Email: " << email << endl;
         document_file << "Course Name: " << course_name << endl;
         document_file << "Mid Mark(30): " << mid_grade << endl;
         document_file << "Assignment Mark(20): " << ass_grade << endl;
         document_file << "Final Mark(50): " << final_grade << endl;
         document_file << "Final Mark(100): " << t_g << endl;
         document_file << endl;
         document_file << "=======================================================================\n";
         document_file << "Final Grade:       -> " << Final_grade << endl;
         document_file << "Comment            -> " << comment << endl;
         document_file << "=======================================================================\n";
      
         }
    }else
    {
       cout << "Not saved! " << endl;
    }

    cout << "To Check for Your Other course Enter 'Y' For YES and 'Other key' For NO " << endl;
    cin >> check_torepeat;
    cout << "=======================================================================\n";
    } while(check_torepeat == 'Y');
    
}
