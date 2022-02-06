#include<iostream> //input and output

using namespace std;

//The Function Declaration's 
void Welcome();
void rule();
float addition(float x, float y);
float substraction(float x, float y);
float multiplication(float x, float y);
float division(float x, float y);
int modulu_s(float x, float y);


// The main Function 
int main()
{
    //Declaration
    float Number_1, Number_2;
    char Operation, Check;

    //Welcome and rule
    Welcome();
    rule();

    do
    {
         // Choosing 
        cout << "Enter First Number: ";
        cin >> Number_1;

        cout << "Enter Operation: ";
        cin >> Operation;

        cout << "Enter Second Number: ";
        cin >> Number_2;
        

        cout << "\n\n";
        
        // Options  
        switch (Operation)
        {
            case '+':
                    addition(Number_1, Number_2);
                    break;
            case '-':
                    substraction(Number_1, Number_2);
                    break;
            case '*':
                    multiplication(Number_1, Number_2);
                    break;
            case '/':
                    division(Number_1, Number_2);
                    break;
            case '%':
                    modulu_s(Number_1, Number_2);
                    break;

    }

    cout << "To Calculate again Enter 'Y' For YES and 'Other key' For NO " << endl;
    cin >> Check;
    cout << "=========================================================================\n";

    
    }while(Check == 'Y');

    
 
  
    return 0;
}


//Defining the function's
void Welcome()
{
    cout << "=========================================================================\n";
    cout << "                               Calculator                                \n";
    cout << "=========================================================================\n";
    cout << " This is a simple calculator assignment for computer programming course  \n";
    cout << "                   Yonatan Afewerk Teshome Id-> 917/13                   \n";
    cout << "=========================================================================\n";
}


//rule
void rule()
{
    cout << "Addition           -> (+) " << endl;
    cout << "Substraction       -> (-) " << endl;
    cout << "Multiplication     -> (*) " << endl;
    cout << "Division           -> (/) " << endl;
    cout << "Modulus            -> (%) " << endl;
    cout << "\n\n";
}


//Calculator Functionalits 
float addition(float x, float y)
{
    float z = x + y;
    cout << "=========================================================================\n";
    cout << "Result: " << z << endl;
    cout << "=========================================================================\n";
    return z;
}

float substraction(float x, float y)
{
    float z = x - y;
    cout << "=========================================================================\n";
    cout << "Result: " << z << endl;
    cout << "=========================================================================\n";
    return z;

}

float multiplication(float x, float y)
{
    float z = x * y;
    cout << "=========================================================================\n";
    cout << "Result: " << z << endl;
    cout << "=========================================================================\n";
    return z;

}

float division(float x, float y)
{
    float z = x / y;
    cout << "=========================================================================\n";
    cout << "Result: " << z << endl;
    cout << "=========================================================================\n";
    return z;

}

int modulu_s(float x, float y)
{
    int e, f, z;
    e = x;
    f = y;
    
    z = e % f;
    cout << "=========================================================================\n";
    cout << "Result: " << z << endl;
    cout << "=========================================================================\n";
    return z;

}