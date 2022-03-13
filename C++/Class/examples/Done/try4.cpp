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

int main()
{
    const int max = 100;

    char str[max] = "Yonatan Afewerk";
    char str1[max];
    char str2[max];
    char str3[max] = "Student ";
    char str4[max] = "Haramaya university ";
    cout << "\n\n";

    cout << "Full Name: " << str << endl;


    strcpy(str1, str); // (destination, source) -> to copy
    strncpy(str2, str1, 7); // (destination , source , number of letter to copy)  -> to copy with exact amount 
    strcat(str3, str2); // (destination , source) -> to append
    strncat(str4, str3, 15); // (destination , source , number of letter to copy)  -> to append with exact amount 
    strcmp(str4, str); // to compare strings 


    cout << "Before anything starts : " << str << "\n\n";
    cout << "After strcpy str1 : " << str1 << endl;
    cout << "After strncpy str2 : " << str2 << endl;
    cout << "After strcat str3 : " << str3 << endl;
    cout << "After strncat str4 : " << str4 << "\n\n";

    cout << "String comparing types:: \n";
    cout << "str4 vs str : " << strcmp(str4, str) << " -> if str4 > str " << endl;
    cout << "str4 vs str4 : " << strcmp(str4, str4) << " -> if str4 = str4 " << endl;
    cout << "str vs str4 : " << strcmp(str, str4) << " -> if str < str4 " << endl;




    



    // system("pause > 0");
    return 0;  
}
 