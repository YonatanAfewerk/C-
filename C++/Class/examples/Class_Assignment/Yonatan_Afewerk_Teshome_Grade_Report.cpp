#include<iostream> //input and output

using namespace std;

int main()
{
    //Declaration
    float mid_grade, final_grade, ass_grade, t_g;
    string course_name, full_name, id_num, Final_grade, comment;
    char check_torepeat;


    //welcome and rule
    cout << "=========================================================================\n";
    cout << "                              Grade Report                               \n";
    cout << " Make Sure to Answer every Question properly. NB-> specially Your Marks  \n";
    cout << "               -> No over the limit and negative numbers                 \n";
    cout << "=========================================================================\n";
    cout << "This is a simple Grade Report assignment for computer programming course \n";
    cout << "                   Yonatan Afewerk Teshome Id-> 917/13                   \n";
    cout << "=========================================================================\n";

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



    cout << "Course Name: " << course_name << endl;  
    cout<< "Total Mark: " << t_g <<endl;

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
    cout << "=======================================================================\n";
    cout << "Final Grade:       -> " << Final_grade << endl;
    cout << "Comment            -> " << comment << endl;
    cout << "=======================================================================\n";
    

    cout << "=======================================================================\n";
    cout << "To Check for Your Other course Enter 'Y' For YES and 'Other key' For NO " << endl;
    cin >> check_torepeat;
    cout << "=======================================================================\n";
    } while(check_torepeat == 'Y');
    
  
    // system("pause >0");
    return 0;
}
