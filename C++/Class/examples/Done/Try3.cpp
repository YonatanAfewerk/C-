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

int sum(int n)
{
   if(n != 1)
        return n + sum(n-1);
   return 1;
   
}


int main()
{
    int x = 100;

    

    cout << "sum: " << sum(x);

	// system("pause > 0");
	return 0;
}
    