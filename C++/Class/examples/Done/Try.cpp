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
    string name;
    name = "Yonatan";



    fstream File;


    File.open("File.txt", ios::in); // mode out is Write

  if(File.is_open())
  {
      string line;
      while (getline(File, line))
      {
          cout << line << endl;
      }
      File.close();
  }

  

  cout << "File created successfully.";

    // system("pause >0");
    return 0;
}

