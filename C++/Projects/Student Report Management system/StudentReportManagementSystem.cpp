#include<iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;



    //Global variable's
   string Final_grade, comment, name, course_name;
   char id[20], email[100];
   string id2[20], name2[5], last_name[5];
   double grade, t_g;
   int  a, i, j;
   fstream login_file;
   int mid_grade, ass_grade, final_grade;
   char check_torepeat, check_torepeat2, check_tosave, checkstu;
   char A, M, I, F, P;



   // Declaration of function
   void stu_report_card(string name, double grade, char id[20], string email, string course_name, int mid_grade, int final_grade, int ass_grade, double t_g, string Final_grade, string comment);
   void get_info();
   void save_stu();
   void read_stu();
   void welcome();
   void menu();
   void calculation();
   void termiiigetino();
   void termiiiread();



   // term-iii grades student construct
    struct termiii
    {
        char anthropology;
        char moral;
        char inclusive;
        char fund;
        char prog;
    }studentone[5];



// Main Function
int main()
{
   // Welcome
   welcome();

   cout << endl;

   // Get information
   get_info();

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
            case 5:
                    termiiigetino();
                    break;
            case 6:
                    termiiiread();
                    break;
            default:
                  cout << "Unknown card";
         }

         cout << "\n";
         cout << "=======================================================================\n\n";
         cout << "To get back to the Menu Enter 'Y' For YES and 'Other key' For NO " << endl;
         cin >> check_torepeat2;

      } while(check_torepeat2 == 'Y');

      cout << "Thank You For using our simple Program. \n";

   return 0;
}




// Defining Function

// Welcome function (Function 1)
void welcome()
{
   cout << "                         HARAMAYA UNIVERSTY"<< endl;
   cout << "                      STUDENT GRADE MANAGEMENT"<< endl;
   cout << "======================================================================= \n";
}


// Menu (Function 2)
void menu()
{
      cout << "                  |Menu:| \n";
      cout << "----------------------------------------------------------------------- \n";
      cout << "                  |1| Single course Calculation: \n";
      cout << "                  |2| To Save: \n";
      cout << "                  |3| To Read Full Document: \n";
      cout << "                  |4| Single Report card: \n";
      cout << "                  |5| Term-iii grade: \n";
      cout << "                  |6| Read Term-iii grade: \n";
      cout << "----------------------------------------------------------------------- \n";

      cout << "                  |Enter| : ";
      cin >> a;
      cout << "\n\n";
}


// Get information from user (Function 3)
void get_info()
{
    cout << "Name: ";
    getline(cin, name);
    cout << "Email: ";
    cin >> email;
    cout << "CGPA: ";
    cin >> grade;
    cout << "Id number: ";
    cin >> id;
}


// save function (Function 4)
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
      document_file << "======================================================================= \n";
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
      document_file << "======================================================================= \n";
      document_file << "Final Grade:       -> " << Final_grade << endl;
      document_file << "Comment            -> " << comment << endl;
      document_file << "======================================================================= \n";
      document_file.close();
      }
   }else
   {
      cout << "Not signed up! " << endl;
   }
}



// read full Document function (Function 5)
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



// read from the term-iii three document (Function 6)
void termiiiread()
{
    cout << "Read from the Structure \n";

 document_file.open("studentTermiii.txt", ios::in);

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



// Single Report card function (Function 7)
void stu_report_card(string name, double grade, char id[20], string email, string course_name, int mid_grade, int final_grade, int ass_grade, double t_g, string Final_grade, string comment)
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
   cout << "------------------------------------------------------------------------ \n";
   cout << "Final Grade:       -> " << Final_grade << endl;
   cout << "Comment            -> " << comment << endl;
   cout << "------------------------------------------------------------------------ \n";

}



// calculate you grade based on the term (Function 8)
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
         document_file << "------------------------------------------------------------------------\n";
         document_file << "Final Grade:       -> " << Final_grade << endl;
         document_file << "Comment            -> " << comment << endl;
         document_file << "------------------------------------------------------------------------\n";

         }
    }else
    {
       cout << "Not saved! " << endl;
    }

    cout << "To Check for Your Other course Enter 'Y' For YES and 'Other key' For NO " << endl;
    cin >> check_torepeat;
    } while(check_torepeat == 'Y');

}




// Term iii grade report (Function 9)
void termiiigetino()
{

    for(i = 1; i < 5; i++)
    {
        cout << "First Name: ";
        cin >> name2[i];
        cout << "Second Name: ";
        cin >> last_name[i];
        cout << "Enter id: ";
        cin >> id2[i];
        cout << "|Use Capital Letters| " << endl;
        cout << "---------------------------------------------------------------------- \n";

        cout << "Social Anthropology:  ";
        cin >> A;
        cout << "Moral and Civic Education:  ";
        cin >> M;
        cout << "Inclusive education:  ";
        cin >> I;
        cout << "Fundamental of Software Engineering:  ";
        cin >> F;
        cout << "Computer Programming:  ";
         cin >> P;
        studentone[i] = {A, M, I, F, P};

        cout << "Do you want to enter another student term-iii grade.(Y-yes)(N-no) \n";
        cin >> checkstu;

        if(checkstu == 'N' || checkstu == 'n')
        {
             goto done;
        }

    }

    done:
    cout << "\n\n";


 document_file.open("studentTermiii.txt", ios::out | ios::app);
    char check;
    cout << "Do you want to save?(Y-yes)(N-no) : ";
    cin >> check;

    if(check == 'Y' || check == 'y')
    {
        if(login_file.is_open())
        {
         document_file << "\n\n";
         document_file << "                        Term-iii Report card " << endl;
         document_file << "---------------------------------------------------------------------- \n";

                for(j = 1; j <= i; j++)
                {
                 document_file << "Full Name : " << name2[j] << " " << last_name[j] << endl;
                 document_file << "id: " << id2[j] << endl;

                 document_file << "Social Anthropology: " << studentone[j].anthropology << endl;
                 document_file << "Moral and Civic Education: " << studentone[j].moral << endl;
                 document_file << "Inclusive education:: " << studentone[j].inclusive << endl;
                 document_file << "Fundamental of Software Engineering: " << studentone[j].fund << endl;
                 document_file << "Computer Programming: " << studentone[j].prog << endl;
                 document_file << endl;
                 document_file << "---------------------------------------------------------------------- \n";
                }

         document_file.close();
        }
    }else
    {
        cout << "Not saved! " << endl;
    }
}

