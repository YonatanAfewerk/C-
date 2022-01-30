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
    // Write a program that calculates the grade of a student

    // Declare variables
    float mid_grade, final_grade, ass_grade, t_g;
    string full_name, course_name, id_num, Final_grade, comment;
    int check;
    char cheack_torepeat;

    //welcome and rule
    cout << "=========================================================================\n ";
    cout << "                            Grade Report                                 \n ";
    cout << " Make Sure to Answer every Question properly. NB-> specially Your Marks   \n ";
    cout << "               -> No over the limit and negative numbers                 \n ";
    cout << "=========================================================================\n ";

    cout << endl;
    // Get Info from user
    cout << "Enter Full Name:  ";
    getline(cin, full_name);
    cout << "Enter Your ID Number:  ";
    cin >> id_num;


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

        // Decision for switch cases to be check against
        if(t_g >= 91 && t_g <= 100)
            check = 1;
        else if(t_g >= 84 && t_g <= 90)
            check = 2;
        else if(t_g >= 80 && t_g <= 83)
            check = 3;
        else if(t_g >= 76 && t_g <= 79)
            check = 4;
        else if(t_g >= 68 && t_g <= 75)
            check = 5;
        else if(t_g >= 65 && t_g <= 67)
            check = 6;
        else if(t_g >= 60 && t_g <= 64)
            check = 7;
        else if(t_g >= 50 && t_g <= 59)
            check = 8;
        else if(t_g >= 45 && t_g <= 49)
            check = 9;
        else if(t_g >= 40 && t_g <= 44)
            check = 10;
        else if(t_g >= 35 && t_g <= 39)
            check = 11;
        else if(t_g >= 0 && t_g <= 34)
            check = 12;
        else
            cout << "No Grade! Check With your Instructor. " <<endl;


        // Assigning the correct letter grade to the Final Mark of the user using switch statements
        switch(check)
        {
            case 1:
                    Final_grade = " A+";
                    comment = "Excellent ";
                    break;
            case 2:
                    Final_grade = " A";
                    comment = "Excellent ";
                    break;
            case 3:
                    Final_grade = " A-";
                    comment = "Excellent ";
                    break;
            case 4:
                    Final_grade = " B+";
                    comment = "Very Good ";
                    break;
            case 5:
                    Final_grade = " B";
                    comment = "Good ";
                    break;
            case 6:
                    Final_grade = " B-";
                    comment = "Good ";
                    break;
            case 7:
                    Final_grade = " C+";
                    comment = "Satisfactory ";
                    break;
            case 8:
                    Final_grade = " C";
                    comment = "Satisfactory ";
                    break;
            case 9:
                    Final_grade = " C-";
                    comment = "unSatisfactory ";
                    break;
            case 10:
                    Final_grade = " D";
                    comment = "poor. Taking the course again is Recommended!";
                    break;
            case 11:
                    Final_grade = " F";
                    comment = "Very Poor. Taking the course again is Mandatory!";
                    break;
            case 12:
                    Final_grade = " No Grade";
                    comment = "You have Dropped the course Taking it again is Mandatory!";
                    break;
            default:
                    cout << "Error! Try Again." << endl;
                    break;

        }


    // Get the Info out to the user
    cout << "=======================================================================\n ";
    cout << "                       Final Grade Report                              \n ";

    cout << endl;
    cout << "Full Name: " << full_name << endl;
    cout << "Id Number: " << id_num << endl;
    cout << "Course Name: " << course_name << endl;
    cout << "Mid Mark(30): " << mid_grade << endl;
    cout << "Assignment Mark(20): " << ass_grade << endl;
    cout << "Final Mark(50): " << final_grade << endl;
    cout << "Final Mark(100): " << t_g << endl;
    cout << endl;
    cout << "=======================================================================\n ";
    cout << "Final Grade:       -> " << Final_grade << endl;
    cout << "Comment            -> " << comment << endl;
    cout << "=======================================================================\n ";
    
    cout << endl;
    cout << "=======================================================================\n ";
    cout << "To Check for Your Other course Enter 'Y' For YES and 'N' For NO " << endl;
    cin >> cheack_torepeat;
    cout << "=======================================================================\n";


    } while(cheack_torepeat == 'Y');
  

    // system("pause >0");
    return 0;
}
